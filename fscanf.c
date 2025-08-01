#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    FILE *pf=fopen("a.txt","r");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    //determiniar o tamanho do string
    int n;
    printf("Enter the number of caracters that you want to get from a.txt: ");
    scanf("%d",&n);
    getchar();
    char *arr=NULL;
    arr=(char *)calloc(n,sizeof(char));
    if(arr==NULL)
    {
        return 0;
    }
    fscanf(pf,"%[^\n]%*c",arr);
    printf("The content: ");
    printf("%s\n",arr);
    free(arr);
    fclose(pf);
    pf=NULL;
    return 0;
}
