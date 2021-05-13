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
         someUsefullName,
         "Some Usefull Name",
         1024,
         NULL,      // 'NULL' undeclared (first use in this function)
         1,
         NULL,      // handle
         1
    );
}
