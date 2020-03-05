#include <iostream>
#include <fstream>
#include <map>
#include <functional>
#include <time.h>

#include "Repo.h"

using namespace std;

int main(){
    srand (time(0)); 
    Company* comp = new Company();
    
    for (int i = 0; i < 5; i++){
        std::string s = std::to_string(i);
        comp -> AddTask(Task("task" + s, i + 1));
    }    

    cout << comp->getWorkersDesign()[0].getWorker() << endl;

    while(comp -> HaveWork()){
        comp -> Process();        
    }   
    
    cout << comp->getWorkersDesign()[0].getWorker() << endl;
}
