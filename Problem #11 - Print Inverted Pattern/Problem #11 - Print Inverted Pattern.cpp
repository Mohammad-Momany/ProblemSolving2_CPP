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

void PrintInvertedPattern(int Number) {
   
    for (int i = Number; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    PrintInvertedPattern(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}

