/* Buttons to USB Keyboard Example

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
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
Bounce button9 = Bounce(10, 10);
Bounce button9 = Bounce(11, 10);
Bounce button9 = Bounce(12, 10);
Bounce button9 = Bounce(13, 10);
Bounce button9 = Bounce(14, 10);
Bounce button9 = Bounce(15, 10);

void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullleft resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);  // Teensy++ LED, may need 1k resistor pullup
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);

  boolean rightPressed_1 = false;
  boolean rightPressed_2 = false;
  boolean rightPressed_3 = false;
  boolean rightPressed_4 = false;
  boolean leftPressed_1 = false;
  boolean leftPressed_2 = false;
  boolean leftPressed_3 = false;
  boolean leftPressed_4 = false;
  boolean upPressed_1 = false;
  boolean upPressed_2 = false;
  boolean upPressed_3 = false;
  boolean upPressed_4 = false;
  boolean downPressed_1 = false;
  boolean downPressed_2 = false;
  boolean downPressed_3 = false;
  boolean downPressed_4 = false;

  boolean pad_0_Fall = false; // up
  boolean pad_1_Fall = false; // left
  boolean pad_2_Fall = false; // down
  boolean pad_3_Fall = false; //right
}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
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

  if ((!upPressed_0) || (!upPressed_1) || (!upPressed_2) || (!upPressed_3)) {
    if (button0.fallingEdge()) {
      // Check each button for "falling" edge.
      // Send a key when each button is pressed
      upPressed_0 = true;
      pad_0_Fall = true;
    }
    else if (button0.risingEdge()) {
      // Check each button for "rising" edge.
      // Send a key when each button is pressed
      upPressed_0 = false;
    }
    
    if (button1.fallingEdge()) {
      upPressed_1 = true;
      pad_0_Fall = true;
    }
    else if (button1.risingEdge()) {
      upPressed_1 = false;
    }
    
    if (button2.fallingEdge()) {
      upPressed_2 = true;
      pad_0_Fall = true;
    }
    else if (button2.risingEdge()) {
      upPressed_2 = false;
    }
    
    if (button3.fallingEdge()) {
      upPressed_3 = true;
      pad_0_Fall = true;
    }
    else if (button3.risingEdge()) {
      upPressed_3 = false;
    }
  }
  if ((!leftPressed_0) || (!leftPressed_1) || (!leftPressed_2) || (!leftPressed_3)) {
    if (button4.fallingEdge()) {
      leftPressed_0 = true;
      pad_1_Fall = true;
    }
    else if (button4.risingEdge()) {
      leftPressed_0 = false;
    }
    
    if (button5.fallingEdge()) {
      leftPressed_1 = true;
      pad_1_Fall = true;
    }
    else if (button5.risingEdge()) {
      leftPressed_1 = false;
    }
    
    if (button6.fallingEdge()) {
      leftPressed_2 = true;
      pad_1_Fall = true;
    }
    else if (button6.risingEdge()) {
      leftPressed_2 = false;
    }
    
    if (button7.fallingEdge()) {
      leftPressed_3 = true;
      pad_1_Fall = true;
    }
    else if (button7.risingEdge()) {
      leftPressed_3 = false;
    }
    
  }
  if ((!downPressed_0) || (!downPressed_1) || (!downPressed_2) || (!downPressed_3)) {
    if (button8.fallingEdge()) {
      downPressed_0 = true;
      pad_2_Fall = true;
    }
    else if (button8.risingEdge()) {
      downPressed_0 = false;
    }
    
    if (button9.fallingEdge()) {
      downPressed_1 = true;
      pad_2_Fall = true;
    }
    else if (button9.risingEdge()) {
      downPressed_1 = false;
    }
    
    if (button10.fallingEdge()) {
      downPressed_2 = true;
      pad_2_Fall = true;
    }
    else if (button10.risingEdge()) {
      downPressed_2 = false;
    }
    
    if (button11.fallingEdge()) {
      downPressed_3 = true;
      pad_2_Fall = true;
    }
    else if (button11.risingEdge()) {
      downPressed_3 = false;
    }
    
  }
  if ((!rightPressed_0) || (!rightPressed_1) || (!rightPressed_2) || (!rightPressed_3)) {
    if (button12.fallingEdge()) {
      rightPressed_0 = true;
      pad_3_Fall = true;
    }
    else if (button12.risingEdge()) {
      downPressed_0 = false;
    }
    
    if (button13.fallingEdge()) {
      rightPressed_1 = true;
      pad_3_Fall = true;
    }
    else if (button13.risingEdge()) {
      downPressed_1 = false;
    }
    
    if (button14.fallingEdge()) {
      rightPressed_2 = true;
      pad_3_Fall = true;
    }
    else if (button14.risingEdge()) {
      downPressed_2 = false;
    }
    
    if (button15.fallingEdge()) {
      rightPressed_3 = true;
      pad_3_Fall = true;
    }
    else if (button15.risingEdge()) {
      downPressed_3 = false;
    }
  }

  // If no sensors are pressed
  if ((!upPressed_0) && (!upPressed_1) && (!upPressed_2) && (!upPressed_3)) {
    Keyboard.release("w");
  }
  if ((!leftPressed_0) && (!leftPressed_1) && (!leftPressed_2) && (!leftPressed_3)) {
    Keyboard.release("w");
  }
  if ((!downPressed_0) && (!downPressed_1) && (!downPressed_2) && (!downPressed_3)) {
    Keyboard.release("w");
  }
  if ((!rightPressed_0) && (!rightPressed_1) && (!rightPressed_2) && (!rightPressed_3)) {
    Keyboard.release("w");
  }

  // if a pad got a press
  if (pad_0_Fall) { // if there was a state change in the pad
    if ((upPressed_0) || (upPressed_1) || (upPressed_2) || (upPressed_3)) {
      Keyboard.press("w");
    }
  }
  if (pad_1_Fall) {
    else if ((leftPressed_0) || (leftPressed_1) || (leftPressed_2) || (leftPressed_3)) {
      Keyboard.press("w");
    }
  }
  if (pad_2_Fall) {
    else if ((downPressed_0) || (downPressed_1) || (downPressed_2) || (downPressed_3)) {
      Keyboard.press("w");
    }
  }
  if (pad_3_Fall) {
    else if ((rightPressed_0) || (rightPressed_1) || (rightPressed_2) || (rightPressed_3)) {
      Keyboard.press("w");
    }
  }

  pad_0_Fall = false;
  pad_1_Fall = false;
  pad_2_Fall = false;
  pad_3_Fall = false;
  
}

