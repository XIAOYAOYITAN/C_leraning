#include <stdio.h>

int main(){
    char str[50];
    int number=0,letter=0,nop=0,other=0;
    
    printf("请输入一串字符，以回车键结束!\r\n");
    gets(str);
// scanf("%*[^\n]");scanf("%*c");//清空输入缓存区
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='0'&&str[i]<='9')//数字
        {
            number++;
        }
        else if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))//字母
        {
            letter++;
        }
        else if (str[i]==' ')//空格
        {
            nop++;
        }
        else
        {
            other++;
        }  
    }
    printf("numbers：%d,letters:%d,nops:%d,others:%d",number,letter,nop,other);

}