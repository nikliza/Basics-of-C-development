#include <iostream>
#include <string>
#include <vector>
using namespace std;

void UpdateIfGreater (int first, int& second ){
    if (first > second){
        second = first;
    }
}
