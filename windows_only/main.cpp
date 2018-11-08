// Working on it.
// MorseCodeTranslator
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include "Login.h"
#include "Translator.h"
using namespace std;

int main()
{
//	Translator obj;

//	obj.interface();

//	Login login_obj;

    string password = "";
    while (!GetAsyncKeyState(VK_RETURN) & 1)
    {
        for (int i = 0x30; i < 0x5A; i++)
        {
            if (GetAsyncKeyState(i) & 1)
            {
                if (i >= 0x41 && i <= 0x5A && ((GetKeyState(VK_CAPITAL) & 1) == 0 || GetAsyncKeyState(VK_SHIFT) & 1))
                    password += ((char)i + 32);
                else
                    password += (char)i;

                cout << "*";
                Sleep(50);
            }
            else if (GetAsyncKeyState(VK_BACK) & 1)
            {
                password.erase(password.size() - 1);
                system("cls");
                for (int i = 0; i < password.size(); i++)
                {
                    cout << '*';
                }
                Sleep(50);
            }
        }
    }
    cout << password;
    Sleep(10000);



	return 0;
}
/*
#include <conio.h>

int main()
{
    char s[10] = { 0 };
    int i;
    for (i = 0; i < 10;i++) {
        s[i] = _getch(); _putch('*');
        if (s[i] == 13) break;
    };
    printf("\nYour pass is %s", s);
    getchar();
    return 0;
}
*/
