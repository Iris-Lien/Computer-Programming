#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    int i;
    int count=0;

    while(scanf("%c", &input)!=EOF)
    {
        //printf("%s\n",input);
        if (input == '"')
        {
            switch (count % 2)
            {
            case 0:
                printf("``");
                break;
            case 1:
                printf("''");
            }
            printf("%c",input);
            count++;
        }

        else
            printf("%c", input);
    }


    return 0;
}
