/*浠?16杩涘埗鏍煎紡杈撳嚭鍙橀噺鍦ㄥ唴瀛樹腑鐨勫湴鍧�*/
#include <stdio.h>
int code1(void)
{
    int a='F';
    int b=12;
    int c=452;
    /* %p浠?16杩涘埗褰㈠紡杈撳嚭鍦板潃*/
    printf("&a=%p, &b=%p, &c=%p\n", &a, &b, &c);
   
    return 0;
}

/*scanf杈撳叆澶氫釜鏁板�?*/
int code2()
{
    int a, b, c;
    scanf("%d %d", &a, &b);//scanf瀵逛簬绌烘牸鐨勮?佹眰涓嶄弗鏍?
    printf("a+b=%d\n", a+b);
    scanf("%d   %d", &a, &b);
    printf("a+b=%d\n", a+b);
    scanf("%d, %d, %d", &a, &b, &c);
    printf("a+b+c=%d\n", a+b+c);
   
    scanf("%d is bigger than %d", &a, &b);
    printf("a-b=%d\n", a-b);
    return 0;
}

/*婕旂ず璇诲彇澶辫触*/
int code3()
{
    int a = 1, b = 2, c = 3, d = 4;  //淇?鏀瑰?勶細缁欏彉閲忚祴浜堜笉鍚岀殑鍒濆?嬪�?
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b);
    scanf("%d %d", &c, &d);
    printf("c=%d, d=%d\n", c, d);
   
    return 0;
}
/*这里有一个很有趣的bug，输入到url之后后面会直接输出*/
int code4 ()
{
    char letter;
    int age;
    char url[30];
    float price;

    scanf("%c",&letter);
    // scanf("%c",&age);
    scanf("%d",&age);//可以发现，分开的scanf不能连续的输入相同的数据类型，会产生奇怪的失败
    scanf("%s",url);
    scanf("%f",&price);

    printf("%c是一个字母\n",letter);
    printf("年份%d,网址%s,价格%f\n",age,url,price);//%g是浮点数的低精度自适应输出

    return 0;
}

#include <conio.h>
//getche函数
int code5()
{
    char c = getche();
    printf("c: %c\n", c);
    return 0;
}

//getch,没有回显的函数，防止被偷窥
int code6()
{
    char c = getch();
    printf("c: %c\n", c);
    return 0;
}

//gets() 认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束，所以，不管输入了多少个空格，只要不按下回车键，对 gets() 来说就是一个完整的字符串
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

/*输入100 www.xyz就会发现缓存区匹配不到b的时候直接把字符串给了str*/
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
* 获取用户输入的密码
* @param  pwd     char*  保存密码的内存的首地址
* @param  pwdlen  int    密码的最大长度
**/
void getpwd(char *pwd, int pwdlen){
    char ch = 0;
    int i = 0;
    while(i<pwdlen){
        ch = getch();
        if(ch == '\r'){  //回车结束输入
            printf("\n");
            break;
        }
       
        if(ch=='\b' && i>0){  //按下删除键
            i--;//指向前一个字符，自动输入的时候就会覆盖
            printf("\b \b");//退格输出空格再退格，就相当于在显示屏上删除一个字符
        }else if(isprint(ch)){  //输入可打印字符
            pwd[i] = ch;
            printf("*");
            i++;
        }
    }
    pwd[i] = 0;//在字符数组中添加0，作为字符串结束符
}

/*阻塞式键盘监听，只有当键盘按下程序才继续执行*/
int code13(){
    char ch;
    int i = 0;
    //循环监听，直到按Esc键退出
    while(ch = getch()){
        if(ch == 27){
            break;
        }else{
            printf("Number: %d\n", ++i);
        }
    }
    return 0;
}

/*非阻塞式键盘监听，每隔一秒printf一下*/
int code14(){
    char ch;
    int i = 0;
    //循环监听，直到按Esc键退出
    while(1){
        if(kbhit()){  //检测缓冲区中是否有数据
            ch = getch();  //将缓冲区中的数据以字符的形式读出
            if(ch == 27){
                break;
            }
        }
        printf("Number: %d\n", ++i);
        Sleep(1000);  //暂停1秒
    }
    return 0;
}

int code15(){
    while(1){  //死循环
        malloc(1024);  //分配1024个字节的内存
    }
    return 0;
}

int main()
{
    code15();
    return 0;
}