/*Josh Zuccollo
Project 3
CS 229
Fowler*/

#include <stdio.h>
#include <stdlib.h>
#include "linearAlg.h"
#include "Menu.h"
#include "CreateMatrix.h"
#include "PrintMatrix.h"
#include "SolveMatrix.h"
#include <math.h>


double **CreateMatrix(int *);
int Menu(int *, int *, int *);
void PrintMatrix(double**, int*, double*);
double* SolveMatrix(double**, int*);

int main()
{
    int order = 0;
    int* orderPtr = &order;
    int solSize = 0;
    int* solSizePtr = &solSize;
    int count = 0;
    int* countPtr = &count;
    Menu(orderPtr, solSizePtr, countPtr);

    return 0;
}
