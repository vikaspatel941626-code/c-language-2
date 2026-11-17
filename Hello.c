#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter the number" a ,b);
    scanf("%d %d",&a ,&b);
    printf("enter the ch");
    scanf("%c",&ch);
switch(ch)
{
    case'+' :
    printf("%d", a+b);
    break;
    case'*' :
    printf("product =%d", a*b);
    break;

    case'-' :
    if(a>b)
    printf("sub =%d", a-b);
printf("sub =%d", b-a);
break;
default :
printf("invalid input");
}
return 0;
}
