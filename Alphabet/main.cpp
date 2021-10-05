#include <iostream>
#include <array>

using namespace std;
void a(array<string, 6>&s){
    s[0]+="         ";
    s[1]+="         ";
    s[2]+="   /\\   ";
    s[3]+="  /__\\  ";
    s[4]+=" /    \\ ";
    s[5]+="||    ||";
}
void b(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|       ";
    s[2] += "|______ ";
    s[3] += "|      \\";
    s[4] += "|      |";
    s[5] += "|\\_____/";
}


int main()
{
    array<string, 6> screen;
    a(screen);
    a(screen);
    b(screen);
    b(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}
