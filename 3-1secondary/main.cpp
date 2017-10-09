#include <iostream>
#include <cstdlib>

int secondary(int a,int b,int c);

int main()
{
    int one;
    int two;
    int three;
    std::cout << "enter three numbers";
    std::cin >> one >> two >> three;
    int value = secondary( one , two , three );
    std::cout << value;
    system("pause");
    return 0;
}

secondary(int a , int b ,int c )
{
    if (((a > b) & ( a < c ))||((a > c) & (a < b)))
    {
        return a;
    }
    else
    {
        if (((b > a) & ( b < c ))||((b > c) & (b < a)))
        {
            return b;
        }
        else
        {
            if (((c > a) & ( c < b ))||((c > a) & (c < b)))
            {
                return c;
            }
        }
    }

}
