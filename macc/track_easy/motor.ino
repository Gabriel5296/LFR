void motor(int LS, int RS)
{
  digitalWrite(STBY,HIGH);
  if (LS > 0)motorL( 1, 0, LS);
  else if (LS == 0)motorL( 0, 0, 0);
  else motorL( 0, 1, (-1)*LS);

  if (RS > 0 )motorR( 1, 0, RS);
  else if (RS == 0)motorR( 0, 0, 0);
  else motorR( 0, 1, (-1)*RS);
  
   
}

void motorL(int ina, int inb, int mspeed)
{
  digitalWrite(inC, ina);
  digitalWrite(inD, inb);
  analogWrite(enLeft, mspeed);
}

void motorR(int ina, int inb, int mspeed)
{
  digitalWrite(inA, ina);
  digitalWrite(inB, inb);
  analogWrite(enRight, mspeed);
} 
