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


void PrintIfPrefectNumber(int Num)
{
    if (CheckPerfectNumber(Num))
        cout << Num << " is a prefect number" << endl;
    else
        cout << Num << " is not a prefect number" << endl;
}



int main()
{
    PrintIfPrefectNumber(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}
