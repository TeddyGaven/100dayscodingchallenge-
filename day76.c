#include<stdio.h>

int x;

void evenOdd(int x){
      if(x%2==0){
        printf("%d is Even",x);
      }
      else{
        printf("%d is Not Even",x);
      }
}

int main(){
    int a,b;
    printf("Enter 2 nos");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the greatest",a);
        evenOdd(a);
    }
    else if(b>a){
        printf("%d is the greatest",b);
        evenOdd(b);
    }
    else{
        printf("Both are equal");
    }
return 0;
}