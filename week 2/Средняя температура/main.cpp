#include <iostream>
#include <string>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& v){
    for (auto s: v){
        cout << s << ' ';
    }
}

int main(){
    int n;
    double summ;
    vector<int> zn;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        v.push_back(s);
        summ += s;
    }

    summ = summ/n;

    int i=0;
    for (auto vv: v){
        if (vv > summ){
            zn.push_back(i);
        }
        i++;
    }
    cout << zn.size() << endl;

    PrintVector(zn);

    return 0;
}

