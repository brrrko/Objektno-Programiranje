#include "04_vector.h"

void print_vector(std::vector<int>& v)
{
    for (int el: v)
        std::cout << el << " ";
    std::cout << std::endl;
} 
