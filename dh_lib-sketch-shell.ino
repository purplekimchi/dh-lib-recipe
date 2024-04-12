/*
  Code shell for Feeling Data and Affective Solidarity 

The vibration motor pulses in intervals of a TBD duration; each pulse 
represents one of your data points. The data is from [insert data source].

One [day/month/year] =  your duration. For ours, one day = 39.3 seconds or 39300.

Based on code by Kim Brillante Knight. The code below is provided to let you get started. 

Our basic, one incident on one day function looks like this: 
  digitalWrite(Motor, HIGH); // Turns the vibration motor (defined as a variable below) on 
      delay(1000); // waits for one second
      digitalWrite(Motor, LOW); //Turns the vibratin motor off
      delay(38300); // waits 38.3 seconds; this delay, plus the one above = 39.3 seconds, or the equivalent of one day in our sketch
*/

int Motor = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Motor as an output.
  pinMode(Motor, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // January 2016 (label your time period however makes sense to you)
  /* You may need an initial delay if your first data point is not at the beginning
   *  of the time period that your data spans. For example, our data was all of 2016, 
   *  but our first incident/data point was not until January 3. So we set an initial delay 
   *  to wait the equivalent of two "days" before the first function starts.
   */
  delay(78000); // wait for 79 seconds;
  //January 3 
digitalWrite(Motor, HIGH);   // Germonta Wallace (we commented in the names of people killed)
  // turn the motor on by making the voltage HIGH
  delay(1000);                       // wait for a second
  digitalWrite(Motor, LOW);    // turn the motor off by making the voltage LOW
  delay(38300);               // wait for 38.3 seconds
  //January 4 - this is a day with multiple incidents or data points on one day 
digitalWrite(Motor, HIGH);   // Eric John Senegal
  delay(1000);                       
  digitalWrite(Motor, LOW);   
  delay(1000);                      
digitalWrite(Motor, HIGH);  // Rodney Turner
  delay(1000);                     
  digitalWrite(Motor, LOW);   
  delay(36300);                       
  // January 5 - A day with only one incident or data point
digitalWrite(Motor, HIGH);   // Carlton Antonio Murphy
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);  
  // January 6 - And here is a day with no incidents or data points
  delay(39300);

}
