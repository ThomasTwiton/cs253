#include "exercise10.h"

#ifndef EMPTYQUEUEEXCEPTION_H
#define EMPTYQUEUEEXCEPTION_H

class EmptyQueueException {
    private:
        string msg;
    public:
        EmptyQueueException(string msg) { this->msg=msg; }

        string getMsg() const { return this->msg; }
};

#endif
