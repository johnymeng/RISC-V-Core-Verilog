module SOC(input CLK,
           input RESET,
           output [4:0] LEDS,
           input RXD, 
           output TXD);
    reg [4:0] count = 0;
    reg [4:0] counter = 0;

    always @ (posedge CLK) begin
        count <= count+1;
        counter <= counter+1;
    end

    wire true = (counter == 5'b11111);

    assign LEDS = (true) ? count : 0;
    assign TXD = 1'b0;

endmodule