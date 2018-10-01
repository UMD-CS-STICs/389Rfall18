Binaries I
======

## Assignment details

This assignment has three parts. It is due on Monday, October 8th at 11:59PM.
To submit your homework, please follow the guidelines on the front page to edit
the README in the /writeup folder and push your completed work to GitHub.

**There will be a late penalty of 5% off per day late!**

### Part 1 - 25 points
A variation on the function `memset()` from the `string.h` library can be
implemented as follows in C:

```c
void memset(char *str, char val, int strl)
{
  int i;
  for (i = 0; i < strl; i++)
    str[i] = val;
}
```

Your task for this part is to implement the above `memset()` function in x86
assembly, 64-bit mode. The functionality that it needs to achieve is as follows:

* Take 3 parameters using the System V x86-64 calling conventions discussed in
class
  * `char *str`: pointer to the beginning of a string
  * `char val`: value to be written at every character of the string `str`
  * `int strl`: length of the string passed in (for C strings, the length does
  not include the null-terminator `'\0'`.
* Copy the value `val` at `strl` number of positions in the string `str`
* Save and restore any registers used that you may overwrite, in accordance to
the System V x86-64 calling convention

### Part 2 - 25 points
A variation on the function `strncpy()` from the `string.h` library can be
implemented as follows in C:

```c
void strncpy(char *dst, char *src, int len)
{
  int i;
  for (i = 0; i < len; i++)
    dst[i] = src[i];
}
```

Your task for this part is to implement the above `strncpy()` function in x86
assembly, 64-bit mode. The functionality that it needs to achieve is as follows:

* Take 3 parameters using the System V x86-64 calling conventions discussed in
class
  * `char *dst`: pointer to the string to be overwritten
  * `char *src`: pointer to the string being copied from
  * `int len`: length of the string passed in (for C strings, the length does
  not include the null-terminator `'\0'`.
* Copy exactly `len` characters from the `src` string to the `dst` string, no
more, no less
* Save and restore any registers used that you may overwrite, in accordance to
the System V x86-64 calling convention

### Part 3 - 50 points
Document your thought process as you implement these routines in a short
writeup. You should at least include some commentary on your initial thoughts of
the problem, choice of instructions and control flow, implementation issues that
you may have run into, and any issues you may have caught during debugging (and
if any, how you fixed them). Be as in-depth as you feel may best convey your
thought process and ideas to someone who is looking to implement these routines
from scratch as well. It should give a reader a sense of what to do and what not
to do when hand-writing assembly functions. Feel free to include things such as
assembly snippets, screenshots of code debugging, and output.

### Format
You must submit the following files for grading:
```
week/5/writeup/
  - README.md      <-- your writeup
  - myfuncs.S      <-- your x86 routines
  - main.c         <-- C file to run assembly functions
  - Makefile       <-- used to compile your code, we will provide this
```

### Scoring
We will be running `make` in the `week/5/writeup/` folder, which will produce
an executable file called `main`. We will run tests on your functions from Part
1 and Part 2, and read your `README.md` file.

Part 1 and Part 2 are both worth 25 points each, and your writeup is worth 50
points. There are no flags to capture for this week.

### Tips
To properly build your assembly code, you will need to download `yasm` in your
VMs. You can just run `sudo apt-get install yasm` in Kali to grab this.

You can assume that whoever calls your function won't be passing bad arguments,
so you aren't required to do any error checking (i.e. null pointers, negative
length, out-of-bounds length etc).

To test your code, use the provided Makefile to generate the `main` binary and
load this into `gdb`. You can set breakpoints at your functions to step into
them, and use the `x/s <addr or reg>` to print out regions of memory as C
strings.

Some instructions that may be useful for this are `STOS(B|W|D|Q)`,
`MOV(B|W|D|Q)`, and the `REP` and `LOOP` modifiers. You aren't required to used
any or all these instructions, but they may help you when writing these functions.

You can look up documentation for these
[here](https://c9x.me/x86/) and [here](https://www.felixcloutier.com/x86/).

Good luck!
