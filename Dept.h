#ifndef __DEPT_INCLUDED
#define __DEPT_INCLUDED

#include <vector>

#include "Worker.h"

class Dept{
public:
    Dept(Dept* next);
    std::vector <Worker> getWorkers();
    void addWorker(Worker worker);

    void AddTask(Task task);
    bool Process();
    bool HaveWork();
    
private:
    std::vector <Worker> workers;
    Worker* boss;

    Dept* _next;
};

#endif