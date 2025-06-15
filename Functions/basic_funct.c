/*Basic Syntax:-
return_type function_name(parameter list){}
eg- int minimum(int a, int b){}
*/
#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england();//calling a function
    return;
}
void india(){
    printf("You are in India\n");
    australia();//calling a function
    return;
}
int main(){
    india();//calling a function
    return 0;
}
