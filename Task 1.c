#include <string.h>
#include <stdio.h>
char s[6];
char b[6]="break";
char PAr[9][6]={"G", "1", "2", "3", "4", "5", "B1", "B2", "B3"};
void Possible()
{
    printf("Possible variable values are: ");
    for (int i=0; i<9; i++)
    {
        printf("%s ", PAr[i]);
    }
    printf("\nTo exit the program print 'break' ");
}
int Check()
{
    printf("\nInput the value: ");
    scanf("%s", s);
    for (int i=0; i<9; i++)
    {
        if (strcmp(PAr[i], s)==0)
        {
            printf("You are going to the floor %s", s);
            printf("\nCurrently you are on the floor %s.",s);
            printf(" Choose your next destination");
        }
    
    }
}

int main()
{
    Possible();
    while(strcmp(b,s)!=0)
    {
        Check();
    }
    return 0;
}

