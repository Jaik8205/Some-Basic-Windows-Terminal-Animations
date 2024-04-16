#include <iostream>
#include <windows.h>

using namespace std;

void starload(int howlong)
    {
        for(int i=0;i<howlong;i++)
            {
                cout << "\t" << "  o..  " << "\t" << "  o..  " << "\t" << "  o..  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                
                cout << "\t\tExiting" << endl;
                Sleep(100);
                system("cls");

                cout << "\t" << "  .o.  " << "\t" << "  .o.  " << "\t" << "  .o.  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                Sleep(100);
                system("cls");

                cout << "\t" << "  ..o  " << "\t" << "  ..o  " << "\t" << "  ..o  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                Sleep(100);
                system("cls");

                
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                cout << "\t" << " .   o " << "\t" << " .   o " << "\t" << " .   o " << endl;
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                Sleep(100);
                system("cls");

                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  ..o  " << "\t" << "  ..o  " << "\t" << "  ..o  " << endl;
                Sleep(100);
                system("cls");

                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  .o.  " << "\t" << "  .o.  " << "\t" << "  .o.  " << endl;
                Sleep(100);
                system("cls");

                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                cout << "\t" << " .   . " << "\t" << " .   . " << "\t" << " .   . " << endl;
                cout << "\t" << "  o..  " << "\t" << "  o..  " << "\t" << "  o..  " << endl;      
                Sleep(100);
                system("cls");

                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                cout << "\t" << " o   . " << "\t" << " o   . " << "\t" << " o   . " << endl;
                cout << "\t" << "  ...  " << "\t" << "  ...  " << "\t" << "  ...  " << endl;
                Sleep(100);
                system("cls");   
            }
    }

int main()
{
    starload(5);
}