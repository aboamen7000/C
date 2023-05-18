#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
  * get_op_func - function that selects the correct function
  * to perform the operation asked by the user.
  * @s: character ptr pointing
  *
  * Return: 0 succcessful
  */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
int index = 0;
while (index < 5)
{
if (strcmp(s, ops[index].op) == 0)
{
return (ops[index].f);
}
index++;
}
return (0);
}

