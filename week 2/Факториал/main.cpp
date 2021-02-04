#include <iostream>
#include <vector>
using namespace std;
    int Factorial (int a){
        int f = 1;
        if (a != 1){
            for(int i = 2 ; i <= a ;++i ){
                f *= i;
            }
        }
        return f;
    }

