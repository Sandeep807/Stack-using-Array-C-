#include <iostream>

class Stack
{
private:
    int capacity;
    int top;
    int *ptr;

public:
    Stack(int);
    ~Stack();
    void push(int);
    int pop();
    int Top();
    bool isEmpty();
    bool isFull();
    int size();
    Stack(Stack&);
    Stack& operator=(Stack&);
};