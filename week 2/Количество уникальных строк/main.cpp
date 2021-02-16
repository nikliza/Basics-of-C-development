#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    set<string> words;
    int q;
    cin >> q;
    for (int i = 0; i<q; i++){
        string word;
        cin >> word;
        words.insert(word);

    }
    cout << words.size();

    return 0;
}

