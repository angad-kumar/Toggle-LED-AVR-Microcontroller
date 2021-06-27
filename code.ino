void setup()
{
  DDRB = led;
}
void loop()
{
  PORTB ^= 0x20; 
  delay(1000);
}
