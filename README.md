# **`printf`**

>Write your own `printf` function.


## Welcome
A rebuild of the standard `printf` function in C. Our project required a function capable of printing with the `%d`, `%c`, `%s`, and `%%` specifiers to standard output. `printf` returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.

## The Holberton Way
Holberton students rarely rely on the C standard library, instead building our own functions and headers as we learn. Here you will see a variety of our builds put to use to build a simple re-imagining of `printf`.

## The Beast that is `printf`
It was daunting to approach a reinvention of `printf`. This is possibly the most refined function in C, with human hours spent on it thought to surpass a decade.

## Format Specifiers
Our team chose to add `%x` ,`%X`, `%b`, `%o`, `%u`, `%r`, `%R`, and `%p` formatting. We relied on the library we have been building at Holberton as well as new concepts gathered during this project.

### Supported Format Types

| Type  | Output |
|:-----:|:------:|
| c | single character |
| s | string |
| r | string in reverse |
| R | string in rot13 |
| d | integer in decimal |
| i | integer |
| % | percent sign |
| x | lowercase hex |
| X | uppercase hex |
| b | binary |
| o | octal |
| u | unsigned |
| p | pointer |

## Deployment
This project was released soon after COVID - 19 precautions were adopted at our Holberton campus, so Cynthia and I worked both remotely and in person in our private homes for the duration. We set up a [Trello](https://trello.com) board, divided tasks, and kept each other on the same page as we went.

## Built With

* [Ubuntu](https://ubuntu.com/)
* [GitHub](https://github.com/)
* [StackEdit](https://stackedit.io/)

# Project Requirements
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project

### Prototype
#include "holberton.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
### Return Value
* The number of characters printed.

## Authors
* [**Cynthia Taylor**](https://github.com/cg-taylor) - [*@wholockwars*](https://twitter.com/wholockwars)
* [**Tabitha O'Melay**](https://github.com/tabbykatz) - [*@tabby__katz*](https://twitter.com/tabby__katz)

## License

This project is licensed under the Holberton School Software Engineering Program.

## Acknowledgments

* The Framework
* Cohort 11
* Holberton's CPO, Poppy

