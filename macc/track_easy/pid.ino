int error, e, lastError = 0, LS, RS, pos;
void pid()
{
   pos = sensor();
if((a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8])>= 3)
 {
   pos__ = pos;
   pattern();
   pos = sensor();
 }
  error = (setpoint - pos);
  e = kp * error + kd * (error - lastError);
  lastError = error;

  LS = BaseSpeed - e;
  RS = BaseSpeed + e;

  if (LS > MaxSpeed) LS = MaxSpeed;
  if (RS > MaxSpeed) RS = MaxSpeed;
  if (LS < MINUS) LS = MINUS;
  if (RS < MINUS) RS = MINUS;
/*#if PID
  Serial.print("error= ");
  Serial.print(error);
  Serial.print('\t');
  Serial.print("LS= ");
  Serial.print(LS);
  Serial.print('\t');
  Serial.print("   RS= ");
  Serial.print(RS);
#endif*/
  motor(LS , RS);
 
}
