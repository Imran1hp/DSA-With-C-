#include <stdio.h>
void  f1(int n){
if (n>0){
    f1(--n);
    printf("%d\n",n);
}

}
int main  (){

int n =5;
f1(n);


    return 0;

}