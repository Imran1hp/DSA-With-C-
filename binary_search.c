#include <stdio.h>

void binary_search(int a[],int n,int item){

int min,max,mid,i,f=0;

min =0;
max =n-1;
while (max>=min){

mid = (min+max)/2;

if (a[mid]==item){
 f=1;
 break;
}
if (a[mid]<item){
min = mid+1;
}
if (a[mid]>item){
max = mid-1;}
    

if (f==1){
printf("Element found at position %d",mid+1);
break;
}
if (f==0){
printf("Element not found");
break;
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