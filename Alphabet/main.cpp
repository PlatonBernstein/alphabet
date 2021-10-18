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
void s(array<string, 6> &s) {
    s[0] += "       ";
    s[1] += " ____  ";
    s[2] += "/    \\ ";
    s[3] += "\\____  ";
    s[4] += "     \\ ";
    s[5] += "\\____/ ";
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
void p(array<string, 6> &s) {
    s[0] += "  ___  ";
    s[1] += "|/   \\ ";
    s[2] += "|____/ ";
    s[3] += "|      ";
    s[4] += "|      ";
    s[5] += "|      ";
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
void m(array<string, 6> &s) {
    s[0] += "          ";
    s[1] += "          ";
    s[2] += "| /\\  /\\  ";
    s[3] += "|/  \\/  \\ ";
    s[4] += "|   |   | ";
    s[5] += "|   |   | ";
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
void j(array<string, 6> &s) {
    s[0] += "    00 ";
    s[1] += "    || ";
    s[2] += "    || ";
    s[3] += "    || ";
    s[4] += "    /| ";
    s[5] += "\\__//  ";
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
void g(array<string, 6> &s) {
    s[0] += " _____  ";
    s[1] += "/     | ";
    s[2] += "|     | ";
    s[3] += "\\_____| ";
    s[4] += "      | ";
    s[5] += "\\_____/ ";
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
    g(screen);
    h(screen);
    i(screen);
    j(screen);
    k(screen);
    l(screen);
    m(screen);
    n(screen);
    o(screen);
    p(screen);
    q(screen);
    r(screen);
    s(screen);
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