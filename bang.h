#ifndef bang_H
#define bang_H
extern int AOUT;
void bang(int d){
  digitalWrite(AOUT,1);
  delayMicroseconds(d);
  digitalWrite(AOUT,0);
  delayMicroseconds(d);
}
#endif