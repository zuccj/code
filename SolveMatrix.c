#include <stdlib.h>

double * SolveMatrix(double ** augMat, int  order)
{
    double *newRow = NULL;
    triangularMatrixMake(**augMat, order);
    newRow = backSub(**augMat, order);

    return newRow;
}
