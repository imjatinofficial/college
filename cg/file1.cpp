#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

void flood8(int x, int y, int new_col, int old_col) {
    if (getpixel(x,y) == old_col){
        putpixel(x, y, new_col);
        flood8(x + 1, y, old_col, new_col);
        flood8(x - 1, y, old_col, new_col);
        flood8(x, y + 1, old_col, new_col);
        flood8(x, y - 1, old_col, new_col);
        flood8(x + 1, y + 1, old_col, new_col);
        flood8(x - 1, y + 1, old_col, new_col);
        flood8(x + 1, y - 1, old_col, new_col);
        flood8(x - 1, y - 1, old_col, new_col);
    }
}

int main() {
    int gd = DETECT, gm;
    int top, left, bottom, right;
    int x = 51, y = 51;
    int newcolor = 15, oldcolor = 0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    top = left = 50;
    bottom = right = 100;
    rectangle(left, top, right, bottom);

    flood8(x, y, newcolor, oldcolor);
    getch();
    return 0;
}