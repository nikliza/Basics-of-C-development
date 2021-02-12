#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<char,int> BuildCharCounters(string& word){
    map<char,int> word_map;
    for (char w : word){
        word_map[w] +=1;
    }
    return word_map;

};

int main(){
int word_count;
cin >> word_count;
string first_word;
string second_word;
for (int i=0; i< word_count; i++){
    cin >> first_word;
    cin >> second_word;
    if (BuildCharCounters(first_word) == BuildCharCounters(second_word)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
     return 0;
}

