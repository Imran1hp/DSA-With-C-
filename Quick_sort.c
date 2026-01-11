#include <stdio.h>

int n;
int partition(int a [],int lb , int ub)
{
int povit = a[lb];
int start = lb;
int end = ub;
while(start <end){
    while(a[start]<= povit){
        start++;
    }
    while(a[end]>povit){
        end--;
    }
    if(start<end){
    int temp = a[start];
    a[start]=a[end];
    a[end] = temp;
    }
}

int temp = a[lb];
a[lb]=a[end];
a[end]=temp;

return end;
}

void quick_sort(int a[], int lb , int ub){

    if(lb < ub){
       int loc ;
       loc = partition( a , lb , ub);
        quick_sort(a ,lb , loc -1 );
        quick_sort(a , loc+1 ,ub);
    }

    
}











void display(int a [])
{
 for(int i = 0 ; i<n ; i++){
    printf("%d \t",a[i]);
 }
}




int main(){
int a[20];

printf("Enter the value of n: ");
scanf("%d",&n);
int lb = 0;
int ub = n-1;
for(int i = 0 ;i<n ; i++){
    printf("Enter the %dth element: ", i);
    scanf("%d", &a[i]);
}
printf("\n Unsorted array \n");
display(a);
printf("\n Sorted array \n");
quick_sort(a , lb , ub);
display(a);



    return 0;

}