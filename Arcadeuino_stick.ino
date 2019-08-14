#include <Keyboard.h>
void setup() {

  Keyboard.begin();
  pinMode(2,INPUT_PULLUP);
   pinMode(3,INPUT_PULLUP);
    pinMode(4,INPUT_PULLUP);
     pinMode(5,INPUT_PULLUP);
      pinMode(6,INPUT_PULLUP);
       pinMode(7,INPUT_PULLUP);
        pinMode(8,INPUT_PULLUP);
         pinMode(9,INPUT_PULLUP);
          pinMode(15,INPUT_PULLUP);
           pinMode(16,INPUT_PULLUP);
}



void loop(){
  
  if(digitalRead(2) == LOW){Keyboard.press('d');}
  if(digitalRead(2) == HIGH){Keyboard.release('d');}
   if(digitalRead(3) == LOW){Keyboard.press('a');}
   if(digitalRead(3) == HIGH){Keyboard.release('a');}
    if(digitalRead(4) == LOW){Keyboard.press('w');}
    if(digitalRead(4) == HIGH){Keyboard.release('w');}
     if(digitalRead(5) == LOW){Keyboard.press('s');}
     if(digitalRead(5) == HIGH){Keyboard.release('s');}
      if(digitalRead(6) == LOW){Keyboard.press('u');}
      if(digitalRead(6) == HIGH){Keyboard.release('u');}
       if(digitalRead(7) == LOW){Keyboard.press('i');}
       if(digitalRead(7) == HIGH){Keyboard.release('i');}
        if(digitalRead(8) == LOW){Keyboard.press('o');}
        if(digitalRead(8) == HIGH){Keyboard.release('o');}
         if(digitalRead(9) == LOW){Keyboard.press('j');}
         if(digitalRead(9) == HIGH){Keyboard.release('j');}
          if(digitalRead(15) == LOW){Keyboard.press('k');}
          if(digitalRead(15) == HIGH){Keyboard.release('k');}
           if(digitalRead(16) == LOW){Keyboard.press('l');}
           if(digitalRead(16) == HIGH){Keyboard.release('l');}
       
}
