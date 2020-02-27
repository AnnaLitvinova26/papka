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
    void AddTask(Task task){
        tasks.push_back(task);
    }
    bool Process(){
        int x = rand()%100;
        if (x <= 90){
            tasks.erase(tasks.begin());
            score++;
        } else{
            score--;
        }
        if (tasks.size() != 0){
            return true;
        } else false;
    }

    std::string getWorker(){
        return _surname;
    }

private:
    std::string _surname;
    std::string _name;
    int score;
    std::vector <Task> tasks;
};

#endif