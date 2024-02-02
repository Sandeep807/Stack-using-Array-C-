#include "stack.h"

Stack ::Stack(int cap)
{
    capacity = cap;
    top = -1;
    ptr = new int[capacity];
}

Stack ::~Stack()
{
    delete[] ptr;
}

void Stack ::push(int data)
{
    if (isFull())
    {
        std::cout << "Overflow" << std::endl;
    }
    else
    {
        ptr[++top] = data;
    }
}

int Stack ::pop()
{
    if (isEmpty())
    {
        std::cout << "Underflow" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Deleted element : " << ptr[top] << std::endl;
        return ptr[top--];
    }
}

int Stack ::Top()
{
    if (isEmpty())
    {
        std::cout << "Underflow" << std::endl;
        return 0;
    }
    else
    {
        return ptr[top];
    }
}

bool Stack ::isEmpty()
{
    return top == -1;
}

bool Stack ::isFull()
{
    return top == capacity - 1;
}

int Stack ::size()
{
    return top + 1;
}

Stack ::Stack(Stack &obj)
{
    capacity = obj.capacity;
    top = obj.top;
    ptr = new int[capacity];
    for (int i = 0; i <= top; i++)
    {
        ptr[i] = obj.ptr[i];
    }
}

Stack &Stack ::operator=(Stack &obj)
{
    if (this != &obj)
    {
        capacity = obj.capacity;
        top = obj.top;
        if (ptr != nullptr)
        {
            delete []ptr;
        }
        ptr = new int[capacity];
        for (int i = 0; i <= top; i++)
        {
            ptr[i] = obj.ptr[i];
        }
    }

    return *this;
}