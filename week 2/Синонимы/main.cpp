#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){
    map<string,set<string>> synonyms;
    int q;
    cin >> q;
    for (int i = 0; i<q; i++){
        string comand;
        cin >> comand;
        if (comand == "ADD"){
            string word1, word2;
            cin >> word1 >> word2;
            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        } else{
            if (comand == "COUNT"){
                string word;
                cin >> word;
                cout << synonyms[word].size() << endl;
            } else{
                if (comand == "CHECK"){
                    string word1, word2;
                    cin >> word1 >> word2;

                    if (synonyms[word1].count(word2) == 1){
                        cout << "YES" << endl;
                    } else{
                        cout << "NO"<< endl;
                    }
                }
            }
        }
    }
    return 0;
}

