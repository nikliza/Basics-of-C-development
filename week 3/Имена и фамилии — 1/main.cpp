#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

string FindNameByYear(const map<int, string>& names, int year) {
    string name;

    for (const auto& item : names) {
        if (item.first <= year) {
            name = item.second;
        } else {
            break;
        }
    }
    return name;
}
class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        fn_map[year] = first_name;
        // добавить факт изменения имени на first_name в год year
    }
    void ChangeLastName(int year, const string& last_name) {
        ln_map[year] = last_name;
        // добавить факт изменения фамилии на last_name в год year
    }
    string GetFullName(int year) {
        string fn = FindNameByYear(fn_map,year);
        string ln = FindNameByYear(ln_map,year);

        if (fn.empty() && ln.empty() ){
            return "Incognito";
        } else{
            if (fn.empty()){
                return ln+" with unknown first name";
            } else{
                if (ln.empty()  ){
                    return fn+" with unknown last name";
                } else{
                    return fn+ ' ' + ln;
                }
            }
        }

        // получить имя и фамилию по состоянию на конец года year
    }
private:
    map<int, string> fn_map;
    map<int, string> ln_map;
    // приватные поля
};

int main() {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    return 0;
}
