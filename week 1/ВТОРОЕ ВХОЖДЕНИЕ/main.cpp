#include <iostream>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;
    int rez = -2 ;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'f'){
            if (rez == -2) {
                rez = -1;
            } else if (rez == -1){
                    rez = i;
                    break;
            }
        }
    }
    cout << rez;
    return 0;
}

