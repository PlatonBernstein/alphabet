#include <iostream>
#include <array>

using namespace std;
void h(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|       ";
    s[2] += "|______ ";
    s[3] += "|      \\";
    s[4] += "|      |";
    s[5] += "|      |";
}
void e(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += " ______ ";
    s[2] += "/      \\";
    s[3] += "|______/";
    s[4] += "\\       ";
    s[5] += " \\_____ ";
}
void a(array<string, 6>&s){
    s[0]+="        ";
    s[1]+="        ";
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
    e(screen);
    e(screen);
    h(screen);
    h(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}