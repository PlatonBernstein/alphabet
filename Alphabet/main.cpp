#include <iostream>
#include <array>

using namespace std;
void t(array<string, 6> &s) {
    s[0] += "  |     ";
    s[1] += "__|__   ";
    s[2] += "  |     ";
    s[3] += "  |     ";
    s[4] += "  |     ";
    s[5] += "  \\___/ ";
}


int main()
{
    array<string, 6> screen;
    t(screen);
    t(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}