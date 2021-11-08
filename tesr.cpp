#include<vector>
#include <iostream>
#include <iomanip>
int main()

{

    vector<int> v(2);
    v.resize(4, 1);
    v.push_back(2);
    v[3] = 3;
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it)
        cout << *it;
}
