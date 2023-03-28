int led = D7; 
int button = D2;
int dot = 250; 
int dash = 750; 
int space = 500; 
int letterSpace = 750;
int wordSpace = 1700; 
String myname = ".-.. . -..-"; 

void setup() {
  pinMode(led, OUTPUT); 
  digitalWrite(led, LOW); 
  Serial.begin(9600); 
}

void loop() {
    if (digitalRead(button) == LOW) { 
    blinkName(); 
  }
}

void blinkName() {
  for (int i = 0; i < myname.length(); i++) { 
    char charofname = myname.charAt(i); 
    if (charofname == '.') {
      digitalWrite(led, HIGH);
      delay(dot); 
      digitalWrite(led, LOW); 
      delay(space); 
    } else if (charofname == '-') { 
      digitalWrite(led, HIGH); 
      delay(dash);
      digitalWrite(led, LOW); 
      delay(space); 
    } else if (charofname == ' ') { 
      delay(wordSpace);
    } else {
        
    }
  }
  delay(letterSpace);
}
