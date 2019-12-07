int sensor()
{
  int pos_, numerator = 0, denominator = 0, FO;

  for (int i = 0; i < TOTAL_NUM_SENSOR; i++)
  {
    a[i] = analogRead(i);

#if DEBUG_SENSOR_A
    Serial.print(a[i]);
    Serial.print(" ");
    Serial.print(" ");
#endif

    int W[9]= {500,400,400,400,400,400,400,400,450};
    if ( a[i] > W[i] )
    {
      a[i] = 1;
      if( i< NUM_PID_SENSOR)
      {
        numerator = numerator + i;
        denominator++;
      }
    }
    else
    {
      a[i] = 0;
    }

#if DEBUG_SENSOR_D
    Serial.print(a[i]);
    Serial.print(' ');
    Serial.print(' ');
#endif

  }

  if (denominator  == 0)pos_ =  setpoint - lastError;
  else pos_ = (100 * numerator) / denominator;

#if DEBUG_SENSOR_POS
  Serial.print("   pos= ");
  Serial.print(pos_);
  Serial.print("  ");
#endif
#if led
for(int ana=0;ana<9;ana++)
{
  if(a[ana]==1)
  digitalWrite(ana+44 ,HIGH);
  else
  digitalWrite(ana+44,LOW);
}
#endif
Serial.println();

  return pos_;
}
