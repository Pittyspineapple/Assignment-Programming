#include <stdio.h> 
#include <string.h>

void rotation(char string[], int key);

void substitution(char string[], int key);

int main() {
    
    int letters;
    printf("Amount of letters?");
    scanf("%d", &letters);
    char string[letters];
    printf("What is you word?\n");
    scanf("%s", string); 
     
    int ChooseOperation;
    printf("(1) Encryption\n"); 
    printf("(2) Decryption\n");
    scanf("%d", &ChooseOperation);
    
    switch (ChooseOperation) {
        case 1: 
        printf("Encryption Chosen.\n");
        break;
        case 2: 
        printf("Decryption Chosen.\n");
        break;
        default: 
        if (ChooseOperation <1 || ChooseOperation >2){
        printf("Incorrect Input");
        return 0;
        }
        
    }
        
    switch (ChooseOperation) {
        case 1:
        printf("Enter Your Desired Key");
        int key;  
        scanf("%d", &key);
        rotation(string, key);
        break;
        case 2: 
        substitution(string, key);
        break;
    }    
} 
void rotation(char string[], int key) 
{   
    char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int Word; //initialised to take a characters position in ASCII table
    int Alphabet; //initialised to take characters position in ASCII table 
    int i; //loop counter for string
    int k; //loop counter for alphabet
    int amount = strlen(string):
    char Convert;
    
    for (i = 0; i<amount; i++)
    
        Word = string[i];
        for(k = 0; k < 26; k++)
        {

            Alphabet = Alphabet[k];
            if (Word == Alphabet)
            {
            
                Alphabet == Alphabet + key;
                if (Alphabet >122)
                {
                    
                     Alphabet == Alphabet - 26;
                     Convert == Alphabet;
                     printf("%c", convert);
                {else if()
}

void substitution(char string[], int key)
{
    
}
