#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;
struct MyVector
{
    int* arr;
    size_t size, capacity;

    // member functions
    void vector_new (size_t sz = 0);
    void vector_delete();
    void vector_push_back(int n);/* adds a new element at the end of the vector */
    void vector_pop_back();/* removes the last element in the vector */
    int& vector_front();/* returns a reference to the first element in the vector*/
    int& vector_back(); /* returns a reference to the last element in the vector */
    size_t vector_size(); /* returns the number of the elements in the vector */

    void print_vector();
};


int main() 
{
    MyVector mv;
    mv.vector_new();
    
    int m;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while(cin >> m)
        mv.vector_push_back(m);
    
    cout << "first element " << mv.vector_front() << endl;
    cout << "last element " << mv.vector_back() << endl;
    mv.print_vector();

    cout << "removing last element" << endl;
    mv.vector_pop_back();
    mv.print_vector();

    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.capacity << endl;

    mv.vector_delete();
    return 0;
}

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
        cout << arr[i] << " ";
    cout << std::endl;
}