#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#define NMAX 5
#define NMIN 0

char PAr[5][10]={"katze", "eule", "giraffe", "mause", "kaninchen"};
int Rnd()
{
    printf("Choosing the word...\n");
    int val;
    srand(time(0));
    val=(float)rand()/RAND_MAX*(NMAX-NMIN)+NMIN;
    printf("Word is chosen! Number %d\n", val+1);
    return val;
}
void create_D(int len, char *DAr)
{
    for(int g=0; g<len; g++)
    {
        DAr[g]='_';
    }
}
void print_D(int len, char *DAr)
{
    for(int g=0; g<len; g++)
    {
        printf("%c ", DAr[g]);
    }
}
int main()
{
    int i=Rnd();
    //printf("%s\n", PAr[i]);
    int len=strlen(PAr[i]);
    printf("Number of letters: %d\n", len);
    char s2[len];
    char s3[len];
    for(int f=0; f<len; f++)
        {
            s2[f]=PAr[i][f];
        }
        s2[len]='\0';
    char DAr[len];
    create_D(len, DAr);
    print_D(len, DAr);
    char s;
int counter=0;
while(strncmp(s2,s3,len)!=0)
{
    printf("\nInput the letter: ");
    scanf("%c", &s);
    getchar();
    for(int i=0; i<len; i++)
    {
        if(s==s2[i])
            {
                DAr[i]=s;
            }
        for(int f=0; f<len; f++)
        {
            s3[f]=DAr[f];
        }
        s3[len]='\0';
    }
    print_D(len, DAr);
    s=' ';
    counter++;
    if(counter==10)
    {
        printf("\nYou run out of attempts! But you can still guess the word!\n");
    }
}
    return 0;
}
