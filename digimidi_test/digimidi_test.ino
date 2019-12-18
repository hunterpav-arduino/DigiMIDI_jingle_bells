#include <DigiMIDI.h>


DigiMIDIDevice midi;


#define DEBUG 1  // Set to 1 to enable, 0 to disable
 
#if DEBUG
#define DebugPin 1  // Digispark model A onboard LED
#define DebugBlink 75
#define DebugPause 300
#define debugDelay(ms) delay(ms)  // Change if you need a special delay function (e.g. if you use libraries that need regular refresh calls)
 
void _debugBlink(int n) {
  for ( int i = 0 ; i < n ; i++ ) {
    digitalWrite(DebugPin, HIGH);
    debugDelay(DebugBlink);
    digitalWrite(DebugPin, LOW);
    debugDelay(DebugBlink);
  }
  debugDelay(DebugPause);
}
 
void _debugSetup() {
  pinMode(DebugPin, OUTPUT);
}
 
#define debugBlink(n) _debugBlink(n)  // Do the blink when DEBUG is set
#define debugSetup() _debugSetup()
#else
#define debugBlink(n)  // Make the calls disappear when DEBUG is 0
#define debugSetup()
#endif


void setup() {
  // put your setup code here, to run once:
  debugSetup();
  debugBlink(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  midi.update();
  
  //midi.delay(500);
  //debugBlink(1);
  
  // Note number, velocity (opt=channel)
  digitalWrite(DebugPin, HIGH);
  // 1
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(330);
  midi.sendNoteOff(66,127);
  midi.delay(110);

  digitalWrite(DebugPin, LOW);
  // 2
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(330);
  midi.sendNoteOff(66,127);
  midi.delay(110);

  digitalWrite(DebugPin, HIGH);
  // 3
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(69,127);
  midi.delay(110);
  midi.sendNoteOff(69,127);
  midi.delay(110);
  midi.sendNoteOn(62,127);
  midi.delay(220);
  midi.sendNoteOff(62,127);
  midi.delay(110);
  midi.sendNoteOn(64,127);
  midi.delay(110);
  midi.sendNoteOff(64,127);

  digitalWrite(DebugPin, LOW);
  // 4
  midi.sendNoteOn(66,127);
  midi.delay(770);
  midi.sendNoteOff(66,127);
  midi.delay(110);

  digitalWrite(DebugPin, HIGH);
  // 5
  midi.sendNoteOn(67,127);
  midi.delay(110);
  midi.sendNoteOff(67,127);
  midi.delay(110);
  midi.sendNoteOn(67,127);
  midi.delay(110);
  midi.sendNoteOff(67,127);
  midi.delay(110);
  midi.sendNoteOn(67,127);
  midi.delay(330);
  midi.sendNoteOff(67,127);
  midi.sendNoteOn(67,127);
  midi.delay(110);
  midi.sendNoteOff(67,127);

  digitalWrite(DebugPin, LOW);
  // 6
  midi.sendNoteOn(67,127);
  midi.delay(110);
  midi.sendNoteOff(67,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);
  midi.sendNoteOn(66,127);
  midi.delay(110);
  midi.sendNoteOff(66,127);

  digitalWrite(DebugPin, HIGH);
  // 7
  midi.sendNoteOn(66,127);
  midi.delay(220);
  midi.sendNoteOff(66,127);
  midi.sendNoteOn(64,127);
  midi.delay(110);
  midi.sendNoteOff(64,127);
  midi.delay(110);
  midi.sendNoteOn(64,127);
  midi.delay(110);
  midi.sendNoteOff(64,127);
  midi.delay(110);
  midi.sendNoteOn(66,127);
  midi.delay(220);
  midi.sendNoteOff(66,127);

  digitalWrite(DebugPin, LOW);
  // 8
  midi.sendNoteOn(64,127);
  midi.delay(330);
  midi.sendNoteOff(64,127);
  midi.delay(110);
  midi.sendNoteOn(69,127);
  midi.delay(330);
  midi.sendNoteOff(69,127);
  midi.delay(110);
  
  
}
