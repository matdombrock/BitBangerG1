#ifndef DataPackage_H
#define DataPackage_H
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

class DataPackage
{
  public:
  float x;
    float y;
    float z;
    int p;
    int l;
    int f;
    DataPackage(int loops=1, int factor=1){
      sensors_event_t a, g, temp;
      mpu.getEvent(&a, &g, &temp);
      // A seems to hold gyro values
      // G is just the change
      // IDK why this is
      // a.acceleration.<x y z> (m/s^2)
      // g.gyro.<x y z> (rad/s)
      // temp.temperature (c)
      x = abs(a.gyro.x);
      y = abs(a.gyro.y);
      z = abs(a.gyro.z);
      p = analogRead(A3);
      l = loops;
      f = factor;
    };
    void limit(float floor){
      if(x<floor){
        x=floor;
      }
      if(y<floor){
        z=floor;
      }
      if(y<floor){
        z=floor;
      }
    }
};
#endif