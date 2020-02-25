#ifndef __TESTREPO_INCLUDED
#define __TESTREPO_INCLUDED

#include <vector>

#include "Repo.h"

class TestRepo : public Repo{
public:
    
private:
    std::vector<Task> tasks;     
};

#endif  