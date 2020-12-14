#include <stdio.h>

void func(char *str){}

int main(){
    const char *str1 = "Hello World!";
    char *str2=str1;
    func(str2);
    return 0;
}
