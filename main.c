#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include "bar.h"

int main() {
    char a[] = "Bar";
    Bar b = newBar(a, 10, 0);
    BarSetProgress(b, 5);
    sleep(1);
    BarPrint(b);
    BarSetProgress(b, 10);
    sleep(1);
    BarPrint(b);

    printf("\n");

    char a2[] = "Static bar";
    Bar b2 = newBar(a2, 10, 1);
    BarSetProgress(b2, 5);
    sleep(1);
    BarPrint(b2);
    BarSetProgress(b2, 10);
    sleep(1);
    BarPrint(b2);
    return 0;
}