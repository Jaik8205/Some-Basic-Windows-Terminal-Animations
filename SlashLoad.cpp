#include <iostream>
#include <windows.h>

using namespace std;

void loading(int howmanytimes)
    {
        for(int i=0;i<howmanytimes;i++)
            {
                cout<<"\t\b\b\b\b\b\b\b\b\b\b | | | | | ";
                Sleep(150);
                cout<<"\b\b\b\b\b\b\b\b\b\b\b / / / / / ";
                Sleep(150);
                cout<<"\b\b\b\b\b\b\b\b\b\b\b - - - - - ";
                Sleep(150);
                cout<<"\b\b\b\b\b\b\b\b\b\b\b \\ \\ \\ \\ \\ ";
                Sleep(150);
                cout<<"\b\b\b\b\b\b\b\b\b\b\b";
            }
    }

int main()
    {
        loading(5);        
    }