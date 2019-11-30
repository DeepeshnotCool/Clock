#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{   int hour=0;
    int min=0;
    int sec=0;
    printf("Enter the current time in 24 hour Format\n");
    scanf("%d %d %d",&hour,&min,&sec);
    while(1)
    {
        for( hour; hour<24; hour++)
            {
            for(min; min<60; min++) {
                for( sec; sec<60; sec++)
                    {
                    system("cls");
                    if(hour<12  ){
                       printf("%d hrs : %d min : %d sec AM \n",hour,min,sec);
                   }
                   else if(hour==12)    {
                        printf("%d hrs : %d min : %d sec PM \n",hour,min,sec);
                       }
                       else if(hour>=13)    {
                    printf("%d hrs : %d min : %d sec PM \n",hour-12,min,sec);
                   }
                    for(long double x=0; x<=149990000; x++)
                        {}
                } sec=0;
                    } min=0;
                        }hour =0;
    }
    return 0;
}
