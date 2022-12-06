#include<stdio.h>
#define SIZE 6

// insertion sort
void insertionsort(int a[]) {
    for(int j=1;j<SIZE;j++) {
        int key=a[j];
        // Insert A[j] into the sorted seqence A[0..j-1]
        int i=j-1;
        while((i>=0) && (a[i]>key)) {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}

// main function
int main() {
    int a[SIZE]={5,2,4,6,1,3};
    // print unsorted array
    printf("\nUnsorted Array:");
    for(int i=0;i<SIZE;i++)
        printf("\t%d",a[i]);
    printf("\n");
    // sort
    insertionsort(a);
    // print sorted array
    printf("\nSorted Array:");
    for(int i=0;i<SIZE;i++)
        printf("\t%d",a[i]);
    printf("\n");
    return 0;
}
