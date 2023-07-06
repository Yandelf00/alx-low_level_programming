#include "main.h"

/**
  * get_endianness -  function that checks the endianness.
  */

int get_endianness(void)
{
    int value = 1;
    char ptr = (char)&value;

    if (*ptr == 1)
        return (1);
    else
        return (0);
}
