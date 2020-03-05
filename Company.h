#ifndef __COMPANY_INCLUDED
#define __COMPANY_INCLUDED

#include "Dept.h"
#include "Task.h"




#include <queue>


/*void test(int task){
    std::queue<int> q;
    q.push(task);

    //process

    int t = q.front();
    q.pop();
}*/

class Company{
public:
    Company();

    void AddTask(Task task);
    void Process();
    bool HaveWork();

    std::vector<Worker> getWorkersDesign();
private:
    Dept* design;
    Dept* front;
    Dept* back;
};

#endif