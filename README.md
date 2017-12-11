# 42sh

{EPITECH.} first year project.

C Shell that can execute commands as well as interpreting pipes, redirections, separators...

Based on the [tcsh shell](https://en.wikipedia.org/wiki/Tcsh).

## Requirements

 - [A Linux distribution](https://en.wikipedia.org/wiki/Linux_distribution)
 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)

## Compilation

Navigate to the root of the repository from your Terminal and run `make` to build the `42sh` executable file.

## Features
 - Execute basic commands
 - Execute complex commands:
   - Separators
   - Pipes
   - Redirections
 - Can manage its own environment
 - Builtin commands:
   - `builtins`
   - `cd / chdir`
   - `echo`
   - `env [-0] [--null] [-u]`
   - `printenv`
   - `pwd`
   - `setenv`
   - `unsetenv`
 - Prompt based on last exit status
 - Support for non-interactive mode
 