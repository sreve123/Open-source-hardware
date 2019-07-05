void dot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(250);
}

void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

int income;



void loop()
{
 if(Serial.available()>0){
    income = Serial.read();
    switch(income)
      {
      case'a': dot();
               dash();
               break;
      case'b': dash();
                 dot();
                 dot();
                 dot();
                break;
        case'c': dash();
                 dot();
                 dash();
                 dot();
                 break;
        case'd': dash();
                 dot();
                 dot();
                  break;
        case'e': dot();
                  break;
        case'f': dot();
                 dot();
                 dash();
                 dot(); 
              break;
        case'g': dash();
                 dash();
                 dot();
                break;
        case'h': dot();
                 dot();
                 dot();
                 dot();
                break;
        case'i': dot();
                 dot();
                  break;
        case'j': dot();
                 dash();
                 dash();
                 dash();
                   break;
        case'k': dash();
                 dot();
                 dash(); 
                 break;
        case'l': dot();
                 dash();
                 dot();
                 dot();
                 break;
        case'm': dash();
                 dash();
                 break;
        case'n': dash();
                 dot();
                      break;
        case'o': dash();
                 dash();
                 dash();   
                    break;
        case'p': dot();
                 dash();
                 dash();
                 dot();
                 break;
        case'q': dash();
                 dash();
                 dot();
                 dash();
                    break;
        case'r': dot();
                 dash();
                 dot(); 
                break;
        case's': dot();
                 dot();
                 dot();
                       break;
        case't': dash();   
                 break;
        case'u': dot();
                 dot();
                 dash();
                 break;
        case'v': dot();
                 dot();
                 dot();
                 dash(); 
                    break;
        case'w': dot();
                 dash();
                 dash();  
                  break;
        case'x': dash();
                 dot();
                 dot();
                 dash();
                  break;
        case'y': dash();
                 dot();
                 dash();
                 dash();
                 break;
        case'z': dash();
                 dash();
                 dot();
                 dot();
                 break;
        case' ': delay(1000);
                 break;
      }
     delay(250);                                                                                                                                                     
                                                                                                                                                           
  }                                                                                                                                                       
}
