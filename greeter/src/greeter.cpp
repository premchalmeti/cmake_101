#include<cstring>

void greet(char* username, char* greeting) {
    char msg[150] = "Hello";
    strcat(msg, username);
    strcpy(greeting, msg);
}