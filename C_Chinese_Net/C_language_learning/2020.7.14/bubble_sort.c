#include <stdio.h>

int main()
{   
    int i,j,temp,isSorted; 
    int length;
    int array[50]={0};
    printf("���������飬�Կո�ָ�����666����\r\n");
    for ( length = 0; length<50 ; length++)
    {   
        scanf("%d",&array[length]);      
        if(array[length]==666)
        {
            array[length]=0;//ɾ��666����0�滻
            break;
        }
    }
   

    /*ð������*/
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
     /*����֮���ӡ����*/
    for (i = 0; i <length; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
