#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
    float Num;

    cout << Message << endl;
    cin >> Num;
   
    return Num;
}


int MyRound(float Num) {

    float Rounded = 0;
    int floorNumber = Num;

    Rounded = (Num > 0) ? Num + 0.5 : Num - 0.5;

    if ( (int)Rounded == floorNumber)
    {
        return floorNumber;
    }
    
    return Rounded;
}


int MyFloor(float Num) {
    
    if (Num > 0)
    {
        return Num;
    }

    return Num - 1;
}

int MyCeil(float Num) {

    if (Num > 0)
    {
        return Num + 1;
    }

    return Num ;
}


int MySqrt(float Num) {


    return pow(Num, 0.5);
}


int main()
{
    srand((unsigned)time(NULL));

    float Number = 0;
    Number = ReadNumber("Please Enter The Number");

    cout << MySqrt(Number);

    return 0;
}

