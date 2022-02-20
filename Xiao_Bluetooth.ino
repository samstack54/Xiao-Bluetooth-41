
 String message; // Store incomming data
 int LED = 9 ;
 
 void setup() {
 Serial1.begin(9600);
 pinMode(LED,OUTPUT);
 digitalWrite(LED,LOW);
 }

 void loop() {
  while (Serial1.available() ) {  // while there is data
   delay(50); // 10
   char c = Serial1.read();       
   message = message + c;    //Command such as "on"        
  } 
 
  if (message.length() > 0) {
   Serial1.println(message) ; 
   if (message == "on")  {
   digitalWrite(LED, HIGH) ;  
   } 
    if (message == "off") {
   digitalWrite(LED, LOW) ;             
   }
  } 
  message = "" ; // clear the memory 
 }
