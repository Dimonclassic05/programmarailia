#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 20 chisel " ;
    float array[20];
    int i = 0;
    float a;
    for (i = 0; i < 20; i++)
    {
        std::cin >> array[i];
    }
    for (i = 0; i < 20; i++)
    {
        a =  i % 2;
        std::cout  << a;
        if (a == 0)
            {
             array[i] = array[i]/2.0;
            }
        else
        {
            array[i] = array[i]/3.0;
        }
    }
    for (i = 0; i < 20; i++)
    {
        std::cout << array[i];
    }


    system("pause");
    return 0;
}
