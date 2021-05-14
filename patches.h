// All patches designed with
// Factor 5
// Loops 5

#include "DataPackage.h"
#include "bang.h"

void p_3a(DataPackage pkg){
  bang(pkg.x+pkg.p);
  bang(pkg.y+pkg.p);
  bang(pkg.z+pkg.p);
}

void p_grossBug(DataPackage pkg){
  pkg.f=10;
  int ix = int(pkg.x)*pkg.p/4;
  int iy = int(pkg.y)*pkg.p/4;
  int iz = int(pkg.z)*pkg.p/4;
  bang(ix);
  bang(iy);
  bang(iz);
}

void p_alienHiFi(DataPackage pkg){
  pkg.f = 10;
  pkg.limit(0.5);
  int ix = int(pkg.x)*pkg.f;
  int iy = int(pkg.y)*pkg.f;
  int iz = int(pkg.z)*pkg.f;
  for(int i=0; i<=pkg.l;i++){
    bang(ix);
  }
  for(int i=0; i<=pkg.l;i++){
    bang(iy);
  }
  for(int i=0; i<=pkg.l;i++){
    bang(iz);
  }
}

void p_goodRobot(DataPackage pkg){
  pkg.limit(0.5);
  int ix = int(pkg.x)*pkg.f;
  int iy = int(pkg.y)*pkg.f;
  int iz = int(pkg.z)*pkg.f;
  for(int i=0; i<=pkg.p;i++){
    bang(ix);
  }
  for(int i=0; i<=pkg.p;i++){
    bang(iy);
  }
  for(int i=0; i<=pkg.p;i++){
    bang(iz);
  }
}

void p_seeker(DataPackage pkg){
  pkg.limit(0.5);
  int ix = int(pkg.x)*pkg.f;
  int iy = int(pkg.y)*pkg.f;
  int iz = int(pkg.z)*pkg.f;
  for(int i=0; i<=pkg.p;i++){
    bang(ix*2);
  }
  for(int i=0; i<=pkg.p;i++){
    bang(iy);
  }
  for(int i=0; i<=pkg.p;i++){
    bang(iz);
  }
}

void p_squelch(DataPackage pkg){
  pkg.limit(0.5);
  int ix = int(pkg.x)*pkg.p/4;
  int iy = int(pkg.y)*pkg.p/4;
  int iz = int(pkg.z)*pkg.p/4;
  for(int i=0; i<=pkg.l/4;i++){
    bang(ix);
  }
  for(int i=0; i<=pkg.l/4;i++){
    bang(iy);
  }
  for(int i=0; i<=pkg.l/4;i++){
    bang(iz);
  }
}

void p_beehive(DataPackage pkg){
  pkg.limit(0.5);
  int ix = int(pkg.x)*pkg.p/8;
  int iy = int(pkg.y)*pkg.p/8;
  int iz = int(pkg.z)*pkg.p/8;
  for(int i=0; i<=pkg.l/8;i++){
    bang(ix);
  }
  for(int i=0; i<=pkg.l/8;i++){
    bang(iy);
  }
  for(int i=0; i<=pkg.l/8;i++){
    bang(iz);
  }
}