# :shell: Simple_shell :shell:

A shell is a command line interpreter that takes an input in form of commands, processes it, and then gives an output.

## Getting Started

When you run the shell ./simple_shell on the terminal, the shell issues a command prompt (cisfun$), where you can type your input and is goint to be executed when you hit Enter. The output or the result that you asked for, will be displayed on the terminal.

### Prerequisites

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your C programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   No more than 5 functions per file
-   All your header files should be include guarded
-   Use system calls only when you need to ([why?](https://intranet.hbtn.io/rltoken/StgX3y26fwPNV_DqlZLErw "why?"))

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
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
./hsh
```

## Running the tests

The shell works like this in interactive mode:

```
$ ./shell
#Cisfun$ ls -lt

total 48

-rw-rw-r-- 1 vagrant vagrant  44 Nov 25 20:24 AUTHORS
-rwxrwxr-x 1 vagrant vagrant 13673 Nov 25 20:22 shell
-rw-rw-r-- 1 vagrant vagrant  2011 Nov 25 20:22 shell.c
-rwxrw-r-- 1 vagrant vagrant  1924 Nov 25 20:22 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant 319 Nov 25 18:34 holberton.h
drwxrwxr-x 2 vagrant vagrant  4096 Nov 25 18:34 shell_test_suite
-rw-rw-r-- 1 vagrant vagrant  2571 Nov 25 17:45 README.md

#Cisfun$
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