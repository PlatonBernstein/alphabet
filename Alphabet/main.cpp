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


int main()
{
    array<string, 6> screen;
    h(screen);
    h(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}
