#define CLK 3
#define DT 4
#define SW 2

#define MODESLEN 6

#include "State.h"
String currentDir ="";

extern State st;

void rotLoop(){
  st.currentStateCLK = digitalRead(CLK);
  if (st.currentStateCLK != st.lastStateCLK  && st.currentStateCLK == 1){
    // If the DT state is different than the CLK state then
		// the encoder is rotating CCW so decrement
		if (digitalRead(DT) != st.currentStateCLK) {
			st.mode --;
      if(st.mode<0){
        st.mode = MODESLEN;
      }
			currentDir ="CCW";
		} else {
			// Encoder is rotating CW so increment
			st.mode ++;
      if(st.mode>MODESLEN){
        st.mode=0;
      }
			currentDir ="CW";
		}

		Serial.print("Direction: ");
		Serial.print(currentDir);
		Serial.print(" | Counter: ");
		Serial.println(st.mode);
  }
  // Remember last CLK state
  st.lastStateCLK = st.currentStateCLK;

  // Read the button state
  int btnState = digitalRead(SW);

  //If we detect LOW signal, button is pressed
  if (btnState == LOW) {
    //if 50ms have passed since last LOW pulse, it means that the
    //button has been pressed, released and pressed again
    if (millis() - st.lastButtonPress > 50) {
      Serial.println("Button pressed!");
    }

    // Remember last button press event
    st.lastButtonPress = millis();
  }

  // Put in a slight delay to help debounce the reading
  delay(1);
}

void clickLoop(){
  Serial.println("CLICK");
  st.muted = !st.muted;
  Serial.println(st.muted);
  delay(50);//Debounce
}

void rotSetup(){
  // rot
	pinMode(CLK,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLK), rotLoop, CHANGE);
	pinMode(DT,INPUT);
	pinMode(SW, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(SW), clickLoop, FALLING);
  st.lastStateCLK = digitalRead(CLK);
}

