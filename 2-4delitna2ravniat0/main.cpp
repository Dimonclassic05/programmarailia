#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 10 chisel " ;
    int array[10];
    int i = 0;
    float a;
    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    for (i = 0; i < 10; i++)
    {
        a =  i % 2;
        if (a == 0)
            {
             array[i] = array[i]/2.0;
            }
    }
    for (i = 0; i < 10; i++)
    {
        a =  array[i] % 5;
        if (a == 0)
            {
             array[i] = 0;
            }
    }
    for (i = 0; i < 10; i++)
    {
        std::cout << array[i];
    }


    system("pause");
    return 0;
}
