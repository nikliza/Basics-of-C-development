#include <iostream>
#include <string>
#include <vector>
using namespace std;
    int IsPalindrom (string s){
    for (int i = 0; i < s.size()/2; i++){
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
        return true;
    }
    vector<string>PalindromFilter(vector<string> words, int minLength){
        vector<string> v;
        for (auto w : words){
            if (w.size() >= minLength ){
                if(IsPalindrom(w)){
                    v.push_back(w);
                }
            }
        }
        return v;

    };

int main() {

    return 0;
}