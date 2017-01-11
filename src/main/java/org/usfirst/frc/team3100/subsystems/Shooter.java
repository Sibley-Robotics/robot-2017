package org.usfirst.frc.team3100.subsystems;
import edu.wpi.first.wpilibj.command.Subsystem;
import edu.wpi.first.wpilibj.*;
import org.usfirst.frc.team3100.RobotMap;
import org.usfirst.frc.team3100.commands.Shoot;

public class Shooter extends Subsystem {

    private SpeedController shooterMotor = RobotMap.shootMotor;

    public void initDefaultCommand() {

    }

    public void shoot() {
        shooterMotor.set(1);
    }

    public void stopShooting() {
        shooterMotor.set(0);
    }
}