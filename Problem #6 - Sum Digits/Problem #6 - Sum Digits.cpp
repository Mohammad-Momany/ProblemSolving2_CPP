#include <iostream>
#include <string>

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

int SumDigits(int Number) {
    int Remainder = 0;
    int Total = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Total += Remainder;
    };

    return Total;

}
int main()
{
    int TotalSumDigits = SumDigits(ReadPositiveNumber("Please enter a positive number? "));
    cout << "\nSum Of Digits = " << TotalSumDigits << "\n"; 
    return 0;
}

