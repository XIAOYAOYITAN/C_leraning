/*�?16进制格式输出变量在内存中的地址*/
#include <stdio.h>
int code1(void)
{
    int a='F';
    int b=12;
    int c=452;
    /* %p�?16进制形式输出地址*/
    printf("&a=%p, &b=%p, &c=%p\n", &a, &b, &c);
   
    return 0;
}

/*scanf输入多个数�?*/
int code2()
{
    int a, b, c;
    scanf("%d %d", &a, &b);//scanf对于空格的�?�求不严�?
    printf("a+b=%d\n", a+b);
    scanf("%d   %d", &a, &b);
    printf("a+b=%d\n", a+b);
    scanf("%d, %d, %d", &a, &b, &c);
    printf("a+b+c=%d\n", a+b+c);
   
    scanf("%d is bigger than %d", &a, &b);
    printf("a-b=%d\n", a-b);
    return 0;
}

/*演示读取失败*/
int code3()
{
    int a = 1, b = 2, c = 3, d = 4;  //�?改�?�：给变量赋予不同的初�?��?
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b);
    scanf("%d %d", &c, &d);
    printf("c=%d, d=%d\n", c, d);
   
    return 0;
}
/*������һ������Ȥ��bug�����뵽url֮������ֱ�����*/
int code4 ()
{
    char letter;
    int age;
    char url[30];
    float price;

    scanf("%c",&letter);
    // scanf("%c",&age);
    scanf("%d",&age);//���Է��֣��ֿ���scanf����������������ͬ���������ͣ��������ֵ�ʧ��
    scanf("%s",url);
    scanf("%f",&price);

    printf("%c��һ����ĸ\n",letter);
    printf("���%d,��ַ%s,�۸�%f\n",age,url,price);//%g�Ǹ������ĵ;�������Ӧ���

    return 0;
}

#include <conio.h>
//getche����
int code5()
{
    char c = getche();
    printf("c: %c\n", c);
    return 0;
}

//getch,û�л��Եĺ�������ֹ��͵��
int code6()
{
    char c = getch();
    printf("c: %c\n", c);
    return 0;
}

//gets() ��Ϊ�ո�Ҳ���ַ�����һ���֣�ֻ�������س���ʱ����Ϊ�ַ���������������ԣ����������˶��ٸ��ո�ֻҪ�����»س������� gets() ��˵����һ���������ַ���
int code7()
{
    char author[30],lang[30],url[30];
    gets(author);
    printf("author:%s\n",author);
    gets(lang);
    printf("lang:%s\n",lang);
    gets(url);
    printf("url:%s\n",url);

    return 0;
}

int code8()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);

    return 0;
}

/*����100 www.xyz�ͻᷢ�ֻ�����ƥ�䲻��b��ʱ��ֱ�Ӱ��ַ�������str*/
int code9()
{
    int a,b=999;
    char str[30];
    printf("b=%d\n",b);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%s",str);

    printf("a=%d,b=%d,str=%s\n",a,b,str);

}

int code10()
{
    int a = 1, b = 2;
    scanf("a=%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

int code11()
{    
    int n;
    char str[30];
    scanf("%*d %d", &n);
    scanf("%*[a-z]");
    scanf("%[^\n]", str);
    printf("n=%d, str=%s\n", n, str);
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define PWDLEN 20
void getpwd(char *pwd, int pwdlen);
int code12(){
    char pwd[PWDLEN+1];
    printf("Input password: ");
    getpwd(pwd, PWDLEN);
    printf("The password is: %s\n", pwd);
    return 0;
}
/**
* ��ȡ�û����������
* @param  pwd     char*  ����������ڴ���׵�ַ
* @param  pwdlen  int    �������󳤶�
**/
void getpwd(char *pwd, int pwdlen){
    char ch = 0;
    int i = 0;
    while(i<pwdlen){
        ch = getch();
        if(ch == '\r'){  //�س���������
            printf("\n");
            break;
        }
       
        if(ch=='\b' && i>0){  //����ɾ����
            i--;//ָ��ǰһ���ַ����Զ������ʱ��ͻḲ��
            printf("\b \b");//�˸�����ո����˸񣬾��൱������ʾ����ɾ��һ���ַ�
        }else if(isprint(ch)){  //����ɴ�ӡ�ַ�
            pwd[i] = ch;
            printf("*");
            i++;
        }
    }
    pwd[i] = 0;//���ַ����������0����Ϊ�ַ���������
}

/*����ʽ���̼�����ֻ�е����̰��³���ż���ִ��*/
int code13(){
    char ch;
    int i = 0;
    //ѭ��������ֱ����Esc���˳�
    while(ch = getch()){
        if(ch == 27){
            break;
        }else{
            printf("Number: %d\n", ++i);
        }
    }
    return 0;
}

/*������ʽ���̼�����ÿ��һ��printfһ��*/
int code14(){
    char ch;
    int i = 0;
    //ѭ��������ֱ����Esc���˳�
    while(1){
        if(kbhit()){  //��⻺�������Ƿ�������
            ch = getch();  //���������е��������ַ�����ʽ����
            if(ch == 27){
                break;
            }
        }
        printf("Number: %d\n", ++i);
        Sleep(1000);  //��ͣ1��
    }
    return 0;
}

int code15(){
    while(1){  //��ѭ��
        malloc(1024);  //����1024���ֽڵ��ڴ�
    }
    return 0;
}

int main()
{
    code15();
    return 0;
}