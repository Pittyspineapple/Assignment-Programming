#include <stdio.h>
#include <string.h>
void rotation(char string[], int key, int ChooseOperation);//initializing characters and integers
void substitution(char string[], int ChooseOperation); //initializing characters and integers
int main() {
    
    int letters;
    printf("Amount of letters?");//asking user for how long the word is
    scanf("%d", &letters); //records amount of letters
    char string[letters]; //remembers the value
    printf("What is you word?");//asks user for the word they wanna decrypt or encrypt
    scanf("%s", string); 
     
    int ChooseOperation; //asks user for what operation they wanna do
    printf("(1) Encryption\n"); 
    printf("(2) Decryption\n");
    scanf("%d", &ChooseOperation); //records chosen operation
    
    switch (ChooseOperation) //operation for encryption and decryption
    {
        case 1: 
        printf("Encryption Chosen.\n");
        break;
        case 2: 
        printf("Decryption Chosen.\n");
        break;
        default:
        if(ChooseOperation < 1 || ChooseOperation > 2)//has to be one or 2 
        {
            printf("Incorrect input"); //if value is 1< >2
            return 0;
        }
    }
    
    int type; //user chooses cipher type
    printf("(1) Rotation Cipher.\n");
    printf("(2) Substitution Cipher.\n");
    scanf("%d", &type); //records users chosen cipher type
        
    if(type == 1)//rotation cipher chosen by user
    {
        int key;
        switch (ChooseOperation) 
        {
            case 1://encryption
            printf("Enter Your Desired Key");//asks user for key
            scanf("%d", &key);//remembers key
            rotation(string, key, ChooseOperation);
            break;
            case 2: //decryption
            printf("Enter Your Desired Key");//asks user for key
            scanf("%d", &key);//remembers key
            rotation(string, key, ChooseOperation);
            break;  
        }
    }else if(type == 2)//substitution cipher
    {
        switch(ChooseOperation)
        {
            case 1:
            substitution(string, ChooseOperation);//encryption
            break;
            case 2:
            substitution(string, ChooseOperation);//decryption
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
    
    if(ChooseOperation == 1)//function for rotation encryption cipher
    {
        for(i = 0; i < amount; i++)
        {
           Word = string[i];
           int k;
           for(k = 0; k < 26; k++)//amount of letters in Alphabet 
           {
               Alphabet = alphabet[k];
               if(Word == Alphabet)//changing word into ASCII letters
               {
                   Word = Word + key;//no letters in ASCII table after 122
                   if (Word > 122)
                   {
                       Word = Word - 26;//takes value to 97 so all lower case letters plus some other values
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else if(Word < 97)
                   {
                       Word = Word + 26;//turns letters back to the ASCII table values
                       letter = Word;
                       printf("%c", letter);//prints vaues of the ASCII table 
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
   }else if(ChooseOperation == 2)//function for rotation decryption cipher
   {
       for(i = 0; i < amount; i++)
        {
           Word = string[i];
           int k;
           for(k = 0; k < 26; k++)
           {
               Alphabet = alphabet[k];
               if(Word == Alphabet)//changing word into ASCII letters
               {
                   Word = Word - key;
                   if (Word > 122)//no letters after this value 
                   {
                       Word = Word - 26;//takes value back 26 so from 122 it = 97
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else if(Word < 97)//all letters 
                   {
                       Word = Word + 26;//takes values back and puts them into the ASCII table
                       letter = Word;
                       printf("%c", letter);
                       break;
                   }else
                   {
                       letter = Word;
                       printf("%c", letter);//prints ASCII letter value
                       break;
                   }
               }
           }
       } 
   }
}
    
void substitution(char string[], int ChooseOperation)//data for substitution cipher
{
 char alphabet[] = "abcdefghijklmnopqrstuvwxyz";//lower case letters
 char substitution[] = "QWERTYUIOPASDFGHJKLZXCVBNM";//upper case letters
 int Word;
 int Alphabet;
 int Substitution;
 int i;
 char letter;
 int amount = strlen(string);
 for (i = 0; i < amount; i++)//function for encryption substitution cipher
 {
  Word = string[i];
  int k;
  for (k = 0; k < 26; k++)
  {
   Alphabet = alphabet[k];//upper and lower case for letters to go from a word into ASCII letters
   if (Word == Alphabet)
   {
    Substitution = substitution[k];
    Word = Substitution;
    letter = Word;
    printf("%c", letter);//printing the ASCII values from the word the user put in
   }
  }
 }
} 
 
