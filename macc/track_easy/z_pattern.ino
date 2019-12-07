void pattern()
{
  sensor();
  motor(80,85);
  if((a[0]||a[1])&&a[4]&&!(a[8]))
  {
    
    long runningtime=millis();
    while(1)
    {
      if((millis()-runningtime)<350)
      {
        sensor();
        if(a[6]||a[7]||a[8])
        {
          right_turnT();
          return;
        }
      }
      else
      {
        left_turnT();
        return;
      }
    }
  }  
  else if(a[4]&&(a[7]||a[8])){
    right_turnT();
  }
  /*
  if((a[7]||a[8])&&a[4])
  {
    int runningtime=millis();
    while(1)
    {
      if((millis()-runningtime)<400)
      {
        sensor();
        if(a[3]&&(a[0]||a[1]))
        {
          left_turnT();
          return;
        }
      }
      else
      {
        right_turnT();
        return;
      }
    }
  }*/
}


void right_turnT()
{
  motor(120,120);
  delay(140);
  motor(100,-100);
  delay(260);
  while(true)
  {
   sensor();
    if(a[4]) break;
    motor(110,-120);
  }
  motor(-100,100);
  delay(20);
 //motor(0,0);
  //delay(2000);
}
void left_turnT()
{
 // motor(120,120);
  //delay(50);
  motor(-100,100);
  delay(240);
  while(true)
  {
   sensor();
    if(a[5] || a[4] || a[6] || a[7]||a[3]||a[2]) break;
    motor(-120,110);
  }
  motor(100,-100);
  delay(20);
}
void left_turn()
{
  motor(100,100);
  delay(20);
  
 //motor(0,0);
 //delay(2000);
  motor(-100,100);
  delay(150);
  //motor(0,0);
  //delay(2000);
  while(true)
  {
   sensor();
    if(a[5]) break;
    motor(-120,110);
  }
  motor(100,-100);
  delay(10);
  //motor(0,0);
  //delay(2000);
}

void right_turn()
{
  motor(100,-100);
  delay(150);
  motor(0,0);
  delay(3000);
  while(true)
  {
    sensor();
    if(a[3]) break;
    motor(110,-120);
  }
  motor(-100,100);
  delay(10);

}
