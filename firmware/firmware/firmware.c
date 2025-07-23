#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

struct keys_calibration
{
    uint8_t a;
    uint16_t a_last;
    uint8_t b;
    uint16_t b_last;
    uint8_t c;
    uint16_t c_last;
    uint8_t d;
    uint16_t d_last;
    uint8_t e;
    uint16_t e_last;
    uint8_t f;
    uint16_t f_last;
    uint8_t g;
    uint16_t g_last;
    uint8_t h;
    uint16_t h_last;
    uint8_t i;
    uint16_t i_last;
    uint8_t j;
    uint16_t j_last;
    uint8_t k;
    uint16_t k_last;
    uint8_t l;
    uint16_t l_last;
    uint8_t m;
    uint16_t m_last;
    uint8_t n;
    uint16_t n_last;
    uint8_t o;
    uint16_t o_last;
    uint8_t p;
    uint16_t p_last;
    uint8_t q;
    uint16_t q_last;
    uint8_t r;
    uint16_t r_last;
    uint8_t s;
    uint16_t s_last;
    uint8_t t;
    uint16_t t_last;
    uint8_t u;
    uint16_t u_last;
    uint8_t v;
    uint16_t v_last;
    uint8_t w;
    uint16_t w_last;
    uint8_t x;
    uint16_t x_last;
    uint8_t y;
    uint16_t y_last;
    uint8_t z;
    uint16_t z_last;
    uint8_t one;
    uint16_t one_last;
    uint8_t two;
    uint16_t two_last;
    uint8_t three;
    uint16_t three_last;
    uint8_t four;
    uint16_t four_last;
    uint8_t five;
    uint16_t five_last;
    uint8_t six;
    uint16_t six_last;
    uint8_t seven;
    uint16_t seven_last;
    uint8_t eight;
    uint16_t eight_last;
    uint8_t nine;
    uint16_t nine_last;
    uint8_t zero;
    uint16_t zero_last;
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
