#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

struct keys_calibration
{
    uint8_t a;
    uint16_t a_last;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t f;
    uint8_t g;
    uint8_t h;
    uint8_t i;
    uint8_t j;
    uint8_t k;
    uint8_t l;
    uint8_t m;
    uint8_t m;
    uint8_t o;
    uint8_t p;
    uint8_t q;
    uint8_t r;
    uint8_t s;
    uint8_t t;
    uint8_t u;
    uint8_t v;
    uint8_t w;
    uint8_t x;
    uint8_t y;
    uint8_t z;
    uint8_t one;
    uint8_t two;
    uint8_t three;
    uint8_t four;
    uint8_t five;
    uint8_t six;
    uint8_t seven;
    uint8_t eight;
    uint8_t nine;
    uint8_t zero;
};

void adc_handler(){
    adc_fifo_get()
}



void poll(){
    gpio_put_masked(0b1111<<20, 0);
    adc_select_input(40)
    uint16_t am1 = adc_read();
    
}

int main()
{
    //setup stdio all
    stdio_init_all();
    //init adc and adc pins
    adc_init();
    adc_gpio_init(40);
    adc_gpio_init(41);
    adc_gpio_init(42);
    adc_gpio_init(43);
    //init gpio pins to select mux
    gpio_init(20);
    gpio_init(21);
    gpio_init(22);
    gpio_init(23);
    gpio_set_dir(20, true);
    gpio_set_dir(21, true);
    gpio_set_dir(22, true);
    gpio_set_dir(23, true);
    gpio_put_masked(0b1111<<20, 0);
    //set fifo queue
    adc_fifo_setup(true, false, 2, false, false );

    while (true) {
        
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
