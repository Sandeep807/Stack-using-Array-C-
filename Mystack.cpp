#include "stack.h"

int main()
{
    int ch;
    Stack s(8);
    while (1)
    {
        std::cout<<"\n1. Push"<<std::endl;
        std::cout<<"2. Pop"<<std::endl;
        std::cout<<"3. Peak"<<std::endl;
        std::cout<<"4. Size"<<std::endl;
        std::cout<<"0. Exit"<<std::endl;
        std::cout<<"Enter your choice : ";
        std::cin>>ch;
        switch (ch)
        {
        case 1:
            int val;
            std::cout<<"Enter data ";
            std::cin>>val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            std::cout<<"Top element : "<<s.Top();
            break;
        case 4:
            std::cout<<s.size();
            break;
        case 0:
            exit(0);
            break;
        default:
            std::cout<<"Invalid choice";
            break;
        }
        
    }
    return 0;
}