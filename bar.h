//
// Created by pierre on 18/07/18.
//

#ifndef CBAR_BAR_H
#define CBAR_BAR_H

typedef struct bar_t *Bar;

Bar newBar(char *text, int size, int staticBar);

void BarFree(Bar this);

void BarSetProgress(Bar this, int progress);

void BarPrint(Bar this);

void BarSetProgressAndText(Bar this, int progress, char *text);

void BarSetText(Bar this, char *text);

void BarIncrement(Bar this);

void BarSetBarChar(Bar this, char bar);

void BarSetBarArrow(Bar this, char arrow);

void BarSetBarCharAndArrow(Bar this, char bar, char arrow);

#endif //CBAR_BAR_H
