#include <iostream>
#include <windows.h>

using namespace std;

void starload(int howmanytimes)
        {
            cout << "\n\n\t";

            for(int i=0;i<howmanytimes;i++)
                {
                    cout << " * ";
                    Sleep(150);
                }
            cout<<"\n\n";
        }

int main()
    {
        starload(5);        
    }


