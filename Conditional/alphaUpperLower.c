#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch>='a' && ch<= 'z')
    {
        char upper = ch - 32;
        printf("The uppercase of the entered alphabet is: %c", upper);
    }
    else if (ch>='A' && ch<= 'Z')   
    {
        printf("You have entered %c which is already in uppercase.", ch);
    }
    else{
        printf("Invalid input!!");
    }
    
    
    return 0;
}