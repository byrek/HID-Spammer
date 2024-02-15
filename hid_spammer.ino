#include <Keyboard.h>

long randNumber;
long randReb;
long skillno;
long randrebmax;

void setup () {
  Keyboard.begin();
  randomSeed(analogRead(0));
  randReb=0;
  randrebmax=random(10,20);
  
}

void loop ()
{
  if (randReb>=randrebmax)  
    { 
    randReb=0;
    randrebmax=random(10,20);
    Keyboard.press(0xC3); 
    Keyboard.releaseAll();
    
    } //F2
  randReb++;
  Keyboard.press(0xC2); Keyboard.releaseAll(); //F1
  skillno=random(0,4);
    {

     if (skillno==0) { Keyboard.press(0xC5); Keyboard.releaseAll(); } //F4
     if (skillno==1)  { Keyboard.press(0xC6); Keyboard.releaseAll(); } //F5
     if (skillno==2)  { Keyboard.press(0xC7); Keyboard.releaseAll(); } //F6
     if (skillno==3)  { Keyboard.press(0xC8); Keyboard.releaseAll(); } //F7
     if (skillno==4)  { Keyboard.press(0xC9); Keyboard.releaseAll(); } //F8
     }
  randNumber=random(250,500);
  delay(randNumber);
}
