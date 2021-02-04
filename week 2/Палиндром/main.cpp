#include <iostream>
#include <string>
using namespace std;
    int IsPalindrom (string s){
    for (int i = 0; i < s.size()/2; i++){
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
        return true;
    }

int main() {
    string a;
    cin >> a;
    cout << IsPalindrom(a);
    return 0;
}