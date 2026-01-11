#include <stdio.h>
int n ;

void selection_sort(int a[]){
  for(int i = 0 ; i<n ;i++){
    int min = i;
    int j = i+1;
    for(j ; j<n ; j++){
        if(a[j]<a[min]){
            min=j;
        }
        
    }
    if(min!= i){
        int temp ;
        temp = a[i];
        a[i] =a[min];
        a[min] = temp;
        

    }
  }




}








void display(int a[]){
    for(int i = 0 ; i<n ;i++){
        printf("%d \t",a[i]);
    }
}

int main(){
int a[20];

printf("Enter the value of n: ");
scanf("%d",&n);
for(int i = 0 ;i<n ; i++){
    printf("Enter the %dth element: ", i);
    scanf("%d", &a[i]);
}
printf("\n Unsorted array \n");
display(a);
printf("\n Sorted array \n");
selection_sort(a);
display(a);



    return 0;

}