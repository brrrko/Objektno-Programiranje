#include "04_vector.h"

int main()
{
    std::vector<int> v(10);

    try{
        std::cout << v.at(20) << std::endl;
    }
    catch(...){
            std::cout << "uhvacena iznimka " << std::endl;

    }
 
    try{
        std::cout << v[20] << std::endl;
    }
    catch(...){
            std::cout << "neuspjeh " << std::endl;

    }
    std::cout << "kraj" << std::endl;
}
