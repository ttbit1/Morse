char a=0;
int pin=13;
 #include "MORSE_H"
 void setup() {
  Serial.begin(9600);//设置通信波特率
  // put your setup code here, to run once:
}

void loop() {
   if(Serial.available()>0)
    {
    a=Serial.read();
    switch(a)
    {
       case 'A':dot();dash();delay(3000);break;
       case 'B':dash();dot();dot();dot();delay(3000);break;
       case 'C':dash();dot();dash();dot();delay(3000);break;
       case 'D':dash();dot();dot();delay(3000);break;
       case 'E':dot();delay(3000);break;
       case 'F':dot();dot();dash();dot();delay(3000);break;
       case 'G':dash();dash();dot();delay(3000);break;
       case 'H':dot();dot();dot();dot();delay(3000);break;
       case 'I':dot();dot();delay(3000);break;
       case 'J':dot();dash();dash();dash();delay(3000);break;
       case 'K':dash();dot();dash();delay(3000);break;
       case 'L':dot();dash();dot();dot();delay(3000);break;
       case 'M':dash();dash();delay(3000);break;
       case 'N':dash();dot();delay(3000);break;
       case 'O':dash();dash();dash();delay(3000);break;
       case 'P':dot();dash();dash();dot();delay(3000);break;
       case 'Q':dash();dash();dot();dash();delay(3000);break;
       case 'R':dot();dash();dot();delay(3000);break;
       case 'S':dot();dot();dot();delay(3000);break;
       case 'T':dash();delay(3000);break;
       case 'U':dot();dot();dash();delay(3000);break;
       case 'V':dot();dot();dot();dash();delay(3000);break;
       case 'W':dot();dash();dash();delay(3000);break;
       case 'X':dash();dot();dot();dash();delay(3000);break;   
       case 'Y':dash();dot();dash();dash();delay(3000);break;
       case 'Z':dash();dash();dot();dot();delay(3000);break;
       case '\0':c_space(); delay(3000); break;
       case '\n': w_space(); delay(3000);break;
     }
  }
}
  // put your main code here, to run repeatedly:
  void dot()
  {
  digitalWrite(pin,LOW);
  delay(250);
  digitalWrite(pin,HIGH);
  delay(250);
  }
  void c_space()
  {
  digitalWrite(pin,LOW);
  delay(250*3);
  }

  void dash()
  {
   digitalWrite(pin,LOW);
  delay(250);
  digitalWrite(pin,HIGH);
  delay(1000);
  }
  void w_space()
  {
    digitalWrite(pin,LOW);
    delay(250*7);
  }
 
  
#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/

Morse    KEYWORD1
dash     KEYWORD2
dot      KEYWORD2
c_space  KEYWORD2
w_space  KEYWORD2

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _dottime=250;
  Serial.begin(9600); 
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::c_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
}

void Morse::w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7);
}
