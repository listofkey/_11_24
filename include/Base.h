#include <iostream>
class Base
{
private:
    /* data */
public:
    Base(/* args */);
    ~Base();
    virtual void show(){
        std::cout<<"Base class\n";
    }
};