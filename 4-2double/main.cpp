#include <iostream>
#include <cstdlib>

void memory(int size);
void filling(double* array,int size);
void display(double* array,int size);
void clear(double* array,int size);

int main()
{
    double *array;
    std::cout << " enter the number of elements in the array " ;
    int size;
    std::cin >> size;

    memory(size);
    filling(array,size);
    display(array,size);
    clear(array,size);


    system("pause");
    return 0;
}

void memory(int size)
{
    double* array = new double[size];
}

void filling(double* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
}

void display (double* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << &array[i];
    }
}

void clear(double* array,int size)
{
    delete array;
}
