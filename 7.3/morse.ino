#include <Morse.h>

Morse morse(13); 

char teststring;
void setup()
{
}

void loop()
{
  while(Serial.available()>0){
    teststring = Serial.read();
    switch(teststring)
      {
        case'a': morse.dot();
                 morse.dash();
        case'b': morse.dash();
                 morse.dot();
                 morse.dot();
                 morse.dot();
        case'c': morse.dash();
                 morse.dot();
                 morse.dash();
                 morse.dot();
        case'd': morse.dash();
                 morse.dot();
                 morse.dot();
        case'e': morse.dot();
        case'f': morse.dot();
                 morse.dot();
                 morse.dash();
                 morse.dot();   
        case'g': morse.dash();
                 morse.dash();
                 morse.dot();                             
        case'h': morse.dot();
                 morse.dot();
                 morse.dot();
                 morse.dot();          
        case'i': morse.dot();
                 morse.dot();        
        case'j': morse.dot();
                 morse.dash();
                 morse.dash();
                 morse.dash();  
        case'k': morse.dash();
                 morse.dot();
                 morse.dash(); 
        case'l': morse.dot();
                 morse.dash();
                 morse.dot();
                 morse.dot();  
        case'm': morse.dash();
                 morse.dash(); 
        case'n': morse.dash();
                 morse.dot();
        case'o': morse.dash();
                 morse.dash();
                 morse.dash();   
        case'p': morse.dot();
                 morse.dash();
                 morse.dash();
                 morse.dot();
        case'q': morse.dash();
                 morse.dash();
                 morse.dot();
                 morse.dash();
        case'r': morse.dot();
                 morse.dash();
                 morse.dot(); 
        case's': morse.dot();
                 morse.dot();
                 morse.dot();    
        case't': morse.dash();   
        case'u': morse.dot();
                 morse.dot();
                 morse.dash();     
        case'v': morse.dot();
                 morse.dot();
                 morse.dot();
                 morse.dash(); 
        case'w': morse.dot();
                 morse.dash();
                 morse.dash();     
        case'x': morse.dash();
                 morse.dot();
                 morse.dot();
                 morse.dash();  
        case'y': morse.dash();
                 morse.dot();
                 morse.dash();
                 morse.dash();
        case'z': morse.dash();
                 morse.dash();
                 morse.dot();
                 morse.dot();
        case' ': delay(1000);
      }
     delay(250);                                                                                                                                                     
                                                                                                                                                           
  }                                                                                                                                                       
}
