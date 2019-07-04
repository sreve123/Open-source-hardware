void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
  
}

int income = 0;

void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
      income = income-48;
        switch(income)
        {
          case'0': digitalWrite(7 ,0);
                 digitalWrite(6 ,0);
                   digitalWrite(5 ,0);
                   digitalWrite(4 ,0);
          case'1': digitalWrite(7 ,0);
                   digitalWrite(6 ,0);
                   digitalWrite(5 ,0);
                   digitalWrite(4 ,1);
          case'2': digitalWrite(7, 0);
                   digitalWrite(6, 0);
                   digitalWrite(5, 1);
                   digitalWrite(4, 0);
          case'3': digitalWrite(7, '0');
                   digitalWrite(6, '0');
                   digitalWrite(5, '1');
                   digitalWrite(4, '1');
          case'4': digitalWrite(7, 0);
                   digitalWrite(6, 1);
                   digitalWrite(5, 0);
                   digitalWrite(4, 0);
          case'5': digitalWrite(7, 0);
                   digitalWrite(6, 1);
                   digitalWrite(5, 0);
                   digitalWrite(4, 1);
          case'6': digitalWrite(7, 0);
                   digitalWrite(6, 1);
                   digitalWrite(5, 1);
                   digitalWrite(4, 0);
          case'7': digitalWrite(7, 0);
                   digitalWrite(6, 1);
                   digitalWrite(5, 1);
                   digitalWrite(4, 1);
          case'8': digitalWrite(7, 1);
                   digitalWrite(6, 0);
                   digitalWrite(5, 0);
                   digitalWrite(4, 0);
          case'9': digitalWrite(7, 1);
                   digitalWrite(6, 0);
                   digitalWrite(5, 0);
                   digitalWrite(4, 1);
          
        }
    delay(2000);
  }

}
