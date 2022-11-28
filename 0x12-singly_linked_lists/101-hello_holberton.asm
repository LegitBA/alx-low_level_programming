extern printf

section .text
global main

main:
push rbp

mov rdi,fnt
mov rsi,msg
mov rax,0
call printf

pop rbp

mov rax,0
ret

section .data
  msg: db "hello, holberton", 0
  fnt: dbb "%s", 10, 0
