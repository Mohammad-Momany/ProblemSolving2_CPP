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

void PrintReversdDigits(int Number) {
    int  Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        cout << Remainder << endl;
    }
}

int ReverseDigits(int Number) {
    int Remainder = 0;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    };

    return ReversedNumber;

}
int main()
{
    PrintReversdDigits(ReverseDigits(ReadPositiveNumber("Please enter a positive number? ")));
    return 0;
}

