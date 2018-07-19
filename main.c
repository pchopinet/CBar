#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include "bar.h"

int main() {
    printf("Bar\n");
    char a[] = "jje";
    Bar b = newBar(a, 10, 0);
    BarSetProgress(b, 5);
    BarPrint(b);
    BarSetProgress(b, 10);
    BarPrint(b);

    printf("Static bar\n");
    Bar b2 = newBar(a, 10, 1);
    BarSetProgress(b2, 5);
    sleep(1);
    BarPrint(b2);
    BarSetProgress(b2, 10);
    sleep(1);
    BarPrint(b2);
    return 0;
}