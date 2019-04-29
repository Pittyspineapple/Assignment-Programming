#include <stdio.h>
#include <string.h>
void rotation(char string[], int key, int ChooseOperation);
void substitution(char string[], int ChooseOperation);
int main() {
    
    int letters;
    printf("Amount of letters?");
    scanf("%d", &letters);
    char string[letters];
    printf("What is you word?");
    scanf("%s", string); 
     
    int ChooseOperation;
    printf("(1) Encryption\n"); 
    printf("(2) Decryption\n");
    scanf("%d", &ChooseOperation);
    
    switch (ChooseOperation) 
    {
        case 1: 
        printf("Encryption Chosen.\n");
        break;
        case 2: 
        printf("Decryption Chosen.\n");
        break;
        default:
        if(ChooseOperation < 1 || ChooseOperation > 2)
        {
            printf("Incorrect input");
            return 0;
        }
    }
    
    int type;
    printf("(1) Rotation Cipher.\n");
    printf("(2) Substitution Cipher.\n");
    scanf("%d", &type);
        
    if(type == 1)
    {
        int key;
        switch (ChooseOperation) 
        {
            case 1:
            printf("Enter Your Desired Key");
            scanf("%d", &key);
            rotation(string, key, ChooseOperation);
            break;
            case 2: 
            printf("Enter Your Desired Key");
            scanf("%d", &key);
            rotation(string, key, ChooseOperation);
            break;  
        }
    }else if(type == 2)
    {
        switch(ChooseOperation)
        {
            case 1:
            substitution(string, ChooseOperation);
            break;
            case 2:
            substitution(string, ChooseOperation);
            break;
        }
    }
    return 0;
} 

void rotation(char string[], int key, int ChooseOperation)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int Word;//Intitalised to take a character's position in the ascii table.
    int Alphabet;//Initialised to take a character's position in the ascii table.
    int i;//loop counter for string.
    int amount = strlen(string);
    char letter;
    
    if(ChooseOperation == 1)
    {
        for(i = 0; i < amount; i++)
        {
           Word = string[i];
           int k;
           for(k = 0; k < 26; k++)
           {
               Alphabet = alphabet[k];
               if(Word == Alphabet)
               {
                   Word = Word + key;
                   if (Word > 122)
                   {
                       Word = Word - 26;
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else if(Word < 97)
                   {
                       Word = Word + 26;
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else
                   {
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }
               }
           }
       } 
   }else if(ChooseOperation == 2)
   {
       for(i = 0; i < amount; i++)
        {
           Word = string[i];
           int k;
           for(k = 0; k < 26; k++)
           {
               Alphabet = alphabet[k];
               if(Word == Alphabet)
               {
                   Word = Word - key;
                   if (Word > 122)
                   {
                       Word = Word - 26;
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else if(Word < 97)
                   {
                       Word = Word + 26;
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else
                   {
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }
               }
           }
       } 
   }
}
    
void substitution(char string[], int ChooseOperation)
{
    char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char substitution[] = "QWERTYUYOPASDFGHJKLZXCVBNM";
    
    for 
}
