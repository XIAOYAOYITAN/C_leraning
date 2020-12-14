#include <stdint.h>
#include <stdio.h>


int Isleapyear(int year)
{
    if(year%4==0&&year%100!=0||year%400==0){
        return 1;
    }
    else
    {
        return 0;
    } 
}

int main(){
    uint32_t year=0,month=0;
    printf("This code is to calculate days of months n a year\r\n");
    printf("Please Enter year and month here: format as year.month\r\n");
    scanf("%d.%d",&year,&month);
    
        switch (month)
        {
        case 1:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 2:
            if (Isleapyear(year))
            {
            printf("year:%d,month:%d have 29 days",year,month);
            }
            else
            {
            printf("year:%d,month:%d have 28 days",year,month);
            }
            break; 
        case 3:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 4:
            printf("year:%d,month:%d have 30 days",year,month);
            break;
        case 5:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 6:
            printf("year:%d,month:%d have 30 days",year,month);
            break;            
        case 7:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 8:
            printf("year:%d,month:%d have 30 days",year,month);
            break;
        case 9:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 10:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        case 11:
            printf("year:%d,month:%d have 30 days",year,month);
            break;
        case 12:
            printf("year:%d,month:%d have 31 days",year,month);
            break;
        default:
            break;
        }
    
}

