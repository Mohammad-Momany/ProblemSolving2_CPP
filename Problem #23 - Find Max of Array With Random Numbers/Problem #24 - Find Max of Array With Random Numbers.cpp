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

int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = 1 + rand() % (To - From + 1) + From;
    return randNum;
}

int MaxNumberInArray(int arr[100], int arrLength) {
    int MaxNumber = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > MaxNumber)
        {
            MaxNumber = arr[i];
        }
    }
    return MaxNumber;
}

void ReadArray(int& arrLength) {

    do {
        cout << "\nEnter number of elements:\n";
        cin >> arrLength;

        if (arrLength > 100)
            cout << "\nThe number Must be less than 100\n";
        else if (arrLength < 1)
            cout << "\nThe number Must be greater than 0\n";
    } while (arrLength > 100 || arrLength < 1);

}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

void PrintArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;

    ReadArray(arrLength);
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\Max Number is: ";
    cout << MaxNumberInArray(arr, arrLength) << endl;

    return 0;
}

