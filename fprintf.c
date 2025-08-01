#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    FILE *pf=fopen("a.txt","w");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
     //determiniar o tamanho do string
    int n;
    printf("Enter the number of caracters that you want to put into a.txt: ");
    scanf("%d",&n);
    getchar();
    char *arr=NULL;
    arr=(char *)calloc(n,sizeof(char));
    if(arr==NULL)
    {
        return 0;
    }
    printf("Enter the content of your string: ");
    scanf("%[^\n]%*c",arr);
    fprintf(pf,"%s",arr);
    fclose(pf);
    pf=NULL;
    return 0;
}
