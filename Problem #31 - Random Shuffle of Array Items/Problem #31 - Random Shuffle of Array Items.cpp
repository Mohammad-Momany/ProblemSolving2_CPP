#include <iostream>
using namespace std;


int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum =  rand() % (To - From + 1) + From;
    return randNum;
}


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



void Swap(int& Num1, int& Num2 ) {

    int Temp = 0;

    Temp = Num1;

    Num1 = Num2;
    Num2 = Temp;
}

void FillArrayFrom1ToN(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    }

}

void ShuffleArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        int Rand1 = RandomNumber(0, (arrLength - 1));
        int Rand2 = RandomNumber(0, (arrLength - 1));
   
            if (Rand1 == Rand2)
            {
                i--;
                continue;
            }

            Swap(arr[Rand1], arr[Rand2]);
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

    arrLength = ReadNumberLess100();
    FillArrayFrom1ToN(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);


    cout << "\nShuffled Array is: ";
    PrintArray(arr, arrLength);

    return 0;
}


