section .text         ;declare this section to be executable instructions
global fib            ;export the 'fib' symbol to be accessible outside of file

fib:                  ;compute the fibonnacci sequence
      mov rcx, rdi    ;move the input argument from rdi to the counter register rcx
      xor rax, rax    ;clear rax = 0
      mov rdx, 1      ;set rdx = 1

help:                 ;helper routine to actually do the computations
      xchg rax, rdx   ;make rdx = Fn-2, rax = Fn-1
      add rdx, rax    ;rdx = Fn, rax = Fn-2 but gets swapped in the next xchg
      loop help       ;dec rcx, and jump to `help` if rcx != 0
      ret             ;returns from the function, with rax = fib number we want
