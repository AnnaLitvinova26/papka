#include "Dept.h"

std::vector <Worker> Dept::getWorkers(){
    return workers;
} 
void Dept::addWorker(Worker worker) {
    workers.push_back(worker);
}

void Dept::AddTask(Task task){
    workers[0].AddTask(task);
}
bool Dept::Process(){
    for (int i = 0; i < workers.size(); i++){
        workers[i].Process();
    }
}
bool Dept::HaveWork(){
    for (int i = 0; i < workers.size(); i++){
        return workers[i].HaveWork();
    }        
}