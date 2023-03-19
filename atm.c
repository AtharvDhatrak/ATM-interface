//atm machine
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define DATA_SIZE 10000
int main()
{       char dt[50];
        int balance=0;
        int pin =1231;
        int tempin;//pin the user will enter
        int anothertransaction;//for performing another transaction
        printf("PLEASE ENTER YOUR PIN:\n");
        scanf("%d",& tempin);

        
        if (tempin!=1231) //if pin is not equal to 1231
        {
            printf("INVALID PIN\n");
            return 0;
        } 
       do//entering it in loop so we can reuse it
       
        {
           
            int option;
            printf("WHAT YOU WANT ELSE?\n");
            printf("1-CHECK YOUR BALANCE\n");
            printf("2-DEPOSIT\n");
            printf("3-WITHDRAW\n");
            scanf("%d",&option); //if=scanf
        
            
            if( option == 1) //check balance
        {
            printf("YOUR BALANCE IS: %d\n",balance);
        }
        else if( option == 2)//deposit
        {
            int amtdeposit;
            printf("HOW MUCH AMOUNT DO YOU WANT TO DEPOSIT:");
            scanf("%d",& amtdeposit);
        
        if (amtdeposit>0)
        {
            balance+=amtdeposit;//balance+deposite
        }
        else
        {
            printf("INVALID DEPOSIT AMOUNT!!\n");                                                                                            
        }
        }
        else if(option == 3)//3-withdraw
        {
            int amtwithdraw;
            printf("HOW MUCH AMOUNT DO YOU WANT TO WITHDRAW:");
            scanf("%d",& amtwithdraw);
            
            if(amtwithdraw<=balance)
            {
                balance-=amtwithdraw;
            }
            else
            {
                printf("YOU DONT HAVE ENOUGH MONEY TRANSACTION DECLINED!!!");
                
            }
            
        }
            else
            {
                printf("INVALID TRANSACTION\n");
            }
            
            anothertransaction=0;
            
            
            while (anothertransaction!=1 &&anothertransaction!=2)
            {
                printf("DO YOU WANT ANOTHER TRANSACTION:\n");
                printf("1-YES\n2-NO\n");
                scanf("%d",&anothertransaction);
                if(anothertransaction==2)
{
time_t t=time(NULL);
struct tm tm=*localtime(&t);
printf("your transaction is recorded on:%d-%02d-%02d %02d:%02d:%02d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,tm.tm_hour,tm.tm_min,tm.tm_sec);
scanf("%c",&dt);
}
{
FILE*fptr;
fptr=fopen("c://transaction.txt,"w");
printf("transaction records are stored");
fgets(dt,DATA_SIZE,stdin);
fputs(dt,fptr);
fclose(fptr);}
                 
                   
                   
                   else{
                    printf("THANK YOU!!!");
                }
            }
        
        }
        while(anothertransaction==1);
        
        
        
        return 0;
}
            
