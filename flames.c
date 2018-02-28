#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i,j,k,l;
    char a[30];
    char b[30];
    gets(a);
    gets(b);
    printf("%s %s",a,b);
    int asize,bsize;
    for (asize =0; asize< sizeof(a);asize++) {
        if (a[asize]== '\0'){
            break;
        }
    }
    for (bsize =0; bsize< sizeof(b);bsize++) {
        if (b[bsize]== '\0'){
            break;
        }
    }
    for (i=0;i< asize ;i++) {
        for (j=0;j< bsize ;j++) {
            if (b[j] == '0'){
                continue;
            }
            if (a[i] == b[j]) {
                printf("%c %c \n",a[i],b[j]);
                a[i] = '0';
                b[j] = '0';
            }
        }
    }
    printf("%s %s",a,b);
    strcat(a,b);
    i = 0;
    j =0 ;
    while (a[i] != '\0') {
        printf("1");
        if (a[i] != '0') {
            j++;
        }
        i++;
    }
    printf("\n %d",j);
}