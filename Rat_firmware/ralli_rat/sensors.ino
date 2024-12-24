int read_Sensor()
{
  return analogRead(A0) - analogRead(A1)
}
