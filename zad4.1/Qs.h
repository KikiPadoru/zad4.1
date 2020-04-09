#pragma once
int comp1(const void *a,const void * b) {
    Znak A = *((Znak*)a);
    Znak B = *((Znak*)b);
    if (A > B)return(1);
    if (A == B)return(0);
    return(-1);
}