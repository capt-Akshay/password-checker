#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_strong_password(const char *password)
{
    int len = strlen(password);
    int has_uppercase = 0;
    int has_lowercase = 0;
    int has_digit = 0;
    int has_special = 0;

    if (len < 8)
    {
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        char ch = password[i];

        if (isupper(ch))
        {
            has_uppercase = 1;
        }
        else if (islower(ch))
        {
            has_lowercase = 1;
        }
        else if (isdigit(ch))
        {
            has_digit = 1;
        }
        else if (ispunct(ch))
        {
            has_special = 1;
        }
        else
        {
            // Handle any other characters (e.g., spaces) if needed
        }
    }

    return has_uppercase && has_lowercase && has_digit && has_special;
}

int main() {
    char password[100];

    printf("Enter your password : ");
    scanf("%s",password);
     
     if(is_strong_password(password)){
        printf("strong password!\n");
     } else{
        printf("weak password!\n");
     }
}