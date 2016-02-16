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

boolean pad_up_pressed = false;
boolean pad_left_pressed = false;
boolean pad_down_Fall = false;
boolean pad_right_Fall = false;

  

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP); // skip over 12/13. Teensy++ LED, may need 1k resistor pullup. just move to 14 to avoid extra soldering. skip 12 to keep wires grouped.
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);


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

   
  // Check pad up
  if ((digitalRead(0) == LOW) || (digitalRead(1) == LOW) || (digitalRead(2) == LOW) || (digitalRead(3) == LOW)) {
    pad_up_pressed = true;
    Keyboard.set_key1(KEY_W);
  }
  else {
    pad_up_pressed = false;
    Keyboard.set_key1(0); // Release
  }

  // Check pad left
  if ((digitalRead(4) == LOW) || (digitalRead(5) == LOW) || (digitalRead(6) == LOW) || (digitalRead(7) == LOW)) {
    Keyboard.set_key2(KEY_A);
  }
  else {
    Keyboard.set_key2(0); // Release
  }

  // Check pad down
  if ((digitalRead(8) == LOW) || (digitalRead(9) == LOW) || (digitalRead(10) == LOW) || (digitalRead(11) == LOW)) {
    Keyboard.set_key3(KEY_S);
  }
  else {
    Keyboard.set_key3(0); // Release
  }

  // Check pad right
  if ((digitalRead(14) == LOW) || (digitalRead(15) == LOW) || (digitalRead(16) == LOW) || (digitalRead(17) == LOW)) {
    Keyboard.set_key4(KEY_D);
  }
  else {
    Keyboard.set_key4(0); // Release
  }
  
  Keyboard.send_now(); // Send the keys that have been set
}
