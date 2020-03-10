#include "Company.h"
#include "Repo.h"


Company::Company() {
    design = getInstance()->getDesign();
    front = getInstance()->getFront();
    back = getInstance()->getBack();
}

std::vector<Worker> Company::getWorkersDesign(){
    return design->getWorkers();
}
std::vector<Worker> Company::getWorkersFront(){
    return front->getWorkers();
}
std::vector<Worker> Company::getWorkersBack(){
    return back->getWorkers();
}
void Company::AddTask(Task* task){
    design->AddTask(task);
}
void Company::Process(){
    design->Process(); 
    front->Process();
    back->Process();
}
bool Company::HaveWork(){
    return  design->HaveWork();
}