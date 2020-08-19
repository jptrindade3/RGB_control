/*
  RGB_control.cpp

  Autor: jptrindade3
  Abril de 2019

  Descrição: A ideia dessa biblioteca é controlar os padrões de brilho de LEDs RGB, podendo escolher alguns padrões de luminosidade e os pinos que serão utilizados para esse controle.
*/

#include "RGB_control.h"

RGBctrl::RGBctrl(int pr, int pg, int pb)
{
  pinMode(pr, OUTPUT);
  _pr = pr;
  pinMode(pg, OUTPUT);
  _pg = pg;
  pinMode(pb, OUTPUT);
  _pb = pb;
}

void RGBctrl::RGB_classic(int change_speed)
{
  int r, g, b;
  _change_speed = change_speed;
  
  for(r=0; r<=255; r++){
    analogWrite(_pr, r);
    delay(_change_speed);
  }

  for(b=255; b>=0; b--){
    analogWrite(_pb, b);
    delay(_change_speed);
  }

  for(g=0; g<=255; g++){
    analogWrite(_pg, g);
    delay(_change_speed);
  }

  for(r=255; r>=0; r--){
    analogWrite(_pr, r);
    delay(_change_speed);  
  }

  for(b=0; b<=255; b++){
    analogWrite(_pb, b);
    delay(_change_speed);
  }

  for(g=255; g>=0; g--){
    analogWrite(_pg, g);
    delay(_change_speed);  
  }
}

void RGBctrl::blink_white(int blink_freq)
{
  analogWrite(_pr, 255);
  analogWrite(_pg, 255);
  analogWrite(_pb, 255);
  delay(50);
  analogWrite(_pr, 0);
  analogWrite(_pg, 0);
  analogWrite(_pb, 0);
  delay(50);
}

void RGBctrl:: RGB_test()
{
  analogWrite(_pr, 255);
  delay(1000);
  analogWrite(_pr, 0);

  analogWrite(_pg, 255);
  delay(1000);
  analogWrite(_pg, 0);

  analogWrite(_pb, 255);
  delay(1000);
  analogWrite(_pb, 0);
}
