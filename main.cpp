#include <iostream>
#include <conio.h>
#include <graphics.h>

void toh(int, char, char, char);

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(70, 100, 70, 200);
    line(30, 200, 110, 200);

    line(200, 100, 200, 200);
    line(160, 200, 240, 200);

    line(330, 100, 330, 200);
    line(290, 200, 370, 200);
    // int n;
    // std::cout<<"Enter number of pegs: ";
    // std::cin>>n;
    // toh(n, 's', 'm' ,'d');

    getch();
    closegraph();
    return 0;
}

void toh(int n, char s, char m, char d){
    if(n > 0){
        toh((n-1), s, d, m);
        std::cout<<"Move distance from "<<s<<" to "<<m<<"\n";
        toh((n-1), m, s, d);
    }
}