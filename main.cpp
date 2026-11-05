#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
const int WIDTH = 30;
const int HEIGHT = 15;
void draw()
{
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    for (int y = 0; y < HEIGHT; y++)
    {
        cout << "#";
        for (int x = 0; x < WIDTH; x++)
        {
            cout << " ";
        }
        cout << "#" << endl;
    }
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;
}
int main()
{
    draw();
    return 0;
}
