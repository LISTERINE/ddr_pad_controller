/* Buttons to USB Keyboard Example

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
/*
Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(2, 10);  // which is appropriate for
Bounce button3 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button4 = Bounce(4, 10);
Bounce button5 = Bounce(5, 10);  // if a button is too "sensitive"
Bounce button6 = Bounce(6, 10);  // to rapid touch, you can
Bounce button7 = Bounce(7, 10);  // increase this time.
Bounce button8 = Bounce(8, 10);
Bounce button9 = Bounce(9, 10);
Bounce button10 = Bounce(10, 10);
Bounce button11 = Bounce(11, 10);
Bounce button12 = Bounce(12, 10);
Bounce button13 = Bounce(13, 10);
Bounce button14 = Bounce(14, 10);
Bounce button15 = Bounce(15, 10);
*/

boolean pad_0_Fall = false; // up
boolean pad_1_Fall = false; // left
boolean pad_2_Fall = false; // down
boolean pad_3_Fall = false; //right

boolean rightPressed_0 = false;
  boolean rightPressed_1 = false;
  boolean rightPressed_2 = false;
  boolean rightPressed_3 = false;
  boolean leftPressed_0= false;
  boolean leftPressed_1 = false;
  boolean leftPressed_2 = false;
  boolean leftPressed_3 = false;
  boolean upPressed_0 = false;
  boolean upPressed_1 = false;
  boolean upPressed_2 = false;
  boolean upPressed_3 = false;
  boolean downPressed_0 = false;
  boolean downPressed_1 = false;
  boolean downPressed_2 = false;
  boolean downPressed_3 = false;
  

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);  // Teensy++ LED, may need 1k resistor pullup
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(14, INPUT);
  pinMode(15, INPUT);


}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  /*
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  */
  /******************************************************
   *
   * Determine which pads/sensors were pressed/released
   *
   ******************************************************/

   
  // Check pad 0
  if ((!upPressed_0) || (!upPressed_1) || (!upPressed_2) || (!upPressed_3)) { // If no buttons(sensors) are pressed
    if (digitalRead(0) == HIGH) {                                              // Check if button was pressed, if it was, set this button and this pad as pressed
      upPressed_0 = true;
      pad_0_Fall = true;
    }
    if (digitalRead(1) == HIGH) {
      upPressed_1 = true;
      pad_0_Fall = true;
    }
    if (digitalRead(2) == HIGH) {
      upPressed_2 = true;
      pad_0_Fall = true;
    }
    if (digitalRead(3) == HIGH) {
      upPressed_3 = true;
      pad_0_Fall = true;
    }
  }
  else {                                                                       // If there are pressed buttons, check if any have come up
    if (digitalRead(0) == LOW) {                                          
      upPressed_0 = false;
    }
    if (digitalRead(1) == LOW) {
      upPressed_1 = false;
    }
    if (digitalRead(2) == LOW) {
      upPressed_2 = false;
    }
    if (digitalRead(3) == LOW) {
      upPressed_3 = false;
    }
  }

  // Check pad 1
  if ((!leftPressed_0) || (!leftPressed_1) || (!leftPressed_2) || (!leftPressed_3)) {
    if (digitalRead(4) == HIGH) {
      leftPressed_0 = true;
      pad_1_Fall = true;
    }
    if (digitalRead(5) == HIGH) {
      leftPressed_1 = true;
      pad_1_Fall = true;
    }
    if (digitalRead(6) == HIGH) {
      leftPressed_2 = true;
      pad_1_Fall = true;
    }
    if (digitalRead(7) == HIGH) {
      leftPressed_3 = true;
      pad_1_Fall = true;
    } 
  }
  else {
    if (digitalRead(4) == LOW) {
      leftPressed_0 = false;
    }
    if (digitalRead(5) == LOW) {
      leftPressed_1 = false;
    }
    if (digitalRead(6) == LOW) {
      leftPressed_2 = false;
    }
    if (digitalRead(7) == LOW) {
      leftPressed_3 = false;
    }
  }

  // Check pad 2
  if ((!downPressed_0) || (!downPressed_1) || (!downPressed_2) || (!downPressed_3)) {
    if (digitalRead(8) == HIGH) {
      downPressed_0 = true;
      pad_2_Fall = true;
    }
    if (digitalRead(9) == HIGH) {
      downPressed_1 = true;
      pad_2_Fall = true;
    }
    if (digitalRead(10) == HIGH) {
      downPressed_2 = true;
      pad_2_Fall = true;
    }
    if (digitalRead(11) == HIGH) {
      downPressed_3 = true;
      pad_2_Fall = true;
    }
  }
  else {
    if (digitalRead(8) == LOW) {
      downPressed_0 = false;
    }
    if (digitalRead(9) == LOW) {
      downPressed_1 = false;
    }
    if (digitalRead(10) == LOW) {
      downPressed_2 = false;
    }
    if (digitalRead(11) == LOW) {
      downPressed_3 = false;
    }
  }

  // Check pad 3
  if ((!rightPressed_0) || (!rightPressed_1) || (!rightPressed_2) || (!rightPressed_3)) {
    if (digitalRead(12) == HIGH) {
      rightPressed_0 = true;
      pad_3_Fall = true;
    }
    if (digitalRead(13) == HIGH) {
      rightPressed_1 = true;
      pad_3_Fall = true;
    }
    if (digitalRead(14) == HIGH) {
      rightPressed_2 = true;
      pad_3_Fall = true;
    }
    if (digitalRead(15) == HIGH) {
      rightPressed_3 = true;
      pad_3_Fall = true;
    }
  }
  else {
    if (digitalRead(12) == LOW) {
      downPressed_0 = false;
    }
    if (digitalRead(13) == LOW) {
      downPressed_1 = false;
    }
    if (digitalRead(14) == LOW) {
      downPressed_2 = false;
    }
    if (digitalRead(15) == LOW) {
      downPressed_3 = false;
    }
  }

  // If no sensors are pressed
  if ((!upPressed_0) && (!upPressed_1) && (!upPressed_2) && (!upPressed_3)) {
    Keyboard.release('w');
  }
  else if (pad_0_Fall) { // if there was a state change in the pad
    if ((upPressed_0) || (upPressed_1) || (upPressed_2) || (upPressed_3)) {
      Keyboard.press('w');
    }
  }
  if ((!leftPressed_0) && (!leftPressed_1) && (!leftPressed_2) && (!leftPressed_3)) {
    Keyboard.release('a');
  }
  else if (pad_1_Fall) {
    if ((leftPressed_0) || (leftPressed_1) || (leftPressed_2) || (leftPressed_3)) {
      Keyboard.press('a');
    }
  }
  if ((!downPressed_0) && (!downPressed_1) && (!downPressed_2) && (!downPressed_3)) {
    Keyboard.release('s');
  }
  else if (pad_2_Fall) {
    if ((downPressed_0) || (downPressed_1) || (downPressed_2) || (downPressed_3)) {
      Keyboard.press('s');
    }
  }
  if ((!rightPressed_0) && (!rightPressed_1) && (!rightPressed_2) && (!rightPressed_3)) {
    Keyboard.release('d');
  }
  else if (pad_3_Fall) {
    if ((rightPressed_0) || (rightPressed_1) || (rightPressed_2) || (rightPressed_3)) {
      Keyboard.press('d');
    }
  }
  
  pad_0_Fall = false;
  pad_1_Fall = false;
  pad_2_Fall = false;
  pad_3_Fall = false;
  
}

