#include <iostream>
#include <fstream>
#include <map>
#include <functional>
#include <time.h>

#include "Repo.h"

using namespace std;

int main(){
    srand (time(0));  
    std::cout << Repo::getInstance()->getDesign()->getWorkers();
}