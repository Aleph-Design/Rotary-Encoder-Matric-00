#include <Arduino.h>
#include <createAllTasks.h>

void setup() 
{
  createAllTasks();

  vTaskStartScheduler();
}

void loop() 
{
  // This should never ever run!
  vTaskDelete(NULL);
}
