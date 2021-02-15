#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


void NEW_BUS(map<string,vector<string>>& key_stop,map<string,vector<string>>& key_bus, const string& bus, const int& stop_count){
    string stop;
    for(int i = 0; i < stop_count; i++){
        cin >> stop;
        key_stop[stop].push_back(bus);
        key_bus[bus].push_back(stop);
    }
}

void BUSES_FOR_STOP(map<string,vector<string>>& key_stop, const string& stop){
    if (key_stop.count(stop) != 0){
        for (auto bus : key_stop[stop]){
            cout << bus << " ";
        }
        cout << endl;
    } else{
        cout << "No stop" <<endl;
    }
}

void STOPS_FOR_BUS(map<string,vector<string>>& key_stop,map<string,vector<string>>& key_bus, const string& bus) {
    if (key_bus.count(bus) != 0) {
        for (auto stop : key_bus[bus]) {
            if (key_stop[stop].size() == 1) {
                cout << "Stop " << stop << ": no interchange" << endl;
            } else {
                cout << "Stop " << stop << ": ";
                for (auto businmap : key_stop[stop]) {
                    if (businmap != bus) {
                        cout << businmap << " ";
                    }
                }
                cout << endl;
            }
        }
    } else{
        cout << "No bus"<< endl;
    }
}

void ALL_BUSES(map<string,vector<string>>& key_bus){
    if (key_bus.size() == 0){
        cout << "No buses" << endl;
    }else{
        for (auto bus : key_bus){
            cout << "Bus "<< bus.first<< ": ";
            for (auto stop: bus.second){
                cout << stop<< " ";
            }
            cout << endl;
        }
    }
}

int main(){
    map<string,vector<string>> key_stop;
    map<string,vector<string>> key_bus;
    int q;
    cin >> q;
    for (int i = 0; i < q ; i++ ){
        string comand;
        cin >> comand;
        if (comand == "ALL_BUSES"){
            ALL_BUSES(key_bus);
        } else{
            if (comand == "STOPS_FOR_BUS"){
                string bus;
                cin >> bus;
                STOPS_FOR_BUS(key_stop,key_bus,bus);
            } else{
                if (comand =="BUSES_FOR_STOP"){
                    string stop;
                    cin >> stop;
                    BUSES_FOR_STOP(key_stop, stop);
                } else{
                    if (comand == "NEW_BUS"){
                        string bus;
                        int stop_count;
                        cin >> bus >> stop_count;
                        NEW_BUS(key_stop, key_bus, bus, stop_count);
                    }
                }
            }

        }

    }
    return 0;
}

