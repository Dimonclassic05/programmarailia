#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 10 chisel " ;
    int array[10];
    int i = 0;
    int summa = 0;
    float srednee;
    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    for (i = 0; i < 10; i++)
    {
        summa = summa + array[i];
    }
    srednee = summa/10.0;

    int naib = array[1];
    int naim = array[1];
    for (i = 0; i < 10; i++)
    {
        if (naib < array[i])
        {
            naib = array[i];
        }

    }
    for (i = 0; i < 10; i++)
    {
        if (naim > array[i])
        {
            naim = array[i];
        }

    }
    std::cout << summa << std::endl;
    std::cout << srednee << std::endl;
    std::cout << naib << std::endl;
    std::cout << naim << std::endl;
    for (i = 9; i >= 0; i--)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}
