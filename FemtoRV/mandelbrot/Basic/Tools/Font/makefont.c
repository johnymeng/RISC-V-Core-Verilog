#include <stdio.h>
#include "font8x8.xpm"

const int font_width  = 8;
const int font_height = 8;
const int char_per_line = 64;
const int lines = 4;

int get_font_column(int c, int column) {
   // Invert every 4 characters (seems to be needed by .INIT of SB_RAM40_4K)
   int ofs = c % 4;
   c = c - ofs + (3 - ofs);
   
   int result = 0;
   int char_line   = c / char_per_line;
   int char_column = c % char_per_line;
   for(int i=0; i<font_height; ++i) {
      int xpm_line   = 3 + (char_line * font_height) + i;
      int xpm_column = (char_column * font_width) + column;
      if(font8x8_xpm[xpm_line][xpm_column] != ' ') {
	 result = result | (1 << i);
      }
   }
   return result;
}

char digit_to_hex(int x) {
   if(x < 10) {
      return ('0' + x);
   } else {
      return ('a' + (x - 10));
   }
}

char digit_to_HEX(int x) {
   if(x < 10) {
      return ('0' + x);
   } else {
      return ('A' + (x - 10));
   }
}

char* int_to_hex(int x) {
   static char buf[3] = {0,0,0};
   buf[0] = digit_to_hex(x >> 4);
   buf[1] = digit_to_hex(x & 15);
   return buf;
}

void printb(int x) {
   for(int b=0; b<8; ++b) {
      printf("%c", (x & (1<<b)) ? '*' : ' ');
   }
}


// #define TEST 

void gen_chars(int init_lineno, int first) {
#ifndef TEST   
   printf(".INIT_%c(256'h", digit_to_HEX(init_lineno));
#endif
   for(int character = first; character < first + 4; ++character) {
      for(int column=0; column<font_width; ++column) {
#ifdef TEST
	 printb(get_font_column(character, font_width-1-column));
	 printf("\n"); 
#else	 
	 printf("%s",int_to_hex(get_font_column(character, font_width-1-column)));
#endif	 
      }
#ifdef TEST      
      printf("\n"); 
#endif      
   }
#ifndef TEST
   printf("),\n");
#endif   
}



int main() {
   int character = 0;
   for(int init_lineno=0; init_lineno<16; ++init_lineno) {
      gen_chars(init_lineno, character);
      character += 4;
   }
   printf("\n");
   for(int init_lineno=0; init_lineno<16; ++init_lineno) {
      gen_chars(init_lineno, character);
      character += 4;
   }
   printf("\n");
   for(int init_lineno=0; init_lineno<16; ++init_lineno) {
      gen_chars(init_lineno, character);
      character += 4;
   }
   printf("\n");
   for(int init_lineno=0; init_lineno<16; ++init_lineno) {
      gen_chars(init_lineno, character);
      character += 4;
   }
}
