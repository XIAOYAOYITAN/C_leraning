#include <stdio.h>
#include <string.h>
//��������
int gcd(int a, int b);  //Ҳ����д�� int gcd(int, int);
int code1(){
    printf("The greatest common divisor is %d\n", gcd(100, 60));
    return 0;
}
//��������
int gcd(int a, int b){
    //��a<b����ô������������ֵ
    if(a < b){
        int temp1 = a;  //�鼶����
        a = b;
        b = temp1;
    }
   
    //�����Լ��
    while(b!=0){
        int temp2 = b;  //�鼶����
        b = a % b;
        a = temp2;
    }
   
    return a;
}

//��n�Ľ׳�
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return factorial(n - 1) * n;  // �ݹ����
    }
}
int code2() {
    int a;
    printf("Input a number: ");
    scanf("%d", &a);
    printf("Factorial(%d) = %ld\n", a, factorial(a));
    return 0;
}

//��ת�����ã��ַ���
char *reverse(char *str) {
    int len = strlen(str);
    if (len > 1) {
        char ctemp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = '\0';  //���һ���ַ����´εݹ�ʱ���ٴ���
        reverse(str + 1);  //�ݹ����
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