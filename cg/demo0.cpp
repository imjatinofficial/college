#include <stdio.h>
#include <graphics.h>

int abs(int n) {
    return ((n>0) ? n : (n * (-1)));
}

void DDA(int x0, int y0, int x1, int y1){
    int dx = x1 - x0;
    int dy = y1 - y0;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xInc = dx / (float) steps;
    float yInc = dy / (float) steps;

    float x = x0;
    float y = y0;
    putpixel(x, y, RED);
    for (int i = 0; i < steps; i++) {
        putpixel(x, y, RED);
        x += xInc;
        y += yInc;
        delay(100);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    DDA(2, 2, 14, 16);
    return 0;
}
