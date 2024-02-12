#include <iostream>
#include <string>

using namespace std;

struct NumberCouter {
    int Number;
};
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

void PrintCountOfRepetedDigits(int Number) {

    cout << endl; 
    
    for (int i = 0; i < 10; i++) {
        short DigitFrequency = 0;
        DigitFrequency = CountRepatedDigits(Number, i);
        if (DigitFrequency > 0) {
            cout << "Digit " << i << " Frequencey is " << DigitFrequency << " Time(s).\n";
        };
    }


}

int main()
{
    PrintCountOfRepetedDigits(ReadPositiveNumber("Please enter the main number? "));
    
    return 0;
}

