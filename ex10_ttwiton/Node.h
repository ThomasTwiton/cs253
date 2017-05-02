#include "exercise10.h"

#ifndef NODE_H
#define NODE_H

/* Task 2: Turn Node into a template class */
template <class T>
class Node {
    private:
        /* Task 3: Make member variable data of type T */
        T data;
        Node* next;
    public:
        /*Task 4: Make sure data is treated as a variable of type T, not int */
        Node(T newData): data(newData), next(NULL) { }
        Node(T newData, Node* nextNode): data(newData), next(nextNode) { }
        ~Node()  {
            if (next) {
                delete next;
            }
        }

        T getData() const { return data; }
        Node* getNext() const { return next; };
        void setNext(Node* nextNode) { next = nextNode; };
        /*Task 5: Implement the operator<< overloading */
        friend ostream& operator<<(ostream& os, const Node& n) {
            os << n.data;
            return os;
         }
};

#endif
