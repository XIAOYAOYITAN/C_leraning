#include <stdio.h>

int main(){
    char str[50];
    int number=0,letter=0,nop=0,other=0;
    
    printf("������һ���ַ����Իس�������!\r\n");
    gets(str);
// scanf("%*[^\n]");scanf("%*c");//������뻺����
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='0'&&str[i]<='9')//����
        {
            number++;
        }
        else if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))//��ĸ
        {
            letter++;
        }
        else if (str[i]==' ')//�ո�
        {
            nop++;
        }
        else
        {
            other++;
        }  
    }
    printf("numbers��%d,letters:%d,nops:%d,others:%d",number,letter,nop,other);

}