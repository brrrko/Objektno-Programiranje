#include "vector.hpp"
using namespace std;

void MyVector::vector_new (size_t sz)
{
    vector<int> v(sz);
}
void MyVector::vector_delete()
{
    vector<int> v;
    v.clear();
}
void MyVector::vector_push_back(int n)
{
    vector<int> v;
    v.push_back(n);
}
void MyVector::vector_pop_back()
{
    vector<int> v;
    v.pop_back();
}
int& MyVector::vector_front()
{
    vector<int> v;
    v.front();
}
int& MyVector::vector_back()
{
    vector<int> v;
    v.back();
}
size_t MyVector::vector_size() 
{
    /* TODO */
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}