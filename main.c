#include "stdio.h"
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    tusb_init();
    printf("Hello World! \n");
    return 0;
}

