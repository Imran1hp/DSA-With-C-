#include <stdio.h>

int n ;


void inertion_sort(int a[]){
 for(int i = 1 ; i<n;i++){
    int temp = a[i];
    int j = i-1;
    while( j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
 }
}







void display(int a[]){
 for(int i = 0 ; i<n ;i++){
    printf("%d\t",a[i]);
 }
}





int main(){
    int a[30];
    printf("Enter the value of n: ");
    scanf("%d" ,&n);
    for(int i = 0 ; i<n ; i++){
        printf("Enter the value of the array in the index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("the Unsorted array\n");
    display(a);
    inertion_sort(a);
    printf("\nthe sorted array \n");
    display(a);



    return 0;
}