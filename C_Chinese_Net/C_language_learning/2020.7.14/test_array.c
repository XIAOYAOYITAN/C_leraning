#include <stdio.h>
#include <string.h>  //记得引入该头文件
int code1(){
    char str[] = "http://c.biancheng.net/c/";
    long len = strlen(str);
    printf("The lenth of the string is %ld.\n", len);
   
    return 0;
}

int code2(){
    char str1[100]="The URL is ";
    char str2[60];
    printf("Input a URL: ");
    gets(str2);
    strcat(str1, str2);
    puts(str1);
   
    return 0;
}

int code3()
{
    int a[3];
    printf("%d", a[10000]);
    return 0;
}

// int code4()
// {
//     int n=0;
//     printf("Input string length: ");
//     scanf("%d", &n);
//     scanf("%*[^\n]"); scanf("%*c");  //清空输入缓冲区
//     char str[n];
//     printf("Input a string: ");
//     gets(str);
//     puts(str);
//     return 0;
// }

int code5()
{   
    int i,j,temp;
    int array[]={2,1,6,7,7,5,4,9};
    int length = sizeof(array) / sizeof(int);//数组长度
    /*冒泡排序*/
    for(i=0;i<length;i++){
        for (j = 0; j <length-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }   
        }  
    }
     /*排序之后打印数组*/
    for (i = 0; i <length; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}


int main()
{
    code5();
}
