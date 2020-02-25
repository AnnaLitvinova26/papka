#ifndef __REPO_INCLUDED
#define __REPO_INCLUDED

#include "Company.h"

class Repo{
public:
    static Repo* getInstance(){
        if (_instance == 0){
            _instance = new Repo();
        }
        return _instance;
    }

    Dept* getDesign();
    Dept* getFront();
    Dept* getBack();
private:
    static Repo* _instance;
};

#endif