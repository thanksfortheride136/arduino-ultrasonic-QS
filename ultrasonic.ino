int trig_pin = 10;
int echo_pin = 9;
float duration, distance;


void setup()
{
	pinMode(trig_pin, OUTPUT);
  	pinMode(echo_pin, INPUT);
  	Serial.begin(9600);
}

void loop()
{
	digitalWrite(trig_pin, LOW);
  	delayMicroseconds(2);
  	digitalWrite(trig_pin, HIGH);
  	delayMicroseconds(10);
  	digitalWrite(trig_pin, LOW);
  
  	duration = pulseIn(echo_pin, HIGH);
  	distance = duration / 58;
  
  	Serial.println("Distance: ");
  	Serial.println(distance);
  	delay(100);
}
