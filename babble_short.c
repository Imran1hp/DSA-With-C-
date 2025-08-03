#include <stdio.h>
void bsort(int a[],int n){

int  i,j , t;
for (i=0;i<n-1;i++){
for (j=0;j<n-i-1;j++){

printf("\ncheck %d and %d\n",a[j],a[j+1]);

if (a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

}

}

}
int main (){

    int a[30],n,i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the eelements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    printf("After sorting\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}