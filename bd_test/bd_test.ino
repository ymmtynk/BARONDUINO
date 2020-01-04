//
// BARONDUINO test firmware Ver. 1.00
//   23th Oct, 2019
//  Vagabond Works
//

#define   WAITCOUNT   25

#define   NUM_OF_GPIO   15

// GPIO0, 1, 11, 12, 13 use for UART/ISP
const uint8_t   gpio_index[NUM_OF_GPIO] = {A0, A1, A2, A3, A4, A5, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() 
{
  int i, j;
  
  Serial.begin(115200);

  Serial.println("I am Hell's Magician, Baron-Duino!!");
  
  for (i=0; i<NUM_OF_GPIO; i++) {
      pinMode(gpio_index[i], OUTPUT);
  }

  return;
}

void loop() 
{
  int i;

  for (i=0; i<NUM_OF_GPIO; i++) {
    digitalWrite(gpio_index[i], HIGH);
    delay(WAITCOUNT);
  }
  
  for (i=0; i<NUM_OF_GPIO; i++) {
    digitalWrite(gpio_index[i], LOW);
    delay(WAITCOUNT);
  }
  
  return;
}
