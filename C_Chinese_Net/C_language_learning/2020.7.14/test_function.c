#include <stdio.h>
#include <string.h>
//函数声明
int gcd(int a, int b);  //也可以写作 int gcd(int, int);
int code1(){
    printf("The greatest common divisor is %d\n", gcd(100, 60));
    return 0;
}
//函数定义
int gcd(int a, int b){
    //若a<b，那么交换两变量的值
    if(a < b){
        int temp1 = a;  //块级变量
        a = b;
        b = temp1;
    }
   
    //求最大公约数
    while(b!=0){
        int temp2 = b;  //块级变量
        b = a % b;
        a = temp2;
    }
   
    return a;
}

//求n的阶乘
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return factorial(n - 1) * n;  // 递归调用
    }
}
int code2() {
    int a;
    printf("Input a number: ");
    scanf("%d", &a);
    printf("Factorial(%d) = %ld\n", a, factorial(a));
    return 0;
}

//反转（逆置）字符串
char *reverse(char *str) {
    int len = strlen(str);
    if (len > 1) {
        char ctemp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = '\0';  //最后一个字符在下次递归时不再处理
        reverse(str + 1);  //递归调用
        str[len - 1] = ctemp;
    }
    return str;
}
int code3() {
    char str[20] = "123456789";
    printf("%s\n", reverse(str));
    return 0;
}

int main(){
    code3();
    return 0;
}