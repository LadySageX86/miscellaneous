/*****************************
*         FIZZBUZZ-C++       *
*        By Sage Smith       *
* sagemistressmods@gmail.com *
******************************/
// kopimi

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int x = 1;
    array<int,100> numbers;

    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = x;
        x++;
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 3 == 0)
        {
            if (numbers[i] % 5 == 0)
            {
                cout << "FizzBuzz\n";
                continue;
            }
            cout << "Fizz\n";
            continue;
        }
        else if (numbers[i] % 5 == 0)
        {
            cout << "Buzz\n";
            continue;
        } 
        else
        {
            cout << numbers[i] << endl;
        }
    }
    
    return 0;
}
