#include <stdio.h>
int n ;
void bsort(int a[]){

int i , j;


for (i= 0 ;i<n-1 ; i++ ){
  int f = 0;

  for(j = 0 ; j<n-1-i;j++){
     

    if(a[j]>a[j+1]){
        int temp ;
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        f=1;

    }

}
   if(f==0)
    break;
   
}

  

}

void display(int a[]){

for(int i = 0 ; i<n ; i++)
{
    printf("%d \t" , a[i]);
}


}




int main(){

 int a[100];
 printf("Enter the value of n in: ");
 scanf("%d",&n);
 for(int i = 0 ; i<n ; i++){
  printf("Enter the value of the array in index %d : ",i);
  scanf("%d",&a[i]);
 }

 bsort(a);
 display(a);

    return 0 ;

}


