#include<stdio.h>

#define max 50

void insertion_sort(int [],int);

int main(){
    int a[max],i,j,n;

    printf("Enter how many elements you want to insert: ");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Before soriting Array is : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

    insertion_sort(a,n);

    printf("\nAfter soriting Array is : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}

void insertion_sort(int a[],int n){
    int i,j, t = 0;
    for(i=1;i<n;i++){
        t = a[i];
        j = i-1;
        while(j >= 0 && t < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}