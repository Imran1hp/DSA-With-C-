#include <stdio.h>


int help(){
int var=10;
return  &var;
}
int main(){
int *ptr =help();

printf("%d",*ptr);
    return 0;
} 