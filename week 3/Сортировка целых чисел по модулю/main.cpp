#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int ch;
        cin >> ch;
        v.push_back(ch);
    }

    sort(begin(v), end(v),
         [](int l, int r) {
             return abs(l) < abs(r);
         }
    );


    for (const auto& vec : v){
        cout << vec << " ";
    }



    return 0;
}
