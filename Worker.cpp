#include "Worker.h"

void Worker::AddTask(Task task){
    tasks.push_back(task);
}
bool Worker::Process(){
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
bool Worker::HaveWork(){
    if (tasks.size() != 0){
        return true;
    }
    else false;
}

std::string Worker::getWorker(){
    return _surname + " " + _name;
}