#include <iostream>
#include <cstdlib>


int main()
{
int i;
int j;
int array[i][j];
int sum = 0 ;
for ( j = 0; j < 3; ++j)
{
    for ( i = 0; i < 3; ++i)
    {
        std::cout << " enter nine numbers " ;
        std::cin >> array[i][j];
        if (((i + j) % 2 == 0) || (array[i][j] > 5) || (array[i][j] % 3 != 0))
        {
          sum += array[i][j];
        }
    }
}

std::cout << sum;
    system("pause");
    return 0;
}
