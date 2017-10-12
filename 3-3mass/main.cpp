#include <iostream>
#include <cstdlib>

void puzirek(int* a,int b);

int main()
{
    int array[4] = {1,2,3,4};
    puzirek(array,4);
    system("pause");
    return 0;
}

void puzirek(int* a,int b)
{
    int c;
    int j;
    int i;
    for (j = 0; j < 3; j++) // сортировка по возрастанию
    {
        for (i = 0; i < 4; i++)
         if (array[i]>array[i+1])
         {
            c = array[i+1];
            array[i+1] = array[i];
            array[i] = c;
         }
    }
}
