#include <string.h>
#include <stdio.h>
int main()
{
    char opString[30] = "leetcode";
    char vowels[20];
    char vowels1[20];
    int j = 0, k = 0,l=0;

    for (int i = 0; opString[i] != '\0'; i++)
    {
        if ((opString[i] == 'A') || (opString[i] == 'E') || (opString[i] == 'I') || (opString[i] == 'O') || (opString[i] == 'U') || (opString[i] == 'a') || (opString[i] == 'e') || (opString[i] == 'i') || (opString[i] == 'o') || (opString[i] == 'u'))
        {
            vowels[j] = opString[i];
            j++;
        }
    }

    int z;
    for(z=0;vowels[z]!='\0';z++);
     for(z=z-2;z>=0;z--){
     vowels1[l]=vowels[z];
     l++;
     }

    int p = 3;
    for (int i = 0; opString[i] != '\0'; i++)
    {
        // if (((opString[i] != 'A') || (opString[i] != 'E')) || ((opString[i] != 'I') || (opString[i] != 'O')) || ((opString[i] != 'U') || (opString[i] != 'a')) || ((opString[i] != 'e') || (opString[i] != 'i')) || ((opString[i] != 'o') || (opString[i] != 'u')))
        // {
        //     printf("%c", opString[i]);
        // }

        if ((opString[i] == 'A') || (opString[i] == 'E') || (opString[i] == 'I') || (opString[i] == 'O') || (opString[i] == 'U') || (opString[i] == 'a') || (opString[i] == 'e') || (opString[i] == 'i') || (opString[i] == 'o') || (opString[i] == 'u'))
        {
          
                
            for ( int z = z - 2; z >= 0; z--)
            {
                printf("%c\t", vowels[z]);
                break;
            }


        }
        else{
            printf("%c\t",opString[i]);
        }

         }
     

    return 0;
}