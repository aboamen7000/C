# 0x0B. C - malloc, free

## Resources
- Lesson 1 : [Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- Lesson 2 : [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)
- Lesson 3 : [Dynamic Memory Allocation](../dynamic_memory_alloc)
- Lesson 4 : [Quick overview of malloc & free](../references/DynamicMemoryAllocation.pdf)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---
<details>
<summary><a href="./0-create_array.c">0. Float like a butterfly, sting like a bee.</a></summary><br>

Write a function that creates an array of chars, and initializes it with a specific char.
  - Prototype: `char *create_array(unsigned int size, char c);`
	- Returns `NULL` if size = `0`.
	- Returns a pointer to the array, or `NULL` if it fails.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a`
</details>

<details>
<summary><a href="./1-strdup.c">1. The woman who has no imagination has no wings</a></summary><br>

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
   - Prototype: `char *_strdup(char *str);`
	 - The `_strdup()`  function returns a pointer to a new string which is a duplicate of the string `str`.
	 - Memory for the new string is obtained with `malloc`, and can be freed with `free`.
	 - Returns `NULL` if str = NULL.
	 - On success, the `_strdup`  function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.
	 - **FYI:** The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s`
</details>

<details>
<summary><a href="./2-str_concat.c">2. He who is not courageous enough to take risks will accomplish nothing in life</a></summary><br>

Write a function that concatenates two strings.
   - Prototype: `char *str_concat(char *s1, char *s2);`
	 - The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
	 - If `NULL` is passed, treat it as an empty string.
	 - The function should return `NULL` on faliure.
	 - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c`
</details>

<details>
<summary><a href="./3-alloc_grid.c">3. If you even dream of beating me you'd better wake up and apologize</a></summary><br>

Write a function that returns a pointer to a 2 dimensional array of integers.
  - Prototype: `int **alloc_grid(int width, int height);`
	- Each element of the grid should be initialized to `0`.
	- The function should return `NULL` on faliure.
	- If `width` or `height` is `0` or negative, return `NULL`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g`
</details>

<details>
<summary><a href="./4-free_grid.c">4. It's not bragging if you can back it up</a></summary><br>

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.
   - Prototype: `void print_rev(char *s);`
   - Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_rev.c -o 4-print_rev`
</details>

<details>
<summary><a href="./100-argstostr.c">5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe</a></summary><br>

Write a function that concatenates all the arguments of your program.
  - Prototype: `char *argstostr(int ac, char **av);`
	- Returns `NULL` if `ac == 0` or `av == NULL`
	- Returns a pointer to a new string, or `NULL` if it fails.
	- Each argument should be followed by a `\n` in the new string.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args`
</details>

<details>
<summary><a href="./101-strtow.c">6. I will show you how great I am</a></summary><br>

Write a function that splits a string into words.
  - Prototype: `char **strtow(char *str);`
	- The function returns a pointer to an array of strings (words).
	- Each element of this array should contain a single word, null-terminated.
	- The last element of the returned array should be `NULL`.
	- Words are separated by spaces.
	- Returns `NULL` if `str == NULL` or `str == ""`.
	- If your function fails, it should return `NULL`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow`
</details>
