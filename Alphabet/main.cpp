#include <iostream>
#include <array>

using namespace std;
void e(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += " ______ ";
    s[2] += "/      \\";
    s[3] += "|______/";
    s[4] += "\\       ";
    s[5] += " \\_____ ";
}


int main()
{
    array<string, 6> screen;
    e(screen);
    e(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}