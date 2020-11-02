	section .text
	global main

    message db "Hello, Holberton", 10

main:	
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 17
    syscall
    mov rax, 60
    mov rdi, 0
    syscall
section .rodata
