#define DEBUG_SENSOR_A 1
#define DEBUG_SENSOR_D 0
#define DEBUG_SENSOR_POS 0
#define DEBUG_SENSOR 0
#define SONAR_PID 0
#define PID 0
#define led 0

#define kp .3
#define kd .3
#define MINUS 0
#define setpoint 400

#define BaseSpeed 150
#define MaxSpeed 220

#define TOTAL_NUM_SENSOR 9
#define NUM_PID_SENSOR 9

int a[TOTAL_NUM_SENSOR];
int pos__ = 0;
 

#define inC 11
#define inD 12
#define enLeft 13
#define STBY 10
#define enRight 7
#define inA 8
#define inB 9

void setup() {

  Serial.begin(9600);
  
  pinMode(enLeft, OUTPUT);
  pinMode(inA, OUTPUT);
  pinMode(inB, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(inC, OUTPUT);
  pinMode(inD, OUTPUT);
  pinMode(enRight, OUTPUT);
  
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);



}

void loop() {
 // junction();
pid();
 // Serial.println(millis());

}
