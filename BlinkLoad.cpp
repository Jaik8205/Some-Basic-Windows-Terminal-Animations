#include <iostream>
#include <windows.h>

using namespace std;

void blinkload(int howmanytimes)
        {
            cout << "\n\n\t";

            for(int i=0;i<howmanytimes;i++)
                {
                    cout<<"\b\b\b\b\b\b\b\b\b\b | | | | | ";
                    Sleep(100);
                    
                    cout<<"   RUNNING\b\b\b\b\b\b\b\b\b\b";
                    Sleep(150);
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";
                    
                    cout<<"\b\b\b\b\b\b\b\b\b\b\b / / / / / ";
                    Sleep(100);
                    
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";
                    Sleep(150);
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";
                    
                    cout<<"\b\b\b\b\b\b\b\b\b\b\b - - - - - ";
                    Sleep(100);
                    
                    cout<<"   RUNNING\b\b\b\b\b\b\b\b\b\b";
                    Sleep(150);
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";
                        
                    cout<<"\b\b\b\b\b\b\b\b\b\b\b \\ \\ \\ \\ \\ ";
                    Sleep(100);
                    
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";
                    Sleep(150);
                    cout<<"          \b\b\b\b\b\b\b\b\b\b";

                    cout<<"\b\b\b\b\b\b\b\b\b\b\b";
                }
            cout<<"\n\n";
        }

int main()
    {
        blinkload(5);        
    }


