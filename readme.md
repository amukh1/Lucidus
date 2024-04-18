<!-- [![npm version](https://badge.fury.io/js/ritchie.svg)](https://www.npmjs.com/package/ritchie) -->
<!-- [![GitHub version](https://badge.fury.io/gh/amukh1%2FRitchie-Plus-Plus.svg)](https://badge.fury.io/gh/amukh1%2FRitchie-Plus-Plus) -->

# Lucidus

> A Statically-Typed *compiled* programming language.

<br>

> Contact me for help, because I *will* respond. Discord: amukh1.

# Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

Welcome to the Lucidus wiki!

## Installation

From Github:

```sh
$ git clone https://github.com/amukh1/Lucidus ./Lucidus
$ cd Lucidus
$ sudo apt install antlr4
$ chmod +x ./compile.sh
$ sudo ./compile.sh
```
> :warning: **LLVM**: Make sure to install LLVM first if you do not have it! (./llvm-install.sh)

From APT:
(not set up yet)
```sh
$ sudo apt install lucy
```

## VSCODE Extention
**[Extension Link](https://marketplace.visualstudio.com/items?itemName=amukh1.lucidus)**

**Or  just search up "Lucidus" in the extensions section**

## Basic Usage

Lets make hello world!

First make a file named ``test.luci``:
```c
dec printf(fmt:char*, ...) -> int;
```

This block is declaring the printf function. it takes a static parameter "fmt" for format with type ``char*``, and returns an ``int``.
During compilation, the c standard libraries are linked with your code so the definition of printf is provided.

```c
dec main() -> int;
def main() -> int {
    
}
```

As you can see a big difference here over other common languages is that you **declare before you define** functions.

Now for the hello world part:
(In the main function)
```c
printf("Hello World!");
return 0;
```

Now lets run it. 

```sh
$ lucy test.luci test.ll
```
This compiles test.luci to an llvm ll file.
Now to run it, we can use ``lli``:
```sh
$ lli test.ll
```
or ``clang``:
```sh
$ clang test.ll -o test
$ ./test
```

# Contributing

You can contribute to the project by making a pull request on [GitHub](https://github.com/amukh1/Lucidus).

# Credits

## Amukh1.

# Built With

* [C++](https://cplusplus.com/)
* [LLVM](https://llvm.org/)
* [ANTLR4](https://www.antlr.org/)
* [Assembly](http://x86asm.net/)
* [Love](https://github.com/amukh1)

# Authors

* **Amukh1** - [Github](https://github.com/amukh1) / amukh1#9613

See also the list of [contributors](https://github.com/amukh1/Lucidus/contributors) who participated in this project.

# License

[GNU License](https://www.gnu.org/licenses/gpl-3.0.en.html) © Amukh1