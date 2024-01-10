/*This code written below is asking the user to enter a
message and then asking them to put their shift that they want that messaged to be
shifted by in order to create an encrypted message. Then the user will put that
encrypted message back into the code with the opposite shift to get the decrypted message.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80

//This is setting up the code for the encryption
void encrypt (char *message, int shift){

    //These are the variables being used in this function
    char ch;
    char c[100];
    int j;

    //The for statement to look at the length of the message
    for(j = 0; j < strlen(message); j++){
        ch = message[j];

        //This is making sure the letters in it stay within the capital letters
        if (ch >= 'A' && ch <= 'Z'){
           c[j] = (char)(((int)(ch - 'A') + shift) % 26 + 'A');
        printf("%c", c[j]);
    }

    //This is making sure the letters in it stay within the lowercase letters
    else if(ch >= 'a' && ch <= 'z'){
        c[j] = (char)(((int)(ch - 'a') + shift) % 26 + 'a');
        printf("%c", c[j]);
    }

    //This checks for other characters
    else{
        c[j] =ch;
        printf("%c", c[j]);
        }
    }
    printf("\n");
}

int main() {

    //These are the variables for the main
    int number;
    char str[100];

    //Telling the user to enter the message
    printf("Enter message to be encrypted: ");
    gets(str);

    //Asking the user how they want to shift the message
    printf("Enter shift amount (1-25): ");
    scanf("%d", &number);
    getchar();

    //Printing out the encrypted message
    printf("Encrypted message: ");
    encrypt(str, number);
    printf("\n");


    //Telling user to enter the encrypted message
    printf("Enter message to be decrypted: ");
    gets(str);

    //Asking how they want to shift it back
    printf("Enter shift amount (1-25): ");
    scanf("%d", &number);

    //Printing out the decrypted message
    printf("Decrypted message: ");
    encrypt(str, number);
    printf("\n");

    return 0;
}

