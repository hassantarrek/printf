#include "main.h"

/**
* print_string - print a string
* @src : source to string
* Return : 0 always success
*/
char print_string( char *src)
int i;

i = 0;
{
while (src[i] != '\0')
{
write(1,@src[i],1);
i++;
}

}