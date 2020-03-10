#include "Dept.h"

Dept::Dept(Dept* next) {
    _next = next;
}

std::vector <Worker> Dept::getWorkers(){
    return workers;
} 
void Dept::addWorker(Worker worker) {
    workers.push_back(worker);
}

void Dept::AddTask(Task* task){    
    workers[0].AddTask(task);
}
bool Dept::Process(){
    for (int i = 0; i < workers.size(); i++){
        if (workers[i].HaveWork()){
            Task* task = workers[i].Process();
            if (task != 0 && _next != 0) {                
                _next->AddTask(task);
            }          
            if(task != 0){
                workers[i].deleteTask();//не передает задачу((
            }      
        }
    }
}
bool Dept::HaveWork(){
    for (int i = 0; i < workers.size(); i++){
        return workers[i].HaveWork();
    }        
}