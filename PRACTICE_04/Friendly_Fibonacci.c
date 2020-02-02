#include<stdio.h>

int main()
{   unsigned long int n;
    scanf("%lu",&n);
    int found=0;
    unsigned long int a=5,b=8,c=a+b;
    while(c<=n){
        unsigned long int sum=0,nd=0;
        unsigned long int temp=c;
        while(temp!=0){
            nd++;
            sum+=temp%10;
            temp/=10;
        }
        if(sum%nd==0){
            printf("%lu\n",c);
            if(found==0){found=1;}
        }
        a=b;
        b=c;
        c=a+b;
        
    }
    if(found==0){
            printf("No Output");
        }
    
    //  Insert your code here.
    
    return 0;
}