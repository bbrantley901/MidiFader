#include "stdio.h"
#include "pico/stdlib.h"
#include "tusb.h"

int main() {
    stdio_init_all();
    tud_init(BOARD_TUD_RHPORT);
    //Initialize ADC (Stage 2)
    //Initialize the USB/Midi Task as ISR (Stage 1)
    while(1)
    {
      uint8_t midiMsg[4] = {0,0,0,0};
      printf("Hello World! \n");
      tud_midi_packet_write(midiMsg);
      //Continuously send midi message packet
      busy_wait_ms(1000);
    }
        
    return 0;
}

// Need to implement some usbd callback functions 