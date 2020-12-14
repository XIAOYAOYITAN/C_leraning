#include <stdio.h>
#include <stdlib.h>

int a =1,b=235;
int main(){
    int *pa = &a;
    printf("pa=%#X ,&b=%#X\n",pa,&b); 
    system("pause");
    return 0;
}