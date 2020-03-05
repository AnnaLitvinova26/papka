#include "TestRepo.h"



Dept* TestRepo::getDesign(){
    std::string surname;
    std::string name;
    Dept* design = new Dept();
    for (int i = 0; i < 5; i++){
        std::string s = std::to_string(i + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        design->addWorker(Worker(surname, name));
    }
    return design;
}
Dept* TestRepo::getFront(){
    std::string surname;
    std::string name;        
    Dept* front = new Dept();
    for (int i = 0; i < 5; i++){
        std::string s = std::to_string(i * 2 + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        front->addWorker(Worker(surname, name));        
    }
    return front;
}
Dept* TestRepo::getBack(){
    std::string surname;
    std::string name;        
    Dept* back = new Dept();
    for (int i = 0; i < 5; i++){
        std::string s = std::to_string(i * 3 + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        back->addWorker(Worker(surname, name));        
    }
    return back;
}


Repo* getInstance() {
    static Repo* _instance = 0;
    if (_instance == 0){
        _instance = new TestRepo();
    }
    return _instance;
}