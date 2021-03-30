#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    long number = get_long("Number:");
    long number2 = number;
    int n,i;
    int sum=0;
    int sum2=0;

    if(number>=1000000000000000 && number<10000000000000000){
        i= number%10;
        sum2 += i;
        number= number/10;
        while(number > 0){
        
        n =  number % 10;
        n = 2*n;
        number = number / 10;
        i = number %10;
        number = number / 10;
        sum2 += i;
        if(n<10){
            sum+=n;
        }
        else{
            int a= n/10;
            int b= n%10;
            sum+=(a+b);
        }
        
    }
    if(((sum+sum2)%10)==0){
        int a= number2/100000000000000;
        int b= number2/1000000000000000;
        if(a==51 || a==52 || a==53 || a==54 || a==55 )
        printf("MASTERCARD\n");
        else if(b==4)
        printf("VISA\n");
        else{
        printf("INVALID\n");
    }
    }
    else{
        printf("INVALID\n");
    }


    }
    
    else if(number>=1000000000000 && number<10000000000000){
        i= number%10;
        sum2 += i;
        number= number/10;
        while(number > 0){
        
        n =  number % 10;
        n = 2*n;
        number = number / 10;
        i = number %10;
        number = number / 10;
        sum2 += i;
        if(n<10){
            sum+=n;
        }
        else{
            int a= n/10;
            int b= n%10;
            sum+=(a+b);
        }
        
    }
    if(((sum+sum2)%10)==0){
        int b= number2/1000000000000000;
        if(b==4)
        printf("VISA\n");
    }
    else{
        printf("INVALID\n");
    }
    }

    else if(number>=100000000000000 && number<1000000000000000){
        i= number%10;
        sum2 += i;
        number= number/10;
        while(number > 0){
        
        n =  number % 10;
        n = 2*n;
        number = number / 10;
        i = number %10;
        number = number / 10;
        sum2 += i;
        if(n<10){
            sum+=n;
        }
        else{
            int a= n/10;
            int b= n%10;
            sum+=(a+b);
        }
        
    }
    if(((sum+sum2)%10)==0){
        int a= number2/10000000000000;
        if(a==34 || a==37){
        printf("AMEX\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }
    
    }
   
    
    else{
        printf("INVALID\n");
    }
   
}
