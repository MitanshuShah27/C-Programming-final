#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 char *ma;
 ma = calloc( 20, sizeof(char) );
 if( ma== NULL )
 {
    printf("\nNot able to allocate memory");
 }
 else
 {
    strcpy(ma,"Mitanshu Shah");
 }
 printf("DMA contains: ""%s\n", ma );
 free(ma);
}
