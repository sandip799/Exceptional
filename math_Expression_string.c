/*Write a C program that reads an expression and evaluates it. Go to the editor
Input:
4
10-2*3=
8*(8+2-5)= */
#include <stdio.h>
#include <stdlib.h>
char str[100];
int ind=0;
//expression check function
int check()
{
    int n=0;
    while(1)
    {
        if(str[ind]>='0' && str[ind]<='9')
        {
            n=n*10 + (str[ind]-'0');
            ind++;
        }
        else{
            return n;
        }
    }
}
//multiplication & division function
int muldiv()
{
    int first,second;
    first=check();
    while(1)
    {
        if(str[ind]=='*')
        {
            ind++;
            second=check();
            first=first*second;
        }
        else if(str[ind]=='/')
        {
            ind++;
            second=check();
            first=first/second;
        }
        else
        {
            return first;
        }
    }
}
//function for addition and substraction
int addsub()
{
    int first,second;
    first=muldiv();
    while(1)
    {
        if(str[ind]=='+')
        {
            ind++;
            second=muldiv();
            first=first+second;
        }
        else if(str[ind]=='-')
        {
            ind++;
            second=muldiv();
            first=first-second;
        }
        else
        {
            return first;
        }
    }
}
int main()
{
    printf("Enter The Mathematical Expression\n");
    scanf("%s",str);
    int result=addsub();
    printf("= %d",result);
return 0;
}
