double* backSub(double ** augMat, int order){
    double * newRow = malloc(order * sizeof(double));
    newRow[order - 1] = augMat[order - 1][order]/augMat[order-1][order-1];

    int i, j;
    for(i = order - 2; i >= 0; i--){
        int sum = 0;
        for(j = i+1; j <= order-1; j++){
            sum = sum + augMat[i][j] * newRow[j];
        }
        newRow[i] = (augMat[i][order] - sum)/augMat[i][i];
    }

    return newRow;
}

void triangularMatrixMake(double ** augMat, int order){
    int i, j, k;
    double c = 0;
    for(j = 0; j < order; j++){
        for(i = 0; i < order; i++){
            if(i > j){
                c = augMat[i][j]/augMat[j][j];
                for(k = 0; k < order+1; k++){
                   augMat[i][k] = augMat[i][k] - c * augMat[j][k];
                }
            }
        }
    }
}
