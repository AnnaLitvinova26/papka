#include "Company.h"
#include "Repo.h"


Company::Company() {
        design = getInstance()->getDesign();
        front = getInstance()->getFront();
        back = getInstance()->getBack();
}

void Company::AddTask(Task task){
    design->AddTask(task);
}
bool Company::Process(){
    design->Process(); 
    front->Process();
    back->Process();
}
bool Company::HaveWork(){
    return  design->HaveWork();
}