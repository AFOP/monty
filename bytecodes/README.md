# Stacks, Queues - LIFO, FIFO - Monty

This folder :file_folder: contains the Monty project done in low-level programming in C, as part of the curriculum of :point_right: **[Holberton School](https://www.holbertonschool.com/)** :blue_book::computer:.
![c image](https://setscholars.net/wp-content/uploads/2020/07/C-Programming.jpg)

## Topic: Monty Simulator 0.98
* Description: Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
* Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```
## Technologies :hammer:
* Scripts written in Bash 4.3.11
* C files are compiled using:
```
gcc -g -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
```
* C files are written according to the C90 and C89 standard
* Tested on Ubuntu 20.04 LTS

## Project list
| Project name | Description |
| ------------ | ----------- |
| [`0x19. C - Stacks, Queues - LIFO, FIFO`](https://github.com/AFOP/monty) | Monty Simulator 0.98 ( Comands: push, pall, nop, sub, mod, div, pint, swap, mul, div), and compilation process with gcc in **C language** | ©

## AUTHORS
* **Andrés Ocaña** - *Documentación* - [AFOP](https://github.com/afop)  