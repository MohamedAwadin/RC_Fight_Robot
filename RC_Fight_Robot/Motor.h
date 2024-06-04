// Motor.h

#ifndef MOTOR_H
#define MOTOR_H

#define MOTOR_L1 8
#define MOTOR_L2 9
#define MOTOR_R1 10
#define MOTOR_R2 11
#define WEAPON_1 12
#define WEAPON_2 13

void MotorInit();
void Forward();
void Backward();
void Left();
void Right();
void Stop();
void MoveWeapon();
void StopWeapon();

#endif
