#include<stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
int n;int c=1,g,x,y;
scanf("%d",&n);
for(int i=0;i<n;i++){
    if(i!=0) y=x;
    scanf("%d",&x);
    if(i!=0){
        g=gcd(x,y);
        if(g!=1) break;
        else c++;
    }
    
  }
if(c==1){
printf("%d",-1);}
else{
printf("%d",c);}
return 0;}
