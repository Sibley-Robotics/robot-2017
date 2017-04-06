package org.usfirst.frc.team3100;
import edu.wpi.first.wpilibj.networktables.NetworkTable;
import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;
import org.usfirst.frc.team3100.subsystems.*;
import org.usfirst.frc.team3100.commands.*;
import edu.wpi.first.wpilibj.CameraServer;
import edu.wpi.first.wpilibj.IterativeRobot;
import edu.wpi.first.wpilibj.command.Scheduler;
import edu.wpi.first.wpilibj.Relay;


public class Robot extends IterativeRobot {
    public static MainDrive drive;
    public static OI oi;
    public static Shooter shooter;
    public static BallGrabber pickup;
    public static ClimbUp climb;
    public static Relay light;
    CameraServer server;
    private static ZMultiCamera camera;
    public NetworkTable table;
    private static NetworkTable networkTable;

    public static boolean autoVal;




    public void robotInit() {

        table = NetworkTable.getTable("Test table");
        networkTable = NetworkTable.getTable("3t");
        camera = new ZMultiCamera("cam0","cam5");

        drive = new MainDrive();
        shooter = new Shooter();
        pickup = new BallGrabber();
        climb = new ClimbUp();
        light = new Relay(0);
        //subsystems have to be defined BEFORE oi, or it doesn't load onto the rio correctly
        oi = new OI();
        SmartDashboard.putData("Main Drive", drive);
        SmartDashboard.putData("Shooter ", shooter);
        SmartDashboard.putData("Pickup", pickup);
        SmartDashboard.putData("Light", light);
        SmartDashboard.putData("Climb", climb);
        server = CameraServer.getInstance();
        //the camera name (ex "cam0") can be found through the roborio web interface
        server.startAutomaticCapture();

    }

    public void autonomousInit() {
        autoVal = true;
        shooter.shoot();

    }

    public void autonomousPeriodic() {

    }

    public void teleopPeriodic() {
        autoVal = false;
        Scheduler.getInstance().run();
        //light.set(Relay.Value.kOn);

    }

    public void testPeriodic() {

    }
}
