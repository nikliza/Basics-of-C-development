#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


void COME(const int& quantity, vector<bool>& queue){
    if (quantity >= 0) {
        for (int i = 0; i < quantity; i++) {
            queue.push_back(true);
        }
    } else{

        for (int i = 0; i < -quantity; i++) {
            queue.pop_back();
        }

    }
}
void WORRY(const int& index, vector<bool>& queue){
    queue[index] = false;
}

void QUIET(const int& index, vector<bool>& queue){
    queue[index] = true;
}

void WORRY_COUNT(const vector<bool>& queue){
    int res = count(queue.begin(), queue.end(), false);
    cout << res << endl;
}

int main(){
    vector<bool> vect;
    int number_of_teams;
    cin >> number_of_teams;
    for (int i = 0; i < number_of_teams; i++){
        string command;
        cin >> command;
        if (command == "WORRY_COUNT"){
            WORRY_COUNT(vect);
        } else{
            int a;
            cin >> a;
            if (command == "WORRY"){
                WORRY(a,vect);
            } else{
                if (command == "QUIET"){
                    QUIET(a,vect);
                }else{
                    if (command == "COME"){
                        COME(a,vect);
                    }
                }
            }
        }

    }
        return 0;
}

