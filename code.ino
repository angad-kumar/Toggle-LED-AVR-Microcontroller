void setup()
{
  DDRB = 0xFF;
}
void loop()
{
  PORTB ^= 0x20; 
  delay(1000);
}
