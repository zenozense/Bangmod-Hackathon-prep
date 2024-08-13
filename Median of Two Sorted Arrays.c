#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int arrayresultsize = nums1Size + nums2Size;
    int c[arrayresultsize];
    for(int i=0; i<nums1Size; i++){
        c[i] = nums1[i];
    }
    for(int i=0, j=nums1Size; j < arrayresultsize && i < nums2Size; i++, j++){
        c[j] = nums2[i];
    }

    qsort(c, arrayresultsize, sizeof(int), compare);
    
    if ((arrayresultsize % 2) == 0){
        return (c[(arrayresultsize/2)-1] + c[arrayresultsize/2])/2.0;
    }else{
        return c[(arrayresultsize/2)];
    }
}