#include <iostream>

using namespace std;


float ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

bool CheckPerfectNumber(int Num)
{
    int Result = 0;

    for (int i = 1; i < Num; i++)
    {

        if (Num % i == 0)
            Result += i;

    }

    return (Result == Num);
}

void PrintPerfectNumberFrom1ToN(int Num)
{
  
    for (int i = 1; i <= Num; i++)
    {
        if (CheckPerfectNumber(i)) {
            cout << i << endl;
        }

    }
}



int main()
{
    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}
