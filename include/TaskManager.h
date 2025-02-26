/***********************************************************************************
This file is part of Project for MaratonMaster
For the latest info, see  https://github.com/Yhgenomics/MaratonMaster.git

Copyright 2016 Yhgenomics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
***********************************************************************************/

/***********************************************************************************
* Description   : Operation on tasks.
* Creator       : Ke Yang(keyang@yhgenomics.com)
* Date          : 2016/2/29
* Modifed       : When      | Who       | What
***********************************************************************************/

#ifndef TASK_MANAGER_H_
#define TASK_MANAGER_H_ 

#include "TaskDescriptor.h"
#include "Task.h"
#include "MRT.h"
#include <string>
#include <vector>

// @Description : Manager for tasks from business layer.
class TaskManager : 
    public MRT::Manager<Task>,
    public MRT::Singleton<TaskManager> 
{
public:

    // Update and do the operations by the status
    // No directly control of task's status in Task Managers
    void  Update();

    // Abort task by aborting all subtasks
    // this will be caused by the following reasons:
    // 1.One subtask failed.
    // 2.One servant processing task 
    // 3.Upper layer ordered the task to abort.
    // @taskID   : taskID
    void  Abort( const std::string& taskID );
    
    // Launch task
    // @taskID   : taskID
    Error Launch( const std::string& taskID );

    // Try UpdateSubtaskStatus in every task
    // @taskID  : The ID for subtask not the task
    // @status  : The status for subtask
    // @outputs : The subtask's output information witch should be append to
    //            the task.
    void  UpdateSubtaskStatus( const std::string&      subtaskID ,
                               const TaskStatus::Code& status    ,
                               const vector<string>&   outputs   );

protected:
    // Constructor
    TaskManager();

    // Destructor
    ~TaskManager();

    // Initialization
    void Init();

private:

    // list of the task need to be pop
    std::vector<sptr<Task>> pop_list_;

    // use this bool to avoid clear pop_list_ frequently
    bool task_need_pop_;

    friend Singleton<TaskManager>; 

};

#endif // !TASK_MANAGER_H_ 