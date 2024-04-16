#include <iostream>
#include <windows.h>

using namespace std;

void ltrtlstarload(int howmanytimes)
    {

        cout << endl << "\t" ;

        for(int i=0; i<howmanytimes; i++)
            {
                cout << " * . . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);

                cout << " . * . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . * . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . * .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . . *";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . . *";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . * .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . * . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . * . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " * . . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
                
                cout << " . . . . .";
                cout << "\b\b\b\b\b\b\b\b\b\b";
                Sleep(100);
            }
    }

int main()
{
    ltrtlstarload(5);
}
