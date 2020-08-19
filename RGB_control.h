/*
  RGB_control.h

  Autor: jptrindade3
  Abril de 2019

  Descrição: A ideia dessa biblioteca é controlar os padrões de brilho de LEDs RGB, podendo escolher alguns padrões de luminosidade e os pinos que serão utilizados para esse controle.
*/

#ifndef RGB_control
#define RGB_control

#include <Arduino.h>

class RGBctrl
{
    public:
      RGBctrl(int pr, int pg, int pb);
      void RGB_test();
      void blink_white(int blink_freq);
      void RGB_classic(int change_speed);

    private:
      int _pr;
      int _pg;
      int _pb;
      int _blink_freq;
      int _change_speed;
};

#endif
