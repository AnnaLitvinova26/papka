#include "TestRepo.h"


TestRepo::TestRepo() {
    Dept* back = new Dept(0);
    Dept* front = new Dept(back);
    Dept* design = new Dept(front);

    std::string surname;
    std::string name;

    int i = 0;
    for (; i < 5; i++){
        std::string s = std::to_string(i + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        design->addWorker(Worker(surname, name));
    }

    for (; i < 10; i++){
        std::string s = std::to_string(i + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        front->addWorker(Worker(surname, name));        
    }

    for (; i < 15; i++){
        std::string s = std::to_string(i + 1);
        surname = "Ivanov" + s;
        name =  "Ivan" + s;
        back->addWorker(Worker(surname, name));        
    }
}

Dept* TestRepo::getDesign(){
    return _design;
}
Dept* TestRepo::getFront(){
    return _front;
}
Dept* TestRepo::getBack(){
    return _back;
}

Repo* getInstance() {
    static Repo* _instance = 0;
    if (_instance == 0){
        _instance = new TestRepo();
    }
    return _instance;
}