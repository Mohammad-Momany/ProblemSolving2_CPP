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

void PrintNumberPattern(int Number) {

    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    PrintNumberPattern(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}

