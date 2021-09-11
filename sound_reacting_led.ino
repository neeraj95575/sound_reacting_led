int mic = A0;
int led = 13;
int led1 = 12;
int led2 = 11;

void setup() 
{
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop() {
  int value = analogRead(A0)*50;
  Serial.println(value);

  if (value >=390)
  {
   digitalWrite(13,HIGH);
  }

  else if (value <=350 && value >=90)
  {
   digitalWrite(12,HIGH);
  }

  else if (value >=30 && value <=90)
  {
   digitalWrite(11,HIGH);
  }
  
  else
  {
   digitalWrite(13,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(11,HIGH);
   }
 }
