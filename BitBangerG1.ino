

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include "State.h"
State st;
#include "DataPackage.h"
int AOUT = 5;
#include "patches.h"

#include "rot.h"

void setup(void) {
  Serial.begin(115200);
  rotSetup();
  pinMode(AOUT, OUTPUT);
  // while (!Serial)
  //   delay(10); // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("BITBANGER G1");

  // Try to initialize!
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  Serial.println("MPU6050 Found!");

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);


  Serial.println("");
  delay(100);
}

void loop() {
  if(st.muted){
    return;
  }
  DataPackage pkg(5,5);
  switch(st.mode){
    case 0:
      p_3a(pkg);
      break;
    case 1:
      p_grossBug(pkg);
      break;
    case 2:
      p_alienHiFi(pkg);
      break;
    case 3:
      p_goodRobot(pkg);
      break;
    case 4:
      p_seeker(pkg);
      break;
    case 5:
      p_squelch(pkg);
      break;
    case 6:
      p_beehive(pkg);
      break;
  }
}