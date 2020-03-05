#ifndef __TESTREPO_INCLUDED
#define __TESTREPO_INCLUDED

#include <vector>

#include "Repo.h"

class TestRepo : public Repo{
public:
    Dept* getDesign() override;
    Dept* getFront() override;
    Dept* getBack()override;
    std::vector<Task> tasks;     
};


Repo* getInstance();

#endif  
