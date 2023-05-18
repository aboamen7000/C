# 0x0A. C - Argc, argv

## Resources
- Lesson 1 : [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- Lesson 2 : [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- Lesson 3 : [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- Lesson 4 : [How to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---
<details>
<summary><a href="./0-whatsmyname.c">0. It ain't what they call you, it's what you answer to.</a></summary><br>

Write a program that prints its name, followed by a new line.
  - If you rename the program, it will print the new name, without having to compile it again.
	- You should not remove the path before the name of the program.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis`
</details>

<details>
<summary><a href="./1-args.c">1. Silence is argument carried out by other means</a></summary><br>

Write a program that prints the number of arguments passed into it.
  - Your program should print a number, followed by a new line.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs`
</details>

<details>
<summary><a href="./2-args.c">2. The best argument against democracy is a five-minute conversation with the average voter</a></summary><br>

Write a program that prints all arguments it receives.
  - All arguments should be printed, including the first one.
	- Only print one argument per line, ending with a new line.
</details>

<details>
<summary><a href="./3-mul.c">3. Neither irony nor sarcasm is argument</a></summary><br>

Write a program that multiplies two numbers.
  - Your program should print the result of the multiplication, followed by a new line.
	- You can assume that the two numbers and result of the multiplication can be stored in an integer.
	- If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul`
</details>

<details>
<summary><a href="./4-add.c">4. To infinity and beyond</a></summary><br>

Write a program that adds positive numbers.
  - Print the result, followed by a new line.
	- If no number is passed to the program, print 0, followed by a new line.
	- If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`.
	- You can assume that numbers and the addition of all the numbers can be stored in an `int`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add`
</details>

<details>
<summary><a href="./100-argstostr.c">5. Minimal Number of Coins for Change</a></summary><br>

Write a program that prints the minimum number of coins to make change for an amount of money.
  - Usage: `./change cents`
	- Where `cents` is the amount of cents you need to give back.
	- if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`.
	- You should use `atoi` to parse the parameter passed to your program.
	- If the number passed as the argument is negative, print `0`, followed by a new line.
	- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change`
</details>
