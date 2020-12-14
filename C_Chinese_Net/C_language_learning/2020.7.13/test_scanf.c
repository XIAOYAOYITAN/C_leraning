/*ä»?16è¿›åˆ¶æ ¼å¼è¾“å‡ºå˜é‡åœ¨å†…å­˜ä¸­çš„åœ°å€*/
#include <stdio.h>
int code1(void)
{
    int a='F';
    int b=12;
    int c=452;
    /* %pä»?16è¿›åˆ¶å½¢å¼è¾“å‡ºåœ°å€*/
    printf("&a=%p, &b=%p, &c=%p\n", &a, &b, &c);
   
    return 0;
}

/*scanfè¾“å…¥å¤šä¸ªæ•°å€?*/
int code2()
{
    int a, b, c;
    scanf("%d %d", &a, &b);//scanfå¯¹äºŽç©ºæ ¼çš„è?æ±‚ä¸ä¸¥æ ?
    printf("a+b=%d\n", a+b);
    scanf("%d   %d", &a, &b);
    printf("a+b=%d\n", a+b);
    scanf("%d, %d, %d", &a, &b, &c);
    printf("a+b+c=%d\n", a+b+c);
   
    scanf("%d is bigger than %d", &a, &b);
    printf("a-b=%d\n", a-b);
    return 0;
}

/*æ¼”ç¤ºè¯»å–å¤±è´¥*/
int code3()
{
    int a = 1, b = 2, c = 3, d = 4;  //ä¿?æ”¹å?„ï¼šç»™å˜é‡èµ‹äºˆä¸åŒçš„åˆå?‹å€?
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b);
    scanf("%d %d", &c, &d);
    printf("c=%d, d=%d\n", c, d);
   
    return 0;
}
/*ÕâÀïÓÐÒ»¸öºÜÓÐÈ¤µÄbug£¬ÊäÈëµ½urlÖ®ºóºóÃæ»áÖ±½ÓÊä³ö*/
int code4 ()
{
    char letter;
    int age;
    char url[30];
    float price;

    scanf("%c",&letter);
    // scanf("%c",&age);
    scanf("%d",&age);//¿ÉÒÔ·¢ÏÖ£¬·Ö¿ªµÄscanf²»ÄÜÁ¬ÐøµÄÊäÈëÏàÍ¬µÄÊý¾ÝÀàÐÍ£¬»á²úÉúÆæ¹ÖµÄÊ§°Ü
    scanf("%s",url);
    scanf("%f",&price);

    printf("%cÊÇÒ»¸ö×ÖÄ¸\n",letter);
    printf("Äê·Ý%d,ÍøÖ·%s,¼Û¸ñ%f\n",age,url,price);//%gÊÇ¸¡µãÊýµÄµÍ¾«¶È×ÔÊÊÓ¦Êä³ö

    return 0;
}

#include <conio.h>
//getcheº¯Êý
int code5()
{
    char c = getche();
    printf("c: %c\n", c);
    return 0;
}

//getch,Ã»ÓÐ»ØÏÔµÄº¯Êý£¬·ÀÖ¹±»Íµ¿ú
int code6()
{
    char c = getch();
    printf("c: %c\n", c);
    return 0;
}

//gets() ÈÏÎª¿Õ¸ñÒ²ÊÇ×Ö·û´®µÄÒ»²¿·Ö£¬Ö»ÓÐÓöµ½»Ø³µ¼üÊ±²ÅÈÏÎª×Ö·û´®ÊäÈë½áÊø£¬ËùÒÔ£¬²»¹ÜÊäÈëÁË¶àÉÙ¸ö¿Õ¸ñ£¬Ö»Òª²»°´ÏÂ»Ø³µ¼ü£¬¶Ô gets() À´Ëµ¾ÍÊÇÒ»¸öÍêÕûµÄ×Ö·û´®
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

/*ÊäÈë100 www.xyz¾Í»á·¢ÏÖ»º´æÇøÆ¥Åä²»µ½bµÄÊ±ºòÖ±½Ó°Ñ×Ö·û´®¸øÁËstr*/
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
* »ñÈ¡ÓÃ»§ÊäÈëµÄÃÜÂë
* @param  pwd     char*  ±£´æÃÜÂëµÄÄÚ´æµÄÊ×µØÖ·
* @param  pwdlen  int    ÃÜÂëµÄ×î´ó³¤¶È
**/
void getpwd(char *pwd, int pwdlen){
    char ch = 0;
    int i = 0;
    while(i<pwdlen){
        ch = getch();
        if(ch == '\r'){  //»Ø³µ½áÊøÊäÈë
            printf("\n");
            break;
        }
       
        if(ch=='\b' && i>0){  //°´ÏÂÉ¾³ý¼ü
            i--;//Ö¸ÏòÇ°Ò»¸ö×Ö·û£¬×Ô¶¯ÊäÈëµÄÊ±ºò¾Í»á¸²¸Ç
            printf("\b \b");//ÍË¸ñÊä³ö¿Õ¸ñÔÙÍË¸ñ£¬¾ÍÏàµ±ÓÚÔÚÏÔÊ¾ÆÁÉÏÉ¾³ýÒ»¸ö×Ö·û
        }else if(isprint(ch)){  //ÊäÈë¿É´òÓ¡×Ö·û
            pwd[i] = ch;
            printf("*");
            i++;
        }
    }
    pwd[i] = 0;//ÔÚ×Ö·ûÊý×éÖÐÌí¼Ó0£¬×÷Îª×Ö·û´®½áÊø·û
}

/*×èÈûÊ½¼üÅÌ¼àÌý£¬Ö»ÓÐµ±¼üÅÌ°´ÏÂ³ÌÐò²Å¼ÌÐøÖ´ÐÐ*/
int code13(){
    char ch;
    int i = 0;
    //Ñ­»·¼àÌý£¬Ö±µ½°´Esc¼üÍË³ö
    while(ch = getch()){
        if(ch == 27){
            break;
        }else{
            printf("Number: %d\n", ++i);
        }
    }
    return 0;
}

/*·Ç×èÈûÊ½¼üÅÌ¼àÌý£¬Ã¿¸ôÒ»ÃëprintfÒ»ÏÂ*/
int code14(){
    char ch;
    int i = 0;
    //Ñ­»·¼àÌý£¬Ö±µ½°´Esc¼üÍË³ö
    while(1){
        if(kbhit()){  //¼ì²â»º³åÇøÖÐÊÇ·ñÓÐÊý¾Ý
            ch = getch();  //½«»º³åÇøÖÐµÄÊý¾ÝÒÔ×Ö·ûµÄÐÎÊ½¶Á³ö
            if(ch == 27){
                break;
            }
        }
        printf("Number: %d\n", ++i);
        Sleep(1000);  //ÔÝÍ£1Ãë
    }
    return 0;
}

int code15(){
    while(1){  //ËÀÑ­»·
        malloc(1024);  //·ÖÅä1024¸ö×Ö½ÚµÄÄÚ´æ
    }
    return 0;
}

int main()
{
    code15();
    return 0;
}