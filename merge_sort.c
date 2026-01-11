#include <stdio.h>
int n ;


void merge(int a[], int lb, int mid ,int ub)
{
 int b[100];   
 int i = lb ;
 int j = mid +1;
 int k = lb;
 
 while( i <= mid && j <= ub){

    if( a[i]<a[j]){
        b[k] = a[i];
        i++;
        k++;
    }
    else{
        b[k] = a[j];
        j++;
        k++;
    }

 }
 if(i>mid){
    while(j <=ub){
        b[k]=a[j];
        j++;
        k++;
    }
 }
 else{
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
 }
for (int i = lb; i <= ub; i++)
    a[i] = b[i];

}

void merge_sort(int a[],int lb ,int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        merge_sort(a , lb ,mid);
        merge_sort(a , mid+1 , ub);
        merge(a,lb ,mid ,ub);

    }
}



void display(int a[]){

    for(int i = 0 ; i<n ;i++){
        printf("%d\t",a[i]);
    }

}


int main(){
int a[60];
printf("Enter the value of n:");
scanf("%d",&n);
int lb = 0;
int ub = n-1;
for(int i = 0; i<n;i++){
    printf("Enter the %dth value: " ,i);
    scanf("%d",&a[i]);
}
printf("\nUnsorted array\n");
display(a);
printf("\nSorted array \n");
merge_sort(a,lb ,ub);
display(a);



    return 0;
}