#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 10
int main() {
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_len = sizeof(charset) - 1;
    srand(time(NULL));
    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_len];
    }
    password[PASSWORD_LENGTH] = '\0';
    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        putchar(password[i]);
    }
    putchar('\n');
    
    return 0;
}
