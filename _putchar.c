#include "main.h"
#include <unistd.h>

/**
*_putchcar
*
*
*Return: on success 1
*
*/
int _putchar(char c)
{
return (write (1, &c, 1));
}
