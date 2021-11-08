#include <vector>
#include <iostream>
using namespace std;

typedef struct
{
    float x, y;
}point;

int main()
{
    vector<int> v1 {2, 3, 4}, v2 {2, 4, 5};
    cout << (v1 < v2) <<endl;
    
    vector<point> v3 {{2.1, 2.2}, {3.1, 3.2}};
    vector<point> v4 {{2.3, 3.2}, {2.2, 3.3}};
    //cout << (v3 < v4) <<endl;  error: operator < za point nije definiran   

}
