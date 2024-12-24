void servo_rull()
{
  myservo.write(map(u, -600, 600, 50, 130));
  delay(10);
  
}


void speedmotors()
{
  analogWrite(???, map(abs(u), 600, 0,Minspeed, Maxspeed));
}
