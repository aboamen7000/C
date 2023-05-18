# 0x03. C - Debugging

## Resources

- Lesson 1 : [Debugging](https://en.wikipedia.org/wiki/Debugging)
- Lesson 2 : [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

- Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually
----

## Tasks

<details>
<summary><a href="./0-main.c">0. Multiple mains</a></summary><br>

   - First compilation : `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c`
   - Second compilation : `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`

</details>

<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe</a></summary><br>

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
   - compile : `gcc -std=gnu89 1-main.c -o 1-main`

</details>

<details>
<summary><a href="./2-largest_number.c">2. 0 > 972?</a></summary><br>

This program prints the largest of three integers.
   - compile : `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main`

</details>

<details>
<summary><a href="./3-print_remaining_days.c">3. Leap year</a></summary><br>

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

   - First compilation : `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a`
   - Second compilation : `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b`

</details>
