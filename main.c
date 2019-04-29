#include <stdio.h> 
void rotation(char string [], int key);
void substitution(char string [], int key);
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
    
    switch (ChooseOperation) {
        case 1: 
        printf("Encryption Chosen.\n");
        break;
        case 2: 
        printf("Decryption Chosen.\n");
        break;
        }
    switch (ChooseOperation) {
        case 1:
        int key;
        printf("Enter Your Desired Key");
        scanf("%d", &key);
        rotation(string, key);
        break;
        case 2: 
        substitution(string, key);
        
        
    }    
} 
