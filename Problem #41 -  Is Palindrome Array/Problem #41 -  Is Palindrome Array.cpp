#include <iostream>
using namespace std;


int ReadNumberLess100() {
    int arrLength = 0;
    do {
        cout << "\nEnter number of elements:\n";
        cin >> arrLength;

        if (arrLength > 100)
            cout << "\nThe number Must be less than 100\n";
        else if (arrLength < 1)
            cout << "\nThe number Must be greater than 0\n";
    } while (arrLength > 100 || arrLength < 1);

    return arrLength;

}

int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = 1 + rand() % (To - From + 1) + From;
    return randNum;
}

bool IsPalindromeArray(int arr[100], int arrLength) {

    int halfTheLength = arrLength / 2;
    bool IsPalindrome = true;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == arr[arrLength - 1 - i])
            continue;
        else
            IsPalindrome = false;

        return IsPalindrome;
    }

}

void PrintArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

}

void FillArrayHardCode(int arr[100], int &arrLength) {

    arrLength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

}

void PrintIsPalindromeArray(bool IsPalindrome) {

    if (IsPalindrome)
        cout << "\nArray Is Palindrome\n";
    else
        cout << "\nArray Is Not Palindrome\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;

    FillArrayHardCode(arr, arrLength);

    PrintArray(arr, arrLength);

    PrintIsPalindromeArray(IsPalindromeArray(arr, arrLength));

    return 0;
}


