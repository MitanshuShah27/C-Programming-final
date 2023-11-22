#include<stdio.h>
#include<string.h>
main()
{
    char t[] = "3";
    char str2[] = ".txt";
    printf("\nEnter");
    scanf("%s",t);
    strcat(t,".txt");
    FILE *fp,*fpp;
    fp = fopen(t,"r");
    fpp = fopen("sample.txt","a");
    printf("%s",t);
    fclose(fp);
    fclose(fpp);
    remove(t);
    rename("sample.txt",t);
    /*int t=1;
    char* a = "1";
    char* ext = ".txt";
    char fileSpec[strlen(a)+strlen(ext)+1];
    snprintf( fileSpec, sizeof( fileSpec ), "%s%s", a, ext );
    FILE *fp;
    fp=fopen(fileSpec,"a");
    fprintf(fp,"hiii");
    fclose(fp);*/
}
