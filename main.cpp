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

    for (int i = 0; i < 10; i++){
        std::string s = std::to_string(i);
        comp -> AddTask(new Task("task" + s, i + 1));        
    }  

    while(comp -> HaveWork()) {
        comp->getWorkers();    

        std::cout << "________________________________" << std::endl;
        comp -> Process();      
    } 

    comp->getWorkers();
}
