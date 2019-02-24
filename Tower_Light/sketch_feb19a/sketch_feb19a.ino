int RED_LED = 10;
int YELLOW_LED = 9;
int GREEN_LED = 8;
int BUZZER = 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(RED_LED, OUTPUT);
pinMode(YELLOW_LED, OUTPUT);
pinMode(GREEN_LED, OUTPUT);
pinMode(BUZZER, OUTPUT);
}

void loop() {
  if(Serial.available())
  {

    char data = Serial.read();

    if(data == 'A')
    {
      digitalWrite(RED_LED,HIGH);
      digitalWrite(YELLOW_LED,LOW);
      digitalWrite(GREEN_LED,LOW);
      digitalWrite(BUZZER,LOW);
    }
    else if(data == 'B')
    {
      digitalWrite(RED_LED,LOW);
      digitalWrite(YELLOW_LED,HIGH);
      digitalWrite(GREEN_LED,LOW);
      digitalWrite(BUZZER,LOW);

    }
    else if(data == 'C')
    {

      digitalWrite(RED_LED,LOW);
      digitalWrite(YELLOW_LED,LOW);
      digitalWrite(GREEN_LED,HIGH);
      digitalWrite(BUZZER,LOW);
      
    }
    else if(data == 'D')
    {
      digitalWrite(YELLOW_LED,LOW);
      digitalWrite(GREEN_LED,LOW);
      digitalWrite(BUZZER,HIGH);
      
      while(data == 'D')
      {
      digitalWrite(RED_LED,HIGH);
      delay(1000);
      digitalWrite(RED_LED,LOW);
      delay(1000);  
      }
    }
    else
    {
    }
  }
}
