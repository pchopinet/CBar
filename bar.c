//
// Created by pierre on 18/07/18.
//
#include <stdio.h>
#include <stdlib.h>
#include "bar.h"

struct bar_t {
    int progress;
    int size;
    char *text;
    char barChar;
    char barArrow;
    int staticBar;
};

Bar newBar(char *text, int size, int staticBar) {
    Bar b = malloc(sizeof(struct bar_t));
    b->text = text;
    b->progress = 0;
    b->size = size;
    b->barArrow = '>';
    b->barChar = '=';
    b->staticBar = staticBar;

    BarPrint(b);
    return b;
}

void BarPrint(Bar this) {
    int i;
    if (this->staticBar) {
        printf("\r");
    }
    printf("%s : \t[", this->text);

    for (i = 1; i < this->progress; i++) {
        printf("%c", this->barChar);
    }
    if (this->progress != this->size) {
        printf("%c", this->barArrow);
        for (i; i < this->size; i++) {
            printf(" ");
        }
    } else {
        printf("%c", this->barChar);
    }
    printf("]");
    if (!this->staticBar) {
        printf("\n");
    }
    fflush(stdout);
}

void BarFree(Bar this) {
    free(this);
}

void BarSetProgress(Bar this, int progress) {
    this->progress = progress;
}

void BarSetProgressAndText(Bar this, int progress, char *text) {
    this->progress = progress;
    this->text = text;
}

void BarSetText(Bar this, char *text) {
    this->text = text;
}

void BarIncrement(Bar this) {
    this->progress++;
}

void BarSetBarChar(Bar this, char bar) {
    this->barChar = bar;
}

void BarSetBarArrow(Bar this, char arrow) {
    this->barArrow = arrow;
}

void BarSetBarCharAndArrow(Bar this, char bar, char arrow) {
    this->barArrow = arrow;
    this->barChar = bar;
}

