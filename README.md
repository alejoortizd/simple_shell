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

### Break down into end to end tests

Explain what these tests test and why

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```


## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [C]([https://en.wikipedia.org/wiki/C_(programming_language)](https://en.wikipedia.org/wiki/C_(programming_language))) - Programming language.



## Authors
* **Oscar Rodriguez** - [Github](https://github.com/oscarmrt)
* **Daniel Quintero** - [Github](https://github.com/dgquintero)
* **David Ortiz** - [Github](https://github.com/daod2003)


## License

Simple_shell has an open source license [Open Source Definition](https://opensource.org/osd) — in brief, they allow software to be freely used, modified, and shared

## Acknowledgments

* Michelle
* Arturo
* Gonzalo
* Alejandro