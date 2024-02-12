#include <iostream>
#include <string>

using namespace std;

void PrintDashLine() {
    cout << "_________________________________________________________________________\n\n";
};

void printNumberHeader() {
    cout << "\t\t\t Multipliaction Table From 1 to 10\n\n";
    cout << "    ";
    for (int i = 1; i <= 10; i++)
    {
        cout << "   " << i << "   ";
    }

    cout << endl;

    PrintDashLine();
}


void PrintMulitipliactionTable() {
   
    printNumberHeader();

    for (int i = 1; i <= 10; i++)
    {
        if (i  < 10)
            cout << i << "   |" ;
        else 
            cout << i << "  |" ;
        
        for (int j = 1; j <= 10; j++)
        {
            int result = i * j;
            if(result < 10)
                cout << "  " << result << "    ";
            else
                cout << "  " << result << "   ";
           
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    PrintMulitipliactionTable();
    return 0;
}
