# 0x00 Shell Basics

## Resources

- Lesson 1 : [What is "the Shell"?](http://linuxcommand.org/lc3_lts0010.php)
- Lesson 2 : [Navigation](http://linuxcommand.org/lc3_lts0020.php)
- Lesson 3 : [Looking Around](http://linuxcommand.org/lc3_lts0030.php)
- Lesson 4 : [A Guided Tour](http://linuxcommand.org/lc3_lts0040.php)
- Lesson 5 : [Manipulating Files](http://linuxcommand.org/lc3_lts0050.php)
- Lesson 6 : [Working With Commands](http://linuxcommand.org/lc3_lts0060.php)
- Lesson 7 : [Reading Man pages/Read the Manual](http://linuxcommand.org/lc3_man_pages/man1.html)
- Lesson 8 : [Keyboard shortcuts for Bash](https://www.howtogeek.com/181/keyboard-shortcuts-for-bash-command-shell-for-ubuntu-debian-suse-redhat-linux-etc/)
- Lesson 9 : [LTS](https://wiki.ubuntu.com/LTS)
- Lesson 10 : [Shebang](https://en.wikipedia.org/wiki/Shebang_%28Unix%29)

<details>
<summary>
man or help :
</summary>


- `cd`
- `ls`
- `pwd`
- `less`
- `file`
- `ln`
- `cp`
- `mv`
- `rm`
- `mkdir`
- `type`
- `which`
- `help`
- `man`
</details>

----

## Tasks

0. [Where am I?](./0-current_working_directory) : A script that prints the absolute path of the current working directory.
1. [What's in there?](./1-listit) : A script that displays the contents of your current directory.
2. [There is no place like home](./2-bring_me_home) : A script that changes the working directory to the user's home directory.
3. [The long format](./3-listfiles) : A script that displays the current directory contents in a long format.
4. [Hidden files](./4-listmorefiles) : A script that displays the current directory contents including hidden files.
5. [I loce numbers](./5-listfilesdigitonly) : A script that displays the current directory contents, using long format, while displaying group IDs in numeral and show hidden files.
6. [Welcome holberton](./6-firstdirectory) : A script that will create a directory named `my_first_directory` in the `/tmp/` directory.
7. [Betty in Holberton](./7-movethatfile) : A scipt that will move a file called `betty` from home to the new directory created above.
8. [Bye bye Betty](./8-firstdelete) : A script that will delete file `betty` from the new location.
9. [Bye bye Holberton](./9-firstdirdeletion) : A script that will delete the directory `my_first_directory` that is in the `/tmp/` directory path.
10. [Back to the future](./10-back) Change working directory to the previous one.
11. [Lists](./11-lists) List all files (*even ones with names beginning with a period character, which are normally hidden*) in the current directory and the parent of the working directory and the /boot directory (in this order), in long format.
12. [File type](./12-file_type) A script that prints the type of the named file `iamafile`. The `iamafile` will be in the `/tmp/` directory when we will run your script.
13. [We are symbols, and inhabit symbols](./13-symbolic_link) Create a symbolic link to `/bin/ls`, named `__ls__`. The symbolic link should be created in the current working directory.
14. [Copy HTML files](./14-copy_html) Create a script that copies all `html` files from the current working directory to the parent working directory while only copying files that did not exist.
15. [Let's move](./100-lets_move) A script that moves all files beginning with an uppercase letter to the directory `/tmp/u`.
16. [Clean Emacs](./101-clean_emacs) A script that deletes all files in the current directory that end with the character `~`.
17. [Tree](./102-tree) A script that creates the directory `welcome/`, `welcome/to/` and `welcome/to/school`.
18. [Life is a series of commas, not periods](./103-commas) A script that lists all the files and directories of the current directory separated by commas `,`.
19. [File type: Holberton](./holberton.mgc) Create a magic file `school.mgc` that can be used with the command `file` to detect `School` data files always contain the string `SCHOOL` at offset 0.
