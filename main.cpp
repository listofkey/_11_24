#include <iostream>
#include <map>

int main(){
    std::cout<<"hello"<<std::endl;
    std::map<int,std::string> myMap;
    myMap[1]="1";
    myMap[2]="2";
    myMap[3]="3";
    myMap[5]="5";
    myMap[7]="7";
    myMap[4]="4";

    int x=4;
    auto y=4.5;
    for (const auto& pair:myMap)
    {
        std::cout<<pair.first<<" : "<<pair.second<<std::endl;
    }
    
    return 0;
}