
#include <stdlib.h>
#include <tasksConfig.h>
#include <createAllTasks.h>
#include <someUsefullName.h>
// #include <task_B.h>

void createAllTasks()
{
    // All xTaskCreate... goes here and utilize the macros created
    // in taskConfig.h

    // Be very carefull about the ordening of tasks because they 
    // start running as soon as they're created.

    xTaskCreatePinnedToCore(
         SUN_POINTER,
         SUN_NAME,
         SUN_STACK,
         SUN_PARAM,  
         SUN_PRIORITY,
         SUN_HANDLE, 
         SUN_CORE
    );
}
