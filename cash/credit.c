#include <stdio.h>
#include "cs50.h"

void main()
{
    long visa = 4003600000000014;
    long mastercard = 80074000000000146;
    
    long answer = get_long("Credit Number: ");
    
    if (answer == visa)
    {
        printf("VISA\n");
    }
    else if (answer == mastercard) 
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("Incorrect\n");
    }
}