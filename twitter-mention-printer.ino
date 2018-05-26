/*
 * Project: Twitter Mention Printer
 * Description: A Particle-powered thermal printer that returns the latest mention of a given Twitter account.
 * Author: Thomas Deneuville
 * Date: 2018-05-26
*/

void setup() {

// An array that will keep track of all the mentions that have already been retrieved via the API, and printed
// int tweet_ids[];

// initialize serial communication at 9600 bits per second:
Serial.begin(9600);
}

void loop() {
  // Trigger the integration
  Particle.publish("get_mentions", PRIVATE);
  Serial.print("This is running.");
  // Wait 60 seconds
  delay(60000);
}
