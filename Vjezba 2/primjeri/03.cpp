#include "04_vector.h"
using namespace std;

int main()
{
    vector<int> v1(10, 2);
    v1.reserve(100);
    
    vector<int> v2(20, 1);
    v1.swap(v2);     /* swap i capacity */
    
    print_vector(v1);
    print_vector(v2);
}
