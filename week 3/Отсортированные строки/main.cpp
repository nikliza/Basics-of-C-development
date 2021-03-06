#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class SortedStrings {
public:
    void AddString(const string& s) {
        word_map.push_back(s);
        sort (word_map.begin(), word_map.end());
        // добавить строку s в набор
    }
    vector<string> GetSortedStrings() {
        return word_map;
        // получить набор из всех добавленных строк в отсортированном порядке
    }
private:
    vector<string> word_map;
    // приватные поля
};

