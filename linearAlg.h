
/*backSub takes a matrix that has been placed in upper triangular form and
returns a 1D array from it that holds the solutions for the system of equations
This method should be called after triangularMatrixMake*/
double* backSub(double ** augMat, int *orderPtr);
/*triangularMatrixMake takes an augmented matrix and places it in upper triangular form.  It
returns nothing, as the change is made to the matrix directly because of pointers!
This method should be called before backSub()*/
void triangularMatrixMake(double ** augMat, int *orderPtr);

