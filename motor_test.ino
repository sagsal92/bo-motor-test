void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW); 
  delay(1000);            
  digitalWrite(3, HIGH);                               
  digitalWrite(2, LOW); 
  delay(1000);                    
}
