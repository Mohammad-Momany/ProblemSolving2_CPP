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

int CountRepatedDigits(int Number, short CheckNumber) {
    int Remainder = 0;
    int Counter = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == CheckNumber)
            Counter++;
    };

    return Counter;

}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number? ");
    short CheckNumber = ReadPositiveNumber("Please enter one digit to check? ");
    int TotalRepatedDigits = CountRepatedDigits(Number, CheckNumber);

    cout << "\nDigit " << CheckNumber << " Frequency is " << TotalRepatedDigits << " Time(s).\n";

    return 0;
}

