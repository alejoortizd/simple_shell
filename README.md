# :shell: Simple_shell :shell:

A shell is a command line interpreter that takes an input in form of commands, processes it, and then gives an output.

## Table of contents

- 1. [Getting Started](#Getting-Started)
- 1.1. [Prerequisites](#Prerequisites)
- 1.2. [Installing](#Installing)
- 2. [Running the tests](#Running-the-tests)
- 3. [Built With](#Built-With)
- 4. [Authors](#Authors)
- 5. [License](#License)
- 6. [Acknowledgments](#Acknowledgments)
## Getting Started

When you run the shell ./test on the terminal, the shell issues a command prompt (cisfun$), where you can type your input and is goint to be executed when you hit Enter. The output or the result that you asked for, will be displayed on the terminal.

### Prerequisites

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your C programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   No more than 5 functions per file
-   All your header files should be include guarded
-   Use system calls only when you need to

```
gcc -Wall -Werror -Wextra -pedantic *.c -o test
```

### Installing

Step by step how to run simple_shell

*First of all clone the repository*

```
git clone "https://github.com/daod2003/simple_shell.git"
```

*Go to the directory simple_shell*
```
cd simple_shell
```
*Compile it*
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
*Run it on interactive mode*
```
./test
```

## Running the tests

The shell works like this in interactive mode:

```
$ ./test
#Cisfun$ ls -lt
total 64
-rw-rw-r-- 1 vagrant vagrant  3208 Nov 27 20:36 README.md
-rw-rw-r-- 1 vagrant vagrant   145 Nov 27 18:45 _putchar.c
-rw-rw-r-- 1 vagrant vagrant  1099 Nov 27 18:45 shell.c
-rw-rw-r-- 1 vagrant vagrant   468 Nov 27 16:58 holberton.h
-rw-rw-r-- 1 vagrant vagrant  1006 Nov 27 16:58 path.c
-rw-rw-r-- 1 vagrant vagrant   751 Nov 27 16:58 strfuncs2.c
-rw-rw-r-- 1 vagrant vagrant   609 Nov 27 16:58 strfuncs.c
-rwxrwxr-x 1 vagrant vagrant 13648 Nov 27 16:58 test
-rw-rw-r-- 1 vagrant vagrant   243 Nov 27 15:26 AUTHORS
-rwxrw-r-- 1 vagrant vagrant   275 Nov 26 20:18 make_authors
-rwxrw-r-- 1 vagrant vagrant  1544 Nov 26 01:03 man_1_simple_shell
drwxrwxr-x 2 vagrant vagrant  4096 Nov 25 18:34 shell_test_suite

#cisfun$
```
No interactive mode:

```
$ echo ls | ./test

total 64
-rw-rw-r-- 1 vagrant vagrant  3208 Nov 27 20:36 README.md
-rw-rw-r-- 1 vagrant vagrant   145 Nov 27 18:45 _putchar.c
-rw-rw-r-- 1 vagrant vagrant  1099 Nov 27 18:45 shell.c
-rw-rw-r-- 1 vagrant vagrant   468 Nov 27 16:58 holberton.h
-rw-rw-r-- 1 vagrant vagrant  1006 Nov 27 16:58 path.c
-rw-rw-r-- 1 vagrant vagrant   751 Nov 27 16:58 strfuncs2.c
-rw-rw-r-- 1 vagrant vagrant   609 Nov 27 16:58 strfuncs.c
-rwxrwxr-x 1 vagrant vagrant 13648 Nov 27 16:58 test
-rw-rw-r-- 1 vagrant vagrant   243 Nov 27 15:26 AUTHORS
-rwxrw-r-- 1 vagrant vagrant   275 Nov 26 20:18 make_authors
-rwxrw-r-- 1 vagrant vagrant  1544 Nov 26 01:03 man_1_simple_shell
drwxrwxr-x 2 vagrant vagrant  4096 Nov 25 18:34 shell_test_suite
```
## Built With

* [C]([https://en.wikipedia.org/wiki/C_(programming_language)](https://en.wikipedia.org/wiki/C_(programming_language))) - Programming language.


## Authors
* **Oscar Rodriguez** - [Github](https://github.com/oscarmrt) - [Twitter](https://twitter.com/OscaRT07)
* **Daniel Quintero** - [Github](https://github.com/dgquintero) - [Twitter](https://twitter.com/danielq02)
* **David Ortiz** - [Github](https://github.com/daod2003) - [Twitter](https://twitter.com/alejoortizd)

## License

Simple_shell has an open source license [Open Source Definition](https://opensource.org/osd) — in brief, they allow software to be freely used, modified, and shared

## Acknowledgments
Big thanks to Michelle Molina, Arturo Victoria and Gonzalo Gomez for helping us. 