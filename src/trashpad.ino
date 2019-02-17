#include <Key.h>
#include <Keypad.h>

const byte rows = 5; //four rows
const byte cols = 4; //three columns

// character map.  blank characters indicate unused keys
char keys[rows][cols] = {
  {'q','w','e','r'},
  {'7','8','9',' '},
  {'4','5','6','b'},
  {'1','2','3',' '},
  {'0',' ','*','='}
};
byte colPins[cols] = {3, 2, 1, 0}; //connect to the col pinouts of the keypad
byte rowPins[rows] = {20, 19, 18, 17, 16}; //connect to the row pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );

void setup() {
  Serial.begin(9600);
  Serial.println("Keyboard is ready");
}

void loop() {
  // put your main code here, to run repeatedly: 
  char keyPress = keypad.getKey();

    if (keyPress){
      Keyboard.print(keyPress);
      Serial.println(keyPress);
  }
}


