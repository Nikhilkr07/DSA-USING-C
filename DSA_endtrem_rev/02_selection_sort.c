#include<stdio.h>

void S_sort(int [],int);

int main(){
    int i,n;
    printf("Enter how many elements you want to insert: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting array is : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

    S_sort(a,n);

    printf("\nAfter sorting array becomes : ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}

void S_sort(int a[],int n){
    int i,j,pos=0,min=0;

   for(i=0;i<n-1;i++){
    min = a[i];
    pos = i;
    for(j = i+1; j<n; j++){
        if(min > a[j]){
            min = a[j];
            pos = j;
        }
    }
    if(pos != i){
        a[pos] = a[i];
        a[i] = min;
    }
   }
}