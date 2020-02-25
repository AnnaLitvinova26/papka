#include "Repo.h"

Repo* Repo::_instance = 0;

Dept* Repo::getDesign(){
    std::string surname;
    std::string name;
    Dept* design = new Dept();
    for (int i = 0; i < 5; i++){
        surname = "Ivanov" + i;
        name =  "Ivan" + i;
        design->addWorker(Worker(surname, name));
    }
    return design;
}
Dept* Repo::getFront(){
    std::string surname;
    std::string name;        
    Dept* front = new Dept();
    for (int i = 0; i < 5; i++){
        surname = "Ivanov" + i*2;
        name =  "Ivan" + i*2;
        front->addWorker(Worker(surname, name));        
    }
    return front;
}
Dept* Repo::getBack(){
    std::string surname;
    std::string name;        
    Dept* back = new Dept();
    for (int i = 0; i < 5; i++){
        surname = "Ivanov" + i*3;
        name =  "Ivan" + i*3;
        back->addWorker(Worker(surname, name));        
    }
    return back;
}