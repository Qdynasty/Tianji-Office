//
// Created by trunk on 2023/8/23.
//
#include "New.h"


using namespace std;

class New {
public:
    static int* newFunc(){
        int* a= new int(10);
        return a;
    }
};

int main(){
    int *pInt =New::newFunc();
    std::cout<<*pInt<<std::endl;
    std::cout<<pInt<<std::endl;

    delete pInt;

    std::cout<<*pInt<< std::endl;
    cin.get();
    return 0;

}