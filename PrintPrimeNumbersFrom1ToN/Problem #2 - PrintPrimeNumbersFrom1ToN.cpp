#include <iostream>
#include <cmath>

using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int CheckPrime(int Num)
{
    int M = round(Num / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
            return enPrimeNotPrime::NotPrime;

    }

    return enPrimeNotPrime::Prime;
}


void PrintPrimeNumberFrom1ToN(int Num)
{
    cout << "\nPrime Numbers from " << 1 << " To " << Num;
    cout << " are : " << endl;

    for (int i = 1; i <= Num; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        };
    };
        
}



int main()
{
    PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}
