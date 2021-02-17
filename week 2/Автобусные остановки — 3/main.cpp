#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){
    map<set<string>,int> key_stop;
    int q;
    cin >> q;
    int route_number = 1;
    for (int i = 0; i<q; i++){
        int number_teams;
        cin >> number_teams;
        set<string> vec;
        for (int j = 0; j < number_teams; j++){
            string stop;
            cin >> stop;
            vec.insert(stop);
        }
        if (key_stop.count(vec) == 1){
            cout << "Already exists for "<< key_stop[vec]<< endl;
        } else{
            cout << "New bus " << route_number <<endl;
            key_stop[vec] = route_number;
            route_number++;
        }
    }
    return 0;
}

