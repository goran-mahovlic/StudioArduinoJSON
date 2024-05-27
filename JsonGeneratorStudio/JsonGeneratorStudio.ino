// ArduinoJson - https://arduinojson.org
// Copyright © 2024, Intergalaktik d.o.o.
// MIT License
//
// This example shows how to generate a JSON document with ArduinoJson for parsing with EEZ studio.
//

#include <ArduinoJson.h>

StaticJsonDocument<200> doc;


void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;

  // Allocate the JSON document
  //
  // Inside the brackets, 200 is the RAM allocated to this document.
  // Don't forget to change this value to match your requirement.
  // Use https://arduinojson.org/v6/assistant to compute the capacity.

}

void loop() {
  
  doc["A0"] = analogRead(A0);
  doc["A1"] = analogRead(A1);
  doc["A2"] = analogRead(A2);
  doc["A3"] = analogRead(A3);
  doc["A4"] = analogRead(A4);
  doc["A5"] = analogRead(A5);
  delay(500);
  // Generate the minified JSON and send it to the Serial port.
  //
  serializeJson(doc, Serial);

  // Start a new line
  Serial.println();
  }
