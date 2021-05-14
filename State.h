#ifndef State_H
#define State_H
class State
{
  public:
    int mode = 0;
    int currentStateCLK;
    int lastStateCLK;
    unsigned long lastButtonPress = 0;
    bool muted = false;
};
#endif