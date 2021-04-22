#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char word[100];
    int pg;
};

int main()
{
    int i=0,j,k;
    struct book n[100],temp;
    printf("Enter The Word with The Page Number\n");
    while(scanf("%s %d",n[i].word,&n[i].pg)!=EOF)
    {
        i++;
    }

    //sorting the page number
    for(j=0;j<i;j++)
    {
        for(k=i-1;k>0;k--)
        {
            if(strcmp(n[k].word,n[k-1].word)<0)
            {
                temp=n[k];
                n[k]=n[k-1];
                n[k-1]=temp;
            }
            else if(strcmp(n[k].word,n[k-1].word)==0)
            {
                if(n[k].pg<n[k-1].pg)
                {
                    temp=n[k];
                    n[k]=n[k-1];
                    n[k-1]=temp;
                }
            }
        }
    } 

    //printing the structure 
    for(j=0;j<i;j++)
    {
        if(j!=0)
        {
            if(strcmp(n[j].word,n[j-1].word)==0)
            {
                printf(" %d",n[j].pg);
            }
            else
            {
                printf("\n%s \n%d",n[j].word,n[j].pg);
            }
        }
        else{
            printf("\n%s \n%d",n[j].word,n[j].pg);
        }
    }
    
return 0;
}