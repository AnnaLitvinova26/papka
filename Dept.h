#ifndef __DEPT_INCLUDED
#define __DEPT_INCLUDED

#include <vector>

#include "Worker.h"

class Dept{
public:

    std::vector <Worker> getWorkers(){
        return workers;
    } 
    void addWorker(Worker worker) {
        workers.push_back(worker);
    }

    void AddTask(Task task){
        workers[0].AddTask(task);
    }
    bool Process(){
        for (int i = 0; i < workers.size(); i++){
            workers[i].Process();
        }
    }
    
private:
    std::vector <Worker> workers;
    Worker* boss;
};

#endif