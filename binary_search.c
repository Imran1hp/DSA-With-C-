#include <stdio.h>

int binary_search(int a[],int n,int item){

int min,max,mid,i;

min =0;
max =n-1;
while (max>=min){

mid = (min+max)/2;
for (i=0;i<n;i++){
if (a[mid]==item){
return mid;
}
if (a[mid]<item){
min = mid+1;
}
if (a[mid]>item){
max = mid-1;}
    
}



}





}


int main(){

int a[10],i,n,item;

printf("Enter the number of elements: ");
scanf("%d",&n);

printf("Enter the elements: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("Enter the element to be searched: ");
scanf("%d",&item);

binary_search(a,n,item);

return 0;
}