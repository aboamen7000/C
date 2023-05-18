# 0x04. C - More functions, more nested loops

## Resources

- Lesson 1 : [concept](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- Lesson 2 : [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- Lesson 3 : [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- Lesson 4 : [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- Lesson 5 : [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---
<details>
<summary><a href="./0-isupper.c">0. isupper</a></summary><br>

Write a function that checks for uppercase character.
   - Prototype: `int _isupper(int c);`
   - Returns `1` if `c` is uppercase
   - Returns `0` otherwise
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-isupper.c -o 0-isuper`

</details>

<details>
<summary><a href="./1-isdigit.c">1. isdigit</a></summary><br>

Write a function that checks for a digit (`0 through 9`).
   - Prototype: `int _isupper(int c);`
   - Returns `1` if `c` is digit
   - Returns `0` otherwise
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-isdigit.c -o 1-isdigit`

</details>

<details>
<summary><a href="./2-mul.c">2. Collaboration is multiplication</a></summary><br>

Write a function that multiplies two integers.
   - Prototype: `int mul(int a, int b);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-mul.c -o 2-mul`

</details>

<details>
<summary><a href="./3-print_numbers.c">3. The numbers speak for themselves</a></summary><br>

Write a function that prints the numbers, from `0` to `9`, followed by a new line.
   - Prototype: `void print_numbers(void);`
   - You can only use `_putchar` twice in your code
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-print_numbers.c -o 3-print_numbers`

</details>

<details>
<summary><a href="./4-print_most_numbers.c">4. I believe in numbers and signs</a></summary><br>

Write a function that prints the numbers, from `0` to `9`, followed by a new line.
   - Prototype: `void print_most_numbers(void);`
   - Do not print `2 and 4`
   - You can only use `_putchar` twice in your code
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers`

</details>

<details>
<summary><a href="./5-more_numbers.c">5. Numbers constitute the only universal language</a></summary><br>

Write a function that prints 10 times the numbers, from `0 to 14`, followed by a new line.
   - Prototype: `void more_numbers(void);`
   - You can only use `_putchar` three times in your code
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-more_numbers.c -o 5-more_numbers`

</details>

<details>
<summary><a href="./6-print_line.c">6. The shortest distance between two points is a straight line</a></summary><br>

Write a function that prints 10 times the numbers, from `0 to 14`, followed by a new line.
   - Prototype: `void print_line(int n);`
   - You can only use `_putchar` function to print
   - Where `n` is the number of times the character `_` should be printed
   - The line should end with a `\n`
   - If `n` is `0` or less, the function should only print `\n`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-print_line.c -o 6-lines`

</details>

<details>
<summary><a href="./7-print_diagonal.c">7. I feel like I am diagonally parked in a parallel universe</a></summary><br>

Write a function that draws a diagonal line on the terminal.
   - Prototype: `void print_diagonal(int n);`
   - You can only use `_putchar` function to print
   - Where `n` is the number of times the character `\` should be printed
   - The line should end with a `\n`
   - If `n` is `0` or less, the function should only print a `\n`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_diagonal.c -o 7-diagonals`

</details>

<details>
<summary><a href="./8-print_square.c">8. You are so much sunshine in every square inch</a></summary><br>

Write a function that prints a square, followed by a new line.
   - Prototype: `void print_square(int size);`
   - You can only use `_putchar` function to print
   - Where `size` is the size of the square
   - If `size` is `0` or less, the function should print only a new line
   - Use the character `#` to print the square
   - Below is the assembly code of the program with comments.

```asm
   <main>:       endbr64
   <main+4>:     push   rbp						; store base pointer addr on top of the stack
   <main+5>:     mov    rbp,rsp						; make the stack pntr addr to be the new base pntr addr
   <main+8>:     mov    edi,0x2						; moves 2 so as to be passed in the function
   <main+13>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+18>:    mov    edi,0xa						; moves 10 so as to be passed in the function
   <main+23>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+28>:    mov    edi,0x0						; moves 0 so as to be passed in the function
   <main+33>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+38>:    mov    eax,0x0						; clears eax [rax]
   <main+43>:    pop    rbp						; get's back the address of the base pointer [rbp]
   <main+44>:    ret
   <print_square>:       endbr64
   <print_square+4>:     push   rbp					; store base pntr addr on top of the stack
   <print_square+5>:     mov    rbp,rsp					; make the stack pntr addr to be the new base pntr addr
   <print_square+8>:     sub    rsp,0x20				; allocate 20 bytes on the stack
   <print_square+12>:    mov    DWORD PTR [rbp-0x14],edi		; argument value being stored in the stack [rbp-ox14]
   <print_square+15>:    mov    DWORD PTR [rbp-0x8],0x1                 ; first loop, moves 0x1 to the stack [rbp-0x8]
   <print_square+22>:    jmp    0x5555555551e4 <print_square+69>	; jump to [1]
   <print_square+24>:    mov    DWORD PTR [rbp-0x4],0x1			; [2] second loop, moves 0x1 to the stack [rbp-0x4]
   <print_square+31>:    jmp    0x5555555551ce <print_square+47>	; jump to [3]
   <print_square+33>:    mov    edi,0x23				; [4] moves character '#' in hex 0x23 to edi arg1
   <print_square+38>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+43>:    add    DWORD PTR [rbp-0x4],0x1			; increament [rbp-0x4] by 1
   <print_square+47>:    mov    eax,DWORD PTR [rbp-0x4]			; [3] mov value stored at [rbp-0x4] to eax
   <print_square+50>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value stored in [rbp-0x14]
   <print_square+53>:    jle    0x5555555551c0 <print_square+33>	; if less or equal jump to [4]
   <print_square+55>:    mov    edi,0xa					; moves character '\n' in hex 0xa to edi arg1
   <print_square+60>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+65>:    add    DWORD PTR [rbp-0x8],0x1			; increament [rbp-0x8] by 1
   <print_square+69>:    mov    eax,DWORD PTR [rbp-0x8]			; [1] mov value stored at [rbp-0x8] to eax
   <print_square+72>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value in [rbp-0x14]
   <print_square+75>:    jle    0x5555555551b7 <print_square+24>	; if less or equal jump to [2]
   <print_square+77>:    nop						; nop sled
   <print_square+78>:    nop						; nop sled
   <print_square+79>:    leave						; leave function
   <print_square+80>:    ret						; return to main function
```

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-print_square.c -o 8-squares`

</details>

<details>
<summary><a href="./9-fizz_buzz.c">9. Fizz Buzz</a></summary><br>

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1 to 100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
   - Each number or word should be separated by a space
   - You are allowed to use the standard library
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz`

</details>

<details>
<summary><a href="./10-print_triangle.c">10. Triangles</a></summary><br>

Write a function that prints a square, followed by a new line.
   - Prototype: `void print_triangle(int size);`
   - You can only use `_putchar` function to print
   - Where `size` is the size of the triangle
   - If `size` is `0` or less, the function should print only a new line
   - Use the character `#` to print the triangle
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-print_triangle.c -o 10-triangles`

</details>

<details>
<summary><a href="./100-prime_factor.c">11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic</a></summary><br>

The prime factors of `1231952` are `2, 2, 2, 2, 37` and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
   - You are allowed to use the standard library
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

</details>

<details>
<summary><a href="./101-print_number.c">12. Numbers have life; they're not just symbols on paper</a></summary><br>

Write a function that prints an integer.
   - Prototype: `void print_number(int n);`
   - You can only use `_putchar` function to print
   - You are not allowed to use `long`
   - You are not allowed to use arrays or pointers
   - You are not allowed to hard-code special values
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/101-main.c 101-print_number.c -o 101-print_numbers`

</details>
