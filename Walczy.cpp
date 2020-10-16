/*


The code is Absolutely untidy ...

The code is Absolutely untidy ...

The code is Absolutely untidy ...


*/


#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>   
#include <stdlib.h>
#include <time.h>
#include <thread>

using namespace std;
void title()
{
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 500, 500, TRUE);
    while (TRUE)
    {
        SetConsoleTitleA("C");
        Sleep(100);
        SetConsoleTitleA("CR");
        Sleep(100);
        SetConsoleTitleA("CREA");
        Sleep(200);
        SetConsoleTitleA("CREAT");
        Sleep(100);
        SetConsoleTitleA("CREATED");
        Sleep(150);
        SetConsoleTitleA("CREATED B");
        Sleep(150);
        SetConsoleTitleA("CREATED BY");
        Sleep(150);
        SetConsoleTitleA("CREATED BY W");
        Sleep(150);
        SetConsoleTitleA("CREATED BY WA");
        Sleep(150);
        SetConsoleTitleA("CREATED BY WAL");
        Sleep(150);
        SetConsoleTitleA("CREATED BY WALC");
        Sleep(100);
        SetConsoleTitleA("CREATED BY WALCZ");
        Sleep(3000);
    }
}


int main() {

    thread x(title);
    int pBase;
    DWORD LocalPlayer = 0x509B74;
    //offsets
    DWORD Ammo_Address = 0x0270A820;
    int Ammo = 50000;
    DWORD healthoff = 0xF8;
    DWORD ammox2 = 0x13C;
    DWORD am = 0x69;
    DWORD  pistol = 0x150;
    DWORD  grenade = 0x1C;
    DWORD jump = 0x69;
    int myAmmo;
    int MyHealth;
    //HOOK
    HWND  hwnd = FindWindowA(NULL, "AssaultCube");
    DWORD proc;
    GetWindowThreadProcessId(hwnd, &proc);
    HANDLE Game = OpenProcess(PROCESS_ALL_ACCESS, 0, proc);

    ReadProcessMemory(Game, (LPVOID)(LocalPlayer), &pBase, sizeof(DWORD), 0);
    //write in memory
    MyHealth = 9999;
    myAmmo = 10000;
    int pistoool = 9999;
    int blackz = 0;
    int chah = 200;
    if (Ammo_Address == NULL) {
        cout << "Error In Ammo adresse !\n";
    }
    else if (grenade == NULL) {
        cout << "Error In Grenade adresse !" << endl;
    }
    else if (jump == NULL) {
        cout << "Error In jump adresse !" << endl;
    }
    else if (healthoff == NULL) {
        cout << "Error In health adresse !" << endl;
    }
    else {
        cout << "\n\t\t\thealth Hacked\n\t\t\tAmmo Hacked\n\t\t\tGrenade Hacked\n\t\t\tjump Hacked" << endl;
    }


    while (true) {
        WriteProcessMemory(Game, (LPVOID)(pBase + healthoff), &MyHealth, sizeof(DWORD), 0);
        WriteProcessMemory(Game, (LPVOID)(pBase + ammox2), &myAmmo, sizeof(DWORD), 0);
        WriteProcessMemory(Game, (LPVOID)(pBase + pistol), &pistoool, sizeof(DWORD), 0);
        WriteProcessMemory(Game, (LPVOID)(pBase + am), &blackz, sizeof(DWORD), 0);
        WriteProcessMemory(Game, (LPVOID)(pBase + grenade), &pistoool, sizeof(DWORD), 0);
        WriteProcessMemory(Game, (LPVOID)(pBase + jump), &chah, sizeof(DWORD), 0);

    }
}
