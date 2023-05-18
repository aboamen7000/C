#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
<<<<<<< HEAD
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: hold argc counter numb line passed
 * @argv: as pointer args arrays passed
 * Return: 0 done,  1: failed
 */

/**
 * smallest_co - get money amount as array of coin.
 * @money: The amount of money
 * @co: array of coin
 * @co_num: number of coin
 * Return: 0 done,  1: failed
 */

int smallest_co(int money, int *co, int co_num)
{
if (money < 0)
{
return -1;
}
else if (money == 0)
{
return 0;
}
else
{
int begin_num = -1;
for (int i = 0; i < co_num; i++)
{
int co_numero = min_coins(money - co[i], co, co_num);
if (co_numero >= 0 && (begin_num < 0 || co_numero < begin_num))
{
begin_num = co_numero + 1;
}
}
return begin_num;
}
}

int main(int argc, char *argv[])
{
int money, res;
int co[] = {25, 10, 5, 2, 1};
int co_size_index = sizeof(co) / sizeof(co[0]);
/** create if statment to check through the data, Convert the amount to an integer */
=======
* main - prints the minimum number of coins for an amount of money
* @argc: argc counter numb line passed
* @argv: pointer args arrays passed
* Return: minimum number of coin, 0 with (-) amount, 1 null
*/

int main(int argc, char *argv[])
{
int num, coi = 0;

/* validate input */
>>>>>>> 9e67e0968bf07269812180e239191441f7c6eafb
if (argc != 2)
{
printf("Error\n");
return 1;
}
<<<<<<< HEAD
money = atoi(argv[1]);
res = smallest_co(money, co, co_size_index);
if (res < 0)
{
printf("0\n");
}
else
{
printf("%d\n", res);
}
=======

if (argv[1][0] == '-')
{
printf("0\n");
return (0);
}

/* convert string to int and calculate coins */
num = atoi(argv[1]);

coi = coi + num / 25;
num = num % 25;
coi = coi + num / 10;
num = num % 10;
coi = coi + num / 5;
num = num % 5;
coi = coi + num / 2;
num = num % 2;
coi = coi + num / 1;

printf("%d\n", coi);
>>>>>>> 9e67e0968bf07269812180e239191441f7c6eafb
return (0);
}
