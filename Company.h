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
    void AddTask(Task task){
        design.AddTask(task);
    }
    bool Process(){
        design.Process();        
    }
    bool HaveWork(){

    }
private:
    Dept design;
    Dept front;
    Dept back;
};

#endif