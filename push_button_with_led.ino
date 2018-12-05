void setup() {
  // put your setup code here, to run once:
pinMode(11, INPUT);
Serial.begin(9600);
pinMode(10, OUTPUT);
}

void loop() {      
  
  // put your main code here, to run repeatedly:
int button=digitalRead(11);
Serial.println(button);


 
 if (button==HIGH)    {

 digitalWrite(10, LOW); 
}

 
 

else {
digitalWrite(10, HIGH);

}
}

