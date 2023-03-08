void motor_setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT); // ccw
  pinMode(7, OUTPUT); // clockwise
  pinMode(12, OUTPUT); // ccw
  pinMode(13, OUTPUT); // clockwise
}

/**
Move the robot forward
@int pwm: PWM value between 0 and 255- controls the speed
*/
void forward(int pwm) {
  analogWrite(7, 0); 
  analogWrite(12, 0);
  analogWrite(6, pwm);
  analogWrite(13, pwm-10); 
}

/**
Move the robot backwards
@int pwm: PWM value between 0 and 255- controls the speed
*/
void backward(int pwm) {
  analogWrite(6, 0);
  analogWrite(7, pwm); 
  analogWrite(12, pwm-10);
  analogWrite(13, 0); 
}

/**
Stop the robot
@int pwm: 
@int ms: duration (ms)
*/
void stop() {
  analogWrite(6, 0);
  analogWrite(7, 0); 
  analogWrite(12, 0);
  analogWrite(13, 0); 
}

