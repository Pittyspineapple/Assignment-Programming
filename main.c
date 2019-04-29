#include <stdio.h>
#include <string.h>
void rotation(char string[], int key, int ChooseOperation);
void substitution(char string[], int key, int ChooseOperation);
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
        
    switch (ChooseOperation) 
    {
        case 1:
        printf("Enter Your Desired Key");
        int key;
        scanf("%d", &key);
        rotation(string, key, ChooseOperation);
        break;
        case 2: 
        substitution(string, key, ChooseOperation);
        break;  
    }
    return 0;
} 

void rotation(char string[], int key, int ChooseOperation)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int Word;//Intitalised to take a character's position in the ascii table.
    int Alphabet;//Initialised to take a character's position in the ascii table.
    int i;//loop counter for string.
    int k;//loop counter for alphabet.
    int amount = strlen(string);
    char convert;
    
    if(ChooseOperation == 1)
    {
        for(i = 0; i < amount; i++)
    {
        Word = string[i];
        for(k = 0; k < 26; k++)
        {
            Alphabet = alphabet[k];
            if(Word == Alphabet)
            {
                Alphabet = Alphabet + key;
                if(Alphabet > 122)
                {
                    Alphabet = Alphabet - 26;
                    convert = Alphabet;
                    printf("%c", convert);     
                }else if(Alphabet < 97)
                {
                    Alphabet = Alphabet + 26;
                    convert = Alphabet;
                    printf("%c", convert);
                }
            }
        }
    }
    }
    
}
void substitution(char string[], int key, int ChooseOperation)
{
    
}
