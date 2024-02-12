#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

void ReadArray(int arr[100], int& arrLength){
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    cout << "\nEnter aray elements: \n";

        for (int i = 0; i < arrLength; i++)
        {
            cout << "Element [" << i + 1 << "] : ";
            cin >> arr[i];
        }
        cout << endl;
}
void PrintArray(int arr[100], int arrLength){
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int TimesRepeated(int Number, int arr[100], int arrLength){
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i]) {
            count++;
        }
    }
    return count;
}

int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = 1 + rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    int arr[100], arrLength = 0, NumberToCheck = 0;

    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Please enter the number you want to check? ");

    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}

