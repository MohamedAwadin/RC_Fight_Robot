// Main_Code.ino

#include "Motor.h"

// Define Input Connections
#define CH1 2  
#define CH2 3
#define CH3 4
#define CH4 5
#define CH6 6  // weapon

// Integers to represent values from sticks and pots
int ch1Value;
int ch2Value;
int ch3Value;
int ch4Value; 
int ch5Value;

// Boolean to represent switch value
bool ch6Value;

// Function prototypes
int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue);
bool readSwitch(byte channelInput, bool defaultValue);
void processInput();

void setup(){
  // Set up serial monitor
  Serial.begin(9600);
  
  // Set all pins as inputs
  pinMode(CH1, INPUT);
  pinMode(CH2, INPUT);
  pinMode(CH3, INPUT);
  pinMode(CH4, INPUT);
  pinMode(CH6, INPUT);  // weapon
  
  // Initialize motors
  MotorInit();
}

void loop() {
  // Process input and perform actions
  processInput();
  
  // Print to Serial Monitor
  Serial.print("Ch1: ");
  Serial.print(ch1Value);
  Serial.print(" | Ch2: ");
  Serial.print(ch2Value);
  Serial.print(" | Ch3: ");
  Serial.print(ch3Value);
  Serial.print(" | Ch4: ");
  Serial.print(ch4Value);
  Serial.print(" | Ch6: ");
  Serial.println(ch6Value);

  delay(500);
}

// Read the number of a specified channel and convert to the range provided.
// If the channel is off, return the default value
int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue){
  int ch = pulseIn(channelInput, HIGH, 30000);
  if (ch < 100) return defaultValue;
  return map(ch, 1000, 2000, minLimit, maxLimit);
}

// Read the switch channel and return a boolean value
bool readSwitch(byte channelInput, bool defaultValue){
  int intDefaultValue = (defaultValue)? 100: 0;
  int ch = readChannel(channelInput, 0, 100, intDefaultValue);
  return (ch > 50);
}

// Process input values and determine actions
void processInput(){
  // Get values for each channel
  ch1Value = readChannel(CH1, -100, 100, 0);
  ch2Value = readChannel(CH2, -100, 100, 0);
  ch3Value = readChannel(CH3, -100, 100, -100);
  ch4Value = readChannel(CH4, -100, 100, 0);
  ch6Value = readSwitch(CH6, false);

  // Control movement based on channel values
  if(ch2Value == 0) Stop();
  else if(ch2Value < -20) Backward();
  else if(ch2Value > 20) Forward();

  if(ch4Value == 0) Stop();
  else if(ch4Value < -20) Left();
  else if(ch4Value > 20) Right();

  // Control weapon based on channel values
  if(ch6Value == 0) StopWeapon();
  else if(ch1Value == 1) MoveWeapon();
}
