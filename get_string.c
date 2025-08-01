#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    //ler arquivo(1 linha)
    FILE *pf=fopen("a.txt","r");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    //Determinar o tamanho do string
    int n;
    printf("Enter the number of caracters that you want to get from a.txt: ");
    scanf("%d",&n);
    char *str=NULL;
    str=(char *)calloc(n,sizeof(char));
    if(str==NULL)
    {
        return 0;
    }
    str=fgets(str,n,pf);
    printf("The content: ");
    printf("%s\n",str);
    fclose(pf);
    pf=NULL;
    free(str);
    str=NULL;
    return 0;
}
