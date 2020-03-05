#ifndef __WORKER_INCLUDED
#define __WORKER_INCLUDED


#include <string>
#include <vector>

#include "Task.h"

class Worker{
public:
    Worker(std::string surname, std::string name){
        _surname = surname;
        _name = name;
        score = 0;
    }
    void AddTask(Task task);
    Task* Process();
    bool HaveWork();

    std::string getWorker();

private:
    std::string _surname;
    std::string _name;
    int score;
    std::vector <Task> tasks;
};

#endif