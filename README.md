# :scroll: Monty Interpreter

![Logo Monty Interpreter](https://github.com/AFOP/monty/tree/main/img)

Description: Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## :running: Getting Started

* [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) - Operating system reqd.

* [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/) - Compiler used

## :warning: Prerequisites

* Must have `git` installed.

* Must have repository cloned.

```
$ sudo apt-get install git
```

## :arrow_down: Installing and Using

Clone the repository into a new directory:

```
$ git clone https://github.com/AFOP/monty.git
```
Compile with the following:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

Run the interpreter on a file:

```
./monty name_file.m
```

Into the file .m:

```
julien@ubuntu:~/monty$ cat bytecodes/000.m
push 0
push 1
push 2
  push 3
                   pall    
push 4
    push 5    
      push    6        
pall
julien@ubuntu:~/monty$
```
## :wrench: Monty Opcodes

* **push**
  * Usage: `push <int>`
  * Pushes an element to the stack.
  * The parameter `<int>` must be an integer.

* **pall**
  * Prints all values in the stack/queue, starting from the top.

* **pint**
  * Prints the top value of the stack/queue.

* **pop**
  * Removes the top element of the stack/queue.

* **swap**
  * Swaps the top two elements of the stack/queue.

* **nop**
  * Does not do anything.

* **add**
  * Adds the top two elements of the stack/queue.
  * The result is stored in the second element from the top and the top element is popped.

* **sub**
  * Subtracts the top element of the stack/queue from the second element from the top.
  * The result is stored in the second element from the top and the top element is removed.

* **mul**
  * Multiplies the top two elements of the stack/queue.
  * The result is stored in the second element from the top and the top element is removed.

* **div**
  * Divides the second element from the top of the stack/queue by the top element.
  * The result is stored in the second element from the top and the top element is removed.

* **mod**
  * Computes the modulus of the second element from the top of the stack/queue divided by the top element.
  * The result is stored in the second element from the top and the top element is removed.

## AUTHORS
* **Andrés Ocaña** 
- *GitHub*  - [AFOP](https://github.com/afop)
- *Twitter* - [@AfopOcana](https://twitter.com/AfopOcana)
