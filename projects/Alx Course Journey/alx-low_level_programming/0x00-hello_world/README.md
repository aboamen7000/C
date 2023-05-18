# 0x00. C - Hello, World

## Resources

- Lesson 1 : [concept](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230317%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230317T235555Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=44faf82442922f495f8332412a98b3a396d70459e514511669b83205b94e3d06)
- Lesson 2 : [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- Lesson 3 : [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- Lesson 4 : [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- Lesson 5 : [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- Lesson 6 : [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- Lesson 7 : [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- Lesson 8 : [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- Lesson 9 : [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg)
- Lesson 10 : [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- Lesson 11 : [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)
- Lesson 12 : [Important](https://www.youtube.com/watch?v=OnEF1MexJlI)

<details>
<summary>
man or help :
</summary>


- `printenv`
- `gcc`
- `printf (3)`
- `puts`
- `putchar`
</details>


----

## Tasks

<details>
<summary><a href="./0-preprocessor">0. Preprocessor</a></summary><br>

Write a script that runs a C file through the preprocessor and save the result into another file.
   - The C file name will be saved in the variable $CFILE
   - The output should be saved in the file c
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./1-compiler">1. Compiler</a></summary><br>

Write a script that compiles a C file but does not link.
   - The C file name will be saved in the variable $CFILE
   - The output file should be named the same as the C file, but with the extension .o instead of .c.
   - Example: if the C file is main.c, the output file should be main.o
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./2-assembler">2. Assembler</a></summary><br>

Write a script that generates the assembly code of a C code and save it in an output file.
   - The C file name will be saved in the variable $CFILE
   - The output file should be named the same as the C file, but with the extension .s instead of .c.
   - Example: if the C file is main.c, the output file should be main.s
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./3-name">3. Name</a></summary><br>

Write a script that compiles a C file and creates an executable named cisfun.
   - The C file name will be saved in the variable $CFILE
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./4-puts.c">4. Hello, puts</a></summary><br>

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
   - Use the function puts
   - You are not allowed to use printf
   - Your program should end with the value 0
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./5-printf.c">5. Hello, printf</a></summary><br>

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
   - Use the function printf
   - You are not allowed to use the function puts
   - Your program should return 0
   - Your program should compile without warning when using the -Wall gcc option
   - The *[$CFILE](./source/main.c)* file.

</details>


<details>
<summary><a href="./6-size.c">6. Size is not grandeur, and territory does not make a nation</a></summary><br>

Write a C program that prints the size of various types on the computer it is compiled and run on.
   - You should produce the exact same output as in the example
   - Warnings are allowed
   - Your program should return 0
   - You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./100-intel">7. Intel</a></summary><br>

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
   - The C file name will be saved in the variable $CFILE
   - The output file should be named the same as the C file, but with the extension .s instead of .c.
   - Example: if the C file is main.c, the output file should be main.s
   - The *[$CFILE](./source/main.c)* file.

</details>

<details>
<summary><a href="./101-quote.c">8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity</a></summary><br>

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
   - You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
   - Your program should return 1
   - Your program should compile without any warnings when using the -Wall gcc option
   - The *[$CFILE](./source/main.c)* file.

</details>
