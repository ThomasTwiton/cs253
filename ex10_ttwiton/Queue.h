#include "exercise10.h"
#include "Node.h"
#include "EmptyQueueException.h"

#ifndef QUEUE_H
#define QUEUE_H

/*Task 6: Turn Queue into a template class */
template <class T>
class Queue {
    private:
        /*Task 7: Make head and tail templated variables */
        Node<T>* head;
        Node<T>* tail;
        int nodes;
    public:
        /* NOTE: The constructor will print data type of items stored in the Queue */
        Queue(): head(NULL), tail(NULL), nodes(0) { cout << "Queue of " << typeid(T).name() << " created" << endl; }
        ~Queue() { delete head; }
        /*Task 8: Update member function add to use templates */
        void add(T newData) {
            Node<T>* newNode = new Node<T>(newData);
            if (tail) {
                tail->setNext(newNode);
            }
            if (!head) {
                head = newNode;
            }
            tail = newNode;
            nodes++;
        }
        /*Task 9: Update member function remove add to use templates */
        T remove() {
            if (nodes == 0) {
                throw EmptyQueueException("ERROR: The queue is empty");
            }
            T result = head->getData();
            Node<T>* target = head;
            head = head->getNext();
            target->setNext(NULL);
            nodes--;
            delete target;

            return result;
        }

        bool isEmpty() const { return nodes == 0; }
        int size() const { return nodes; }
        /*Task 10: Implement the operator<< overloading */
        friend ostream& operator<<(ostream& os, const Queue& q) {
            Node<T>* current = q.head;
            while (current != NULL) {
                os << *current << ' ';
                current = current->getNext();
            }
            return os;
        }
};

#endif
