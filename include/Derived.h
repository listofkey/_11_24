#include "Base.h"

class Derived:public Base{
public:
    void show()override{
        std::cout<<"Derived class\n";
    }
};

class AbstractBase{
public:
    // 纯虚函数
    virtual void pureVirtualFunction()=0;
};
