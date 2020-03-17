#ifndef __LISTENER_INCLUDED
#define __LISTENER_INCLUDED

#include "Task.h"
#include "Worker.h"

class Listener{
public:
    virtual void onWorkReady(Task* task, Worker* worker);
};

#endif