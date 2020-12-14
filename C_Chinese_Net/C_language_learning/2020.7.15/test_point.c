#include <stdio.h>
#include <string.h>
int code1(){
    int a = 100;
    char str[20] = "c.biancheng.net";
    printf("%#X, %#X\n", &a, str);
    printf("%p, %p\n", &a, str);
    return 0;
}

int code2(){
    int a = 100, b = 999, temp;
    int *pa = &a, *pb = &b;
    printf("a=%d, b=%d\n", a, b);
    /*****��ʼ����*****/
    temp = *pa;  //��a��ֵ�ȱ�������
    *pa = *pb;  //��b��ֵ����a
    *pb = temp;  //�ٽ�����������a��ֵ����b
    /*****��������*****/
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
int code3(){
    int    a = 10,   *pa = &a, *paa = &a;
    double b = 99.9, *pb = &b;
    char   c = '@',  *pc = &c;
    //�����ֵ
    printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //�ӷ�����
    pa++; pb++; pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //��������
    pa -= 2; pb -= 2; pc -= 2;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //�Ƚ�����
    if(pa == paa){
        printf("%d\n", *paa);
    }else{
        printf("%d\n", *pa);
    }
    return 0;
}

//�ַ�����
int code4(){
    char str[] = "http://c.biancheng.net";
    char *pstr = str;
    int len = strlen(str), i;
    //ʹ��*(pstr+i)
    for(i=0; i<len; i++){
        printf("%c", *(pstr+i));
    }
    printf("\n");
    //ʹ��pstr[i]
    for(i=0; i<len; i++){
        printf("%c", pstr[i]);
    }
    printf("\n");
    //ʹ��*(str+i)
    for(i=0; i<len; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    return 0;
}

//ָ��ָ���ַ���
int code5(){
    char *str = "http://c.biancheng.net";
    int len = strlen(str), i;
   
    //ֱ������ַ���
    printf("%s\n", str);
    //ʹ��*(str+i)
    for(i=0; i<len; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    //ʹ��str[i]
    for(i=0; i<len; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

int code6(){
    char str[20] = "c.biancheng.net";
   
    char *s1 = str;
    char *s2 = str+2;
   
    char c1 = str[4];
    char c2 = *str;
    char c3 = *(str+4);
    char c4 = *str+2;
    char c5 = (str+1)[5];
   
    int num1 = *str+2;
    // long num2 = (long)str;
    // long num3 = (long)(str+2);
    printf("  s1 = %s\n", s1);
    printf("  s2 = %s\n", s2);
    printf("  c1 = %c\n", c1);
    printf("  c2 = %c\n", c2);
    printf("  c3 = %c\n", c3);
    printf("  c4 = %c\n", c4);
    printf("  c5 = %c\n", c5);
   
    printf("num1 = %d\n", num1);
    // printf("num2 = %ld\n", num2);
    // printf("num3 = %ld\n", num3);
    return 0;
}

int code7(){
    char str[20] = {0};
    int i;
    for(i=0; i<10; i++){
        *(str+i) = 97+i;  // 97Ϊ�ַ�a��ASCII��ֵ
    }
   
    printf("%s\n", str);
    printf("%s\n", str+2);
    printf("%c\n", str[2]);
    printf("%c\n", (str+2)[2]);
   
    return 0;
}

// int max(int *intArr, int len){
//     int i, maxValue = intArr[0];  //�����0��Ԫ�������ֵ
//     for(i=1; i<len; i++){
//         if(maxValue < intArr[i]){
//             maxValue = intArr[i];
//         }
//     }
// }
// int code8(){
//     int nums[6],i;
//     int len=sizeof(nums)/sizeof(int);
//     for ( i = 0; i < len; i++)
//     {
//         scanf("%d",nums+i);
//     }
//     printf("Max value id %d!\n",max(nums,len));
    
// }

int code9(){
    char *str=NULL;
    gets(str);
    printf("%s\n",str);
    return 0;
}

//�����������нϴ��һ��
int max(int a, int b){
    return a>b ? a : b;
}
int code10(){
    int x, y, maxval;
    //���庯��ָ��
    int (*pmax)(int, int) = max;  //Ҳ����д��int (*pmax)(int a, int b)
    printf("Input two numbers:");
    scanf("%d %d", &x, &y);
    maxval = (*pmax)(x, y);
    printf("Max value: %d\n", maxval);
    return 0;
}


char *str1 = "c.biancheng.net";  //�ַ����ڳ�������str1��ȫ��������
int n;  //ȫ��������
char* func(){
    char *str = "C����������";  //�ַ����ڳ�������str��ջ��
    return str;
}
int code11(){
    int a;  //ջ��
    char *str2 = "01234";  //�ַ����ڳ�������str2��ջ��
    char  arr[20] = "56789";  //�ַ�����arr����ջ��
    char *pstr = func();  //ջ��
    int b;  //ջ��
    printf("str1: %#X\npstr: %#X\nstr2: %#X\n", str1, pstr, str2);
    puts("--------------");
    printf("&str1: %#X\n   &n: %#X\n", &str1, &n);
    puts("--------------");
    printf("  &a: %#X\n arr: %#X\n  &b: %#X\n", &a, arr, &b);
    puts("--------------");
    printf("n: %d\na :%d\nb: %d\n", n, a, b);
    puts("--------------");
    printf("%s\n", pstr);
    return 0;
}

int main()
{
    code11();
    {};
    return 0;
}

