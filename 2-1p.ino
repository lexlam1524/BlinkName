const double di_time = 250;
const double dah_time = 1000;



const pin_t MY_LED = D7;
SYSTEM_THREAD(ENABLED);

void setup() {
    
pinMode(MY_LED, OUTPUT);

}

void di(){
    
     digitalWrite(MY_LED, HIGH);

	
	delay(di_time);


	digitalWrite(MY_LED, LOW);

	delay(1s);

    
}

void dah(){
     digitalWrite(MY_LED, HIGH);

	
	delay(dah_time);


	digitalWrite(MY_LED, LOW);

	delay(1s);

}

void L(){
   di();
   dah();
   di();
   di();

}

void e(){
    di();
}

void x(){
    dah();
    di();
    di();
    dah();
}

void a(){
    di();
    dah();
}

void m(){
    dah();
    dah();
}

void loop() {
    L();
    e();
    x();
    L();
    a();
    m();
    

}