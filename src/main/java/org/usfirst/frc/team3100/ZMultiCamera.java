package org.usfirst.frc.team3100;


import com.ni.vision.NIVision;
import com.ni.vision.NIVision.Image;
import edu.wpi.cscore.VideoSource;
import edu.wpi.first.wpilibj.CameraServer;

public class ZMultiCamera  {

    private int camera1;
    private int camera2;
    private int currentCamera;

    private int fps = 20;
    private boolean running = true;
    //private CameraServer cameraServer;
    //private Image lastFrame;

    //private Thread cameraThread = new Thread(this);

    public ZMultiCamera(String cameraName1, String cameraName2) {
        //camera1 = NIVision.IMAQdxOpenCamera(cameraName1, NIVision.IMAQdxCameraControlMode.CameraControlModeController);
        //camera2 = NIVision.IMAQdxOpenCamera(cameraName2, NIVision.IMAQdxCameraControlMode.CameraControlModeController);

        //lastFrame = NIVision.imaqCreateImage(NIVision.ImageType.IMAGE_RGB, 0);

        //currentCamera = camera1;
        //startCapture(currentCamera);

        CameraServer.getInstance().startAutomaticCapture();
    }






    /*
    public int getCamera1() {
        return camera1;
    }

    public int getCamera2() {
        return camera2;
    }

    public void setBrightness(int cameraID, int brightness){
        NIVision.IMAQdxSetAttributeString(cameraID, "CameraAttributes::Brightness::Mode", "Manual");
        long var14 = NIVision.IMAQdxGetAttributeMinimumI64(cameraID, "CameraAttributes::Brightness::Value");
        long var15 = NIVision.IMAQdxGetAttributeMaximumI64(cameraID, "CameraAttributes::Brightness::Value");
        long var16 = var14 + (long) ((double) (var15 - var14) * ((double) brightness / 100.0D));
        NIVision.IMAQdxSetAttributeI64(cameraID, "CameraAttributes::Brightness::Value", var16);
    }


    public void start(){
        cameraServer = CameraServer.getInstance();
        running = true;
        cameraThread.start();
    }

    public void stop(){
        running = false;
    }

    public void pushImage(){
        NIVision.IMAQdxGrab(currentCamera, lastFrame, 1);
        cameraServer.startAutomaticCapture();
    }

    public void startCapture(int id){
        //NIVision.IMAQdxStopAcquisition(currentCamera);
        //NIVision.IMAQdxConfigureGrab(id);
        //NIVision.IMAQdxStartAcquisition(id);
    }

    @Override
    public void run() {
        while (running){
            pushImage();
            Time.sleep(1000 / fps);

        }
    }*/


}
