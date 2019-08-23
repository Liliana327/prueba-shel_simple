<img align="center" src="https://hackernoon.com/hn-images/0*TEeZWyrO8mI2hXwE" width="30%"/>

---

Here you will find the function that makes similar proccesses of a command interpreter.
This repository stores the code of a Simple Shell.

## Files
---
| File | Description |
| ---- | ------- |
| _printf.c | first inlet of arguments evaluation  |
| _case_c | function that evaluates which format its going to be used |
| _cases_num.c , _cases_lis.c | Auxiliar functions for integers and string formats |
| conversion.c | Function that allows conversion from unsigned int to bin, oct, dec and hex base|
| holberton.h | header file that contains prototypes functions |
| _putchar.c  | function that improves output from a system call to wirte data out of buffer |


## Compilation 
First compile all project with a main program that allows you to invoke principal function _printf.c

```sh 
$gcc -Wall -Wextra -Werror -pedantic  *.c holberton.h -o <nameofexecutablefile>
```
Besides that execute it for seein the output at shell

```sh 
$./"nameofexecutable"
```
## Example

