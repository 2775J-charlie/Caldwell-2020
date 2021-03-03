using namespace vex;

extern brain Brain;

// VEXcode devices

//Motors
extern motor LF;
extern motor LB;
extern motor RB;
extern motor RF;
extern motor IntakeR;
extern motor IntakeL;
extern motor RollerU;
extern motor RollerD;

//Sensors
extern encoder EncoderL;
extern encoder EncoderR;
extern encoder EncoderB;
extern line DescoreSensor;
extern line HoodSensor;

extern controller con;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
