#include <iostream>
#include <array>

using namespace std;
void z(array<string, 6> &s) {
    s[0] += "_____ ";
    s[1] += "    / ";
    s[2] += "   /  ";
    s[3] += "  /   ";
    s[4] += " /    ";
    s[5] += "/____ ";
}
void y(array<string, 6> &s){
    s[0]+="\\\\   // ";
    s[1]+=" \\\\ //  ";
    s[2]+="  |||   ";
    s[3]+="  //    ";
    s[4]+=" //     ";
    s[5]+="//      ";
}
void x(array<string, 6>& s) {
    s[0] += "\\    /  ";
    s[1] += " \\  /   ";
    s[2] += "  \\/    ";
    s[3] += "  /\\    ";
    s[4] += " /  \\   ";
    s[5] += "/    \\  ";
}
void w(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += "        ";
    s[2] += "|      |";
    s[3] += "|      |";
    s[4] += "\\  /\\  /";
    s[5] += " \\/  \\/ ";
}
void v(array<string, 6> &s) {
    s[0] += "         ";
    s[1] += "         ";
    s[2] += "\\      / ";
    s[3] += " \\    /  ";
    s[4] += "  \\  /   ";
    s[5] += "   \\/    ";
}
void u(array<string, 6>& s) {
    s[0] += "        ";
    s[1] += "|     | ";
    s[2] += "|     | ";
    s[3] += "|     | ";
    s[4] += "|     | ";
    s[5] += " \\___/| ";
}
void t(array<string, 6> &s) {
    s[0] += "  |     ";
    s[1] += "__|__   ";
    s[2] += "  |     ";
    s[3] += "  |     ";
    s[4] += "  |     ";
    s[5] += "  \\___/ ";
}
void r(array<string, 6>& s) {
    s[0] += "  ____";
    s[1] += "|/    ";
    s[2] += "|     ";
    s[3] += "|     ";
    s[4] += "|     ";
    s[5] += "|     ";
}
void q(array<string, 6> &s) {
    s[0] += "         ";
    s[1] += "  ____   ";
    s[2] += " /    \\  ";
    s[3] += "|      | ";
    s[4] += "|      | ";
    s[5] += " \\____/\\ ";
}
void o(array<string, 6> &s) {
    s[0] += "         ";
    s[1] += "  ____   ";
    s[2] += " /    \\  ";
    s[3] += "|      | ";
    s[4] += "|      | ";
    s[5] += " \\____/  ";
}
void n(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += "  ____  ";
    s[2] += "|/    \\ ";
    s[3] += "|      |";
    s[4] += "|      |";
    s[5] += "|      |";
}
void l(array<string, 6>& s) {
    s[0] += "|| ";
    s[1] += "|| ";
    s[2] += "|| ";
    s[3] += "|| ";
    s[4] += "|| ";
    s[5] += "|| ";
}
void k(array<string, 6> &s) {
    s[0] += "|     ";
    s[1] += "|  /  ";
    s[2] += "| /   ";
    s[3] += "|-    ";
    s[4] += "| \\   ";
    s[5] += "|  \\  ";
}
void i(array<string, 6>& s) {
    s[0] += "  OO  ";
    s[1] += "  ||  ";
    s[2] += "  ||  ";
    s[3] += "  ||  ";
    s[4] += "  ||  ";
    s[5] += "  ||  ";
}
void h(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|       ";
    s[2] += "|______ ";
    s[3] += "|      \\";
    s[4] += "|      |";
    s[5] += "|      |";
}
void f(array<string, 6>& s) {
    s[0] += "       ";
    s[1] += "   ___ ";
    s[2] += "  |    ";
    s[3] += "__|__  ";
    s[4] += "  |    ";
    s[5] += "  |    ";
}
void e(array<string, 6> &s) {
    s[0] += "        ";
    s[1] += " ______ ";
    s[2] += "/      \\";
    s[3] += "|______/";
    s[4] += "\\       ";
    s[5] += " \\_____ ";
}
void c(array<string, 6> &s) {
    s[0] += "       ";
    s[1] += " _____ ";
    s[2] += "/      ";
    s[3] += "|      ";
    s[4] += "|      ";
    s[5] += "\\_____ ";
}
void b(array<string, 6> &s) {
    s[0] += "|       ";
    s[1] += "|       ";
    s[2] += "|______ ";
    s[3] += "|      \\";
    s[4] += "|      |";
    s[5] += "|\\_____/";
}
void a(array<string, 6> &s){
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
    b(screen);
    c(screen);
    e(screen);
    f(screen);
    h(screen);
    i(screen);
    k(screen);
    l(screen);
    n(screen);
    o(screen);
    q(screen);
    r(screen);
    t(screen);
    u(screen);
    v(screen);
    w(screen);
    x(screen);
	  y(screen);
    z(screen);
    for(int i = 0; i < 6; i++)
        cout << screen[i] << endl;
    return 0;
}