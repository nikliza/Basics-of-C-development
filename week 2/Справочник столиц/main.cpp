#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void CHANGE_CAPITAL(map<string,string>& directory_capitals, const string& country, const string& new_capital){
    if(directory_capitals.count(country) != 0){
        if (directory_capitals[country] == new_capital){
            cout << "Country " << country << " hasn't changed its capital" << endl;
        } else{
            cout << "Country " << country << " has changed its capital from " << directory_capitals[country] << " to " << new_capital << endl;
            directory_capitals[country] = new_capital;
        }
    } else{
        cout << "Introduce new country " << country<<  " with capital "  <<new_capital << endl;
        directory_capitals[country] = new_capital;
    }
}

void RENAME(map<string,string>& directory_capitals,string old_country_name , string new_country_name){
    if(directory_capitals.count(old_country_name) == 0 || directory_capitals.count(new_country_name) == 1 || old_country_name == new_country_name ){
        cout <<"Incorrect rename, skip" <<endl;
    } else{
        cout << "Country "<< old_country_name << " with capital " << directory_capitals[old_country_name] << " has been renamed to " << new_country_name << endl;
        directory_capitals[new_country_name] = directory_capitals[old_country_name];
        directory_capitals.erase(old_country_name);
    }
}

void ABOUT(map<string,string>& directory_capitals, string country ){
    if (directory_capitals.count(country) == 0){
        cout << "Country " << country << " doesn't exist"<<endl;
    }else{
        cout << "Country " << country << " has capital " << directory_capitals[country]<< endl;
    }
}
void PrintMap(map <string, string>& m){
    for (auto even : m){
        cout << even.first << "/" << even.second << " ";
    }
}

void DUMP(map<string,string>& directory_capitals){
    if (directory_capitals.size() == 0){
        cout << "There are no countries in the world"<< endl;
    } else{
        PrintMap(directory_capitals);
    }
}

int main(){
map<string,string> m;
int n;
cin >> n;
for (int i = 0; i < n ; i++){
    string comand;
    cin >> comand;
    if (comand == "DUMP"){
        DUMP(m);
    } else{
        if (comand == "ABOUT"){
            string country;
            cin >> country;
            ABOUT(m,country);
        } else{
            if(comand == "RENAME"){
                string old_country_name;
                string new_country_name;
                cin >> old_country_name >> new_country_name;
                RENAME(m,old_country_name,new_country_name);
            } else{
                if(comand == "CHANGE_CAPITAL"){
                    string country;
                    string new_capital;
                    cin >> country >> new_capital;
                    CHANGE_CAPITAL(m,country,new_capital);
                }
            }
        }
    }
}
     return 0;
}

