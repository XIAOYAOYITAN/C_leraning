#include <stdio.h>

int main()
{   
    int i,j,temp,isSorted; 
    int length;
    int array[50]={0};
    printf("请输入数组，以空格分隔，以666结束\r\n");
    for ( length = 0; length<50 ; length++)
    {   
        scanf("%d",&array[length]);      
        if(array[length]==666)
        {
            array[length]=0;//删除666，用0替换
            break;
        }
    }
   

    /*冒泡排序*/
    for(i=0;i<length;i++){
        isSorted=1;
        for (j = 0; j <length-1-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                isSorted=0;
            }   
        } 
        if(isSorted) break; 
    }
     /*排序之后打印数组*/
    for (i = 0; i <length; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
