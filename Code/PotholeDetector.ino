#define red 8
#define green 10
#define yellow 11
#define trigPin 12
#define echoPin 13

float duration = 0;
float distance = 0;

void setup()
{
	pinMode(trigPin,OUTPUT);
	pinMode(echoPin,INPUT);
	pinMode(red,OUTPUT);
	pinMode(yellow,OUTPUT);
	pinMode(green,OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	digitalWrite(trigPin,LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin,HIGH);
	delayMicroseconds(2);
	digitalWrite(trigPin,LOW);
	duration = pulseIn(echoPin,HIGH);
	distance = duration*0.034/2;
	if(distance < 3)
	{
		digitalWrite(yellow, HIGH);
		delay(1000);
		digitalWrite(yellow, LOW);
	}
	else if(distance >= 3 && distance < 5)
	{
		digitalWrite(green, HIGH);
		delay(1000);
		digitalWrite(green, LOW);
	}
	else if(distance >= 5 && distance <= 7)
	{
		digitalWrite(yellow, HIGH);
		delay(1000);
		digitalWrite(yellow, LOW);
	}
	else
	{
		digitalWrite(red, HIGH);
		delay(1000);
		digitalWrite(red, LOW);
	}
	delay(100);
}