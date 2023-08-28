//
// Created by trunk on 2023/8/22.
//

#include "Run.h"
#include <iostream>

using namespace std;

class Run {

public:
     int* stack() {
        int a = 10;
        return &a;
    }
public:
    int* heap(){
         int* a  = new int(10);
        return a;
     }

public:
    int run() {
        int *p = stack();
        std::cout << "stack" << *p << std::endl;
        cout << *p << endl;
        system("pause");
        int *d = heap();
        std::cout << "heap" << *d << std::endl;
        cout << *d << endl;
        return 0;
    }

};

int main() {
    Run run;
    run.run();
}