int turns = 10; // how fast the motor runs

int turnAmount = 10; // how many turns the motor makes

unsigned long currentTime;

unsigned long loopTime;

 

void setup() {

// declare pin 9 to be an output:

   pinMode(9, OUTPUT);

   currentTime = millis();

   loopTime = currentTime;

}

 

void loop() {

   currentTime = millis();

   if(currentTime >= (loopTime + 20)){

       // set the speed of pin 9:

       analogWrite(9, turns);

 

       // change the turnings for next time through the loop:

       turns = turns + turnAmount;

 

       // speed up or slow down the motor

       if (turns == 0 || turns == 255) {

           turnAmount = -turnAmount ;

       }

       if (turns == 0) {

           delay(5000);

       }

       loopTime = currentTime; // Updates loopTime

   }

   // Other processing can be done here

}
