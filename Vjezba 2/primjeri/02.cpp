#include "04_vector.h"
using namespace std;

int main()
{
    vector<int> v(10);
    print_vector(v);
    
    v.reserve(100);
    print_vector(v);

    for (size_t i = 0; i < 50; ++i)
        v.push_back(i);
    v.reserve(50);
    print_vector(v);

    vector<int> v1(10, 3);
    vector<int> v2(10, 3);
    v1.reserve(100);
    
    cout << "capacity v1 " << v1.capacity() << endl;
    cout << "capacity v2 " << v2.capacity() << endl;
    cout << (v1 == v2) << endl;
}
