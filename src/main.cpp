#include <Arduino.h>
#include <createAllTasks.h>

void setup() 
{
  createAllTasks();

  // vTaskStartScheduler(); not needed
}

void loop() 
{
  // This should never ever run!
  // vTaskDelete(NULL); don't do that!
}
