#include "Worker.h"

#include <iostream>
void Worker::AddTask(Task* task){
    tasks.push_back(task);
}

Task* Worker::Process(){
    int x = rand()%100;
    if (x <= 100){        
        score++;
        return tasks[0];
    } else{
        score--;
        return 0;
    };
}
bool Worker::HaveWork(){
    if (tasks.size() != 0){
        return true;
    }
    else false;
}
void Worker::deleteTask(){
    tasks.erase(tasks.begin());
}

std::string Worker::getWorker(){
    std::string s;

    for (int i = 0; i < tasks.size(); i++){
        s += tasks[i]->getTask() + " ";
    }
    return _surname + " " + _name + " " + s;
}