#include <stdio.h>
void  f1(int n){
if (n>0){
    f1(--n);
    printf("%d\n",n);
}
}
void f2 (int n){


    if (n>0){
        f2(--n);
        printf("p1  %d\n",n);
        
        f2(--n);
        printf("p2  %d\n",n);
    }
}




int main  (){

int n =3;
f2(n);


    return 0;

}