#include <iostream>
#include <array>

using namespace std;
void w(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += "        ";
    s[2] += "|      |";
    s[3] += "|      |";
    s[4] += "\  /\  /";
    s[5] += " \/  \/ ";
}
void t(array<string, 6> &s) {
    s[0] += "  |     ";
    s[1] += "__|__   ";
    s[2] += "  |     ";
    s[3] += "  |     ";
    s[4] += "  |     ";
    s[5] += "  \\___/ ";
}
void q(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += "  ____  ";
    s[2] += " /    \\ ";
    s[3] += "|      |";
    s[4] += "|      |";
    s[5] += " \\____/\\";
}
void n(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += "  ____  ";
    s[2] += "|/    \\ ";
    s[3] += "|      |";
    s[4] += "|      |";
    s[5] += "|      |";
}
void k(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|  /    ";
    s[2] += "| /     ";
    s[3] += "|-      ";
    s[4] += "| \\     ";
    s[5] += "|  \\    ";
}
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
void b(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|       ";
    s[2] += "|______ ";
    s[3] += "|      \\";
    s[4] += "|      |";
    s[5] += "|\\_____/";
}
void a(array<string, 6>&s){
    s[0]+="        ";
    s[1]+="        ";
    s[2]+="   /\\   ";
    s[3]+="  /__\\  ";
    s[4]+=" /    \\ ";
    s[5]+="||    ||";
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
    k(screen);
    k(screen);
    n(screen);
    n(screen);
    q(screen);
    q(screen);
    t(screen);
    t(screen);
    w(screen);
    w(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}