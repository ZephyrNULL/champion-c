#include <stdio.h>
int main()
{
    char original[10] = "Lambogini";
    char new_string[11] = "Lamboginij";

    int i = 0;
    char extra_char = 0;
    
    while(original[i] != '\0'){
        extra_char ^= original[i];
        i++;
    }

    i = 0;
    
    while(new_string[i] != '\0'){
        extra_char ^= new_string[i];
        i++;
    }

    printf("Original: %s\n", original);
    printf("New String: %s\n", new_string);
    printf("This extra character added is: %c\n", extra_char);

    return 0;
}