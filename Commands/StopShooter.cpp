// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "StopShooter.h"
StopShooter::StopShooter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SetTimeout(.1);
}
// Called just before this Command runs the first time
void StopShooter::Initialize() {
	Robot::shooter->Stop();
}
// Called repeatedly when this Command is scheduled to run
void StopShooter::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool StopShooter::IsFinished() {
	return IsTimedOut();
}
// Called once after isFinished returns true
void StopShooter::End() {
	Robot::shooter->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopShooter::Interrupted() {
	End();
}
