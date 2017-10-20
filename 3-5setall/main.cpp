#include <iostream>
#include <cstdlib>

void setall(int* array,int size);

int main()
{
    int array[4];

    setall(array, 5);

    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}

void setall(int* array,int value)
{
    for (int i = 0; i < value; i++)
        {
            array[i] = value;
        }
}
