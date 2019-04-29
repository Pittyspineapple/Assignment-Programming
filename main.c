#include <stdio.h> 

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
    Switch (ChooseOperation) {
        case 1:
        int key;
        printf("Enter Your Desired Key");
        scanf("%d", &key);
        
    }    
} 
