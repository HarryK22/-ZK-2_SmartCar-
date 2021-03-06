/*
 * MotorTest_02.ino
 *
 * Created: 11/20/2018 7:27:31 PM
 * Author: Harry Kunte
 */

#define motor1_A		11
#define motor1_B		10
#define motor1_Speed	 9

#define motor2_A		 6
#define motor2_B		 5
#define motor2_Speed	 3


void setup()
{
	pinMode(motor1_A, OUTPUT);
	pinMode(motor1_B, OUTPUT);

	pinMode(motor2_A, OUTPUT);
	pinMode(motor2_B, OUTPUT);
}

void loop()
{
	// motor1
	for (int i = 0; i > 256; i += 5)
	{
		digitalWrite(motor1_A, HIGH);		// A = HIGH and B = LOW means the motor will turn right
		digitalWrite(motor1_B, LOW);
		analogWrite(motor1_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}
	for (int i = 255; i > 0; i -= 5)
	{
		digitalWrite(motor1_A, HIGH);		// A = HIGH and B = LOW means the motor will turn right
		digitalWrite(motor1_B, LOW);
		analogWrite(motor1_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}

	// motor2
	for (int i = 0; i < 256; i += 5)
	{
		digitalWrite(motor2_A, HIGH);		// A = HIGH and B = LOW means the motor will turn right
		digitalWrite(motor2_B, LOW);
		analogWrite(motor2_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}
	for (int i = 255; i > 0; i -= 5)
	{
		digitalWrite(motor2_A, HIGH);		// A = HIGH and B = LOW means the motor will turn right
		digitalWrite(motor2_B, LOW);
		analogWrite(motor2_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}

	// turn vice versa

	// motor1
	for (int i = 0; i < 256; i += 5)
	{
		digitalWrite(motor1_A, LOW);		// A = LOW and B = HIGH means the motor will turn left
		digitalWrite(motor1_B, HIGH);
		analogWrite(motor1_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}
	for (int i = 255; i > 0; i -= 5)
	{
		digitalWrite(motor1_A, LOW);		// A = LOW and B = HIGH means the motor will turn left
		digitalWrite(motor1_B, HIGH);
		analogWrite(motor1_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}
	// motor2
	for (int i = 0; i < 256; i += 5)
	{
		digitalWrite(motor2_A, LOW);		// A = LOW and B = HIGH means the motor will turn left
		digitalWrite(motor2_B, HIGH);
		analogWrite(motor2_Speed, i);		// speed counts from 0 to 255
		delay(20);
	}
	for (int i = 255; i > 0; i -= 5)
	{
		digitalWrite(motor2_A, LOW);		// A = LOW and B = HIGH means the motor will turn left
		digitalWrite(motor2_B, HIGH);
		analogWrite(motor2_Speed, i);		// speed counts from 0 to 255
		delay(20);
 }

}
