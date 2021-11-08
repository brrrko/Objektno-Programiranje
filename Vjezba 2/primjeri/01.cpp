#include <iostream>
#include "04_vector.h"
using namespace std;


int main()
{
    vector<int> v1;     /* default ctor */
    std::cout << "max size " << v1.max_size()<<std::endl;
    print_vector(v1);
   
    vector<int> v2(10); 
    print_vector(v2);
    
    
    vector<int> v3(10, 1);  /* fill ctor */
    print_vector(v3);
    
    
    vector<int> v4(v3);   /* copy ctor */
    print_vector(v4);
    
    vector<int> v5 {1,2,3,4,5}; /* initializer list */
    print_vector(v5);
    
    int carr[] = {1,2,3,4,5,6,7}; /* from c arr */
    vector<int> v6(carr, carr + 5);
    print_vector(v6);    
    
    vector<int>v7(v5.begin(), v5.begin()+2); /* range ctor */
    print_vector(v7);

}
