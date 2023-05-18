# 0x05. C - Pointers, arrays and strings

## Resources
- Lesson 1 : [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- Lesson 2 : [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- Lesson 3 : [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- Lesson 4 : [Memory Layout of C program](https://aticleworld.com/memory-layout-of-c-program/)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---
<details>
<summary><a href="./0-reset_to_98.c">0. 98 Battery st.</a></summary><br>

Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
   - Prototype: `void reset_to_98(int *n);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-reset_to_98.c -o 0-98`
</details>

<details>
<summary><a href="./1-swap.c">1. Don't swap horses in crossing a stream</a></summary><br>

Write a function that swaps the values of two integers.
   - Prototype: `void swap_int(int *a, int *b);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-swap.c -o 1-swap`
</details>

<details>
<summary><a href="./2-strlen.c">2. This report, by its very length, defends itself against the rist of being read</a></summary><br>

Write a function that returns the length of a string.
   - Prototype: `int _strlen(char *s);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-strlen.c -o 2-strlen`
</details>

<details>
<summary><a href="./3-puts.c">3. I do not fear computers. I fear the lack of them</a></summary><br>

Write a function that prints a string, followed by a new line, to `stdout`.
   - Prototype: `void _puts(char *str);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-puts.c -o 3-puts`
</details>

<details>
<summary><a href="./4-print_rev.c">4. I do not fear computers. I fear the lack of them</a></summary><br>

Write a function that prints a string, in reverse, followed by a new line.
   - Prototype: `void print_rev(char *s);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_rev.c -o 4-print_rev`
</details>

<details>
<summary><a href="./5-rev_string.c">5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes</a></summary><br>

Write a function that prints a string, in reverse, followed by a new line.
   - Prototype: `void rev_string(char *s);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string`
   - Below is the assembly code of the `rev_string` function with comments.
   ```sh
   0x00000000000011d7 <+0>:     endbr64                         ; NOP instruction
   0x00000000000011db <+4>:     push   rbp                      ; store current base pointer at the top of the stack
   0x00000000000011dc <+5>:     mov    rbp,rsp                  ; make current stack pointer to be a base pointer
   0x00000000000011df <+8>:     mov    QWORD PTR [rbp-0x18],rdi ; move arg1 our string from main func to the stack [$rbp-0x18]
   0x00000000000011e3 <+12>:    mov    DWORD PTR [rbp-0x8],0x0  ; start of first for loop that gets string length (set var l = 0) l = [$rbp-0x8]
   0x00000000000011ea <+19>:    jmp    0x11f0 <rev_string+25>   ; jmp to --> {0x11f0} address
   0x00000000000011ec <+21>:    add    DWORD PTR [rbp-0x8],0x1  ; increament var l [$rbp-0x8] by 1
   0x00000000000011f0 <+25>:    mov    eax,DWORD PTR [rbp-0x8]  ; move value of var l [$rbp-0x8] to register [eax]
   0x00000000000011f3 <+28>:    movsxd rdx,eax                  ; move value of var l [$rbp-0x8] from 32bit [eax] reg to 64bit [rdx] reg
   0x00000000000011f6 <+31>:    mov    rax,QWORD PTR [rbp-0x18] ; move string to a 64bit reg [rax]
   0x00000000000011fa <+35>:    add    rax,rdx                  ; increament [rax] by the value of [rdx] == (rax[l++])
   0x00000000000011fd <+38>:    movzx  eax,BYTE PTR [rax]       ; move current character in array being pointed to [eax]
   0x0000000000001200 <+41>:    test   al,al                    ; ensures the value in [al] isn't negative
   0x0000000000001202 <+43>:    jne    0x11ec <rev_string+21>   ; if test is not zero jumps back to --> {0x11ec} address end of first loop
   0x0000000000001204 <+45>:    mov    DWORD PTR [rbp-0x4],0x0  ; start of second for loop that swapping characters (set var i = 0) i = [rbp-0x4]
   0x000000000000120b <+52>:    jmp    0x1262 <rev_string+139>  ; jmp to --> {0x1262} address to set up (i < l / 2)
   0x000000000000120d <+54>:    mov    eax,DWORD PTR [rbp-0x4]  ; move value at [rbp-0x4] to [eax]
   0x0000000000001210 <+57>:    movsxd rdx,eax                  ; move value at [eax] from 32bit reg to 64 bit reg [rdx]
   0x0000000000001213 <+60>:    mov    rax,QWORD PTR [rbp-0x18] ; move our string to register [rax]
   0x0000000000001217 <+64>:    add    rax,rdx                  ; increament [rax] by the value of [rdx] == (rax[i++])
   0x000000000000121a <+67>:    movzx  eax,BYTE PTR [rax]       ; mov current character in array being pointed to [eax] || prepping to swap starts here
   0x000000000000121d <+70>:    mov    BYTE PTR [rbp-0x9],al    ; store character value to the stack at [$rbp-0x9] == ch = s[i]
   0x0000000000001220 <+73>:    mov    eax,DWORD PTR [rbp-0x8]  ; move string length to [eax]
   0x0000000000001223 <+76>:    sub    eax,DWORD PTR [rbp-0x4]  ; subract value in [rbp-0x4] from [eax] and store in [eax]
   0x0000000000001226 <+79>:    cdqe                            ; sign-extends a DWORD (32-bit value) in the [eax] reg to a QWORD (64-bit value) [rax] reg || swap of first value starts here
   0x0000000000001228 <+81>:    lea    rdx,[rax-0x1]            ; loads the value at [rax] minus 1 to [rdx]
   0x000000000000122c <+85>:    mov    rax,QWORD PTR [rbp-0x18] ; moves the string to [rax]
   0x0000000000001230 <+89>:    add    rax,rdx                  ; increaments [rax] by the value in [rdx] (rax[rdx++])
   0x0000000000001233 <+92>:    mov    edx,DWORD PTR [rbp-0x4]  ; moves value in [$rbp-0x4] to [edx]
   0x0000000000001236 <+95>:    movsxd rcx,edx                  ; moves a DWORD (32-bit value) in [edx] reg to a QWORD (64-bit value) [rcx] reg
   0x0000000000001239 <+98>:    mov    rdx,QWORD PTR [rbp-0x18] ; moves the string to [rdx]
   0x000000000000123d <+102>:   add    rdx,rcx                  ; increaments [rdx] by the value in [rcx] (rdx[rcx++])
   0x0000000000001240 <+105>:   movzx  eax,BYTE PTR [rax]       ; moves char value at [rax] to [eax]
   0x0000000000001243 <+108>:   mov    BYTE PTR [rdx],al        ; moves value at [al] to [rdx]
   0x0000000000001245 <+110>:   mov    eax,DWORD PTR [rbp-0x8]  ; moves value at [$rbp-0x8] to [eax]
   0x0000000000001248 <+113>:   sub    eax,DWORD PTR [rbp-0x4]  ; subtracts value at [$rbp-0x8] from [eax]
   0x000000000000124b <+116>:   cdqe                            ; sign-extends a DWORD (32-bit value) in the [eax] reg to a QWORD (64-bit value) [rax] reg || swap of second value starts here
   0x000000000000124d <+118>:   lea    rdx,[rax-0x1]            ; loads the value at [rax] minus 1 to [rdx]
   0x0000000000001251 <+122>:   mov    rax,QWORD PTR [rbp-0x18] ; moves the string to [rax]
   0x0000000000001255 <+126>:   add    rdx,rax                  ; increaments [rdx] by the value in [rax] (rdx[rax++])
   0x0000000000001258 <+129>:   movzx  eax,BYTE PTR [rbp-0x9]   ; moves value at [$rbp-0x9] to [eax]
   0x000000000000125c <+133>:   mov    BYTE PTR [rdx],al        ; moves value at [al] to [rdx]
   0x000000000000125e <+135>:   add    DWORD PTR [rbp-0x4],0x1  ; increament value [$rbp-0x4] by 1 == ++i
   0x0000000000001262 <+139>:   mov    eax,DWORD PTR [rbp-0x8]  ; [rbp-0x8] string length || moves the string length to eax
   0x0000000000001265 <+142>:   mov    edx,eax                  ; move string length to [edx]
   0x0000000000001267 <+144>:   shr    edx,0x1f                 ; shift string length == 9 to the right by 31 times == 0
   0x000000000000126a <+147>:   add    eax,edx                  ; add value [edx] == 0 to [eax]
   0x000000000000126c <+149>:   sar    eax,1                    ; shift [eax] value == 9 to the right by 1 time
   0x000000000000126e <+151>:   cmp    DWORD PTR [rbp-0x4],eax  ; compare [eax] and value at [rbp-0x4]
   0x0000000000001271 <+154>:   jl     0x120d <rev_string+54>   ; if its less jump to --> {0x120d} || end loop of swapping
   0x0000000000001273 <+156>:   nop                             ; nop
   0x0000000000001274 <+157>:   nop                             ; nop
   0x0000000000001275 <+158>:   pop    rbp                      ; get base pointer from the top of the stack
   0x0000000000001276 <+159>:   ret                             ; return to address [rip]
   ```
</details>

<details>
<summary><a href="./6-puts2.c">6. Half the lies they tell about me aren't true</a></summary><br>

Write a function that prints every other character of a string, starting with the first character, followed by a new line.
   - Prototype: `void puts2(char *str);`
   - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-puts2.c -o 6-puts2`
</details>

<details>
<summary><a href="./7-puts_half.c">7. Winning is only half of it. Having fun is the other half</a></summary><br>

Write a function that prints half of a string, followed by a new line.
   - Prototype: `void puts_half(char *str);`
   - The function should print the second half of the string
   - If the number of characters is odd, the function should print the last n characters of the string, where `n = (length_of_the_string - 1) / 2`
   - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-puts_half.c -o 7-puts_half`
</details>


<details>
<summary><a href="./8-print_array.c">8. Arrays are not pointers</a></summary><br>

Write a function that prints half of a string, followed by a new line.
   - Prototype: `void print_array(int *a, int n);`
   - where `n` is the number of elements of the array to be printed
   - Numbers must be separated by comma, followed by a space
   - The numbers should be displayed in the same order as they are stored in the array
   - ou are allowed to use `printf`
   - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array`
</details>


<details>
<summary><a href="./9-strcpy.c">9. strcpy</a></summary><br>

Write a function that copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
   - Prototype: `char *_strcpy(char *dest, char *src);`
   - Return value: the pointer to dest
   - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/9-main.c 9-strcpy.c -o 9-strcpy`
</details>

<details>
<summary><a href="./100-atoi.c">10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers</a></summary><br>

Write a function that copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
   - Prototype: `int _atoi(char *s);`
   - The number in the string can be preceded by an infinite number of characters
   - You need to take into account all the `-` and `+` signs before the number
   - If there are no numbers in the string, the function must return `0`
   - You are not allowed to use `long`
   - You are not allowed to declare new variables of “type” array
   - You are not allowed to hard-code special values
   - We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code
   - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi`
</details>


<details>
<summary><a href="./101-keygen.c">11. Don't hate the hacker, hate the code</a></summary><br>

Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
  - You are allowed to use the standard library.
	- You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
	- man `srand`, `rand`, `time`.
	- `gdb` and `objdump` can help.
  - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen`
</details>
