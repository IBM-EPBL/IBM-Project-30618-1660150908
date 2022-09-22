void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  double a=analogRead(A0);
  double t=(((a/1024*5)-0.5)*100);
  Serial.println(t);
  delay(1000);
  if(t>50){
  tone(13,220,100);
  Serial.print("temperature is high");
  Serial.println(t);
  delay(200);
  }
  else if(t<0){
  tone(13,220,100);
  Serial.print("temperature is too low");
  Serial.println(t);
  delay(200);
  }
  else
  {
  Serial.print("temperature is moderate");
  Serial.println(t);
  }
  int b=digitalRead(3);
  if(b==1)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);  
  }
}
