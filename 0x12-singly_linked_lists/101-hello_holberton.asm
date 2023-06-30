section .data
    hello db "Hello, Holberton", 0

section .text
    extern puts

global _start

_start:
    ; Push the address of the hello string as an argument to puts
    mov rdi, hello
    ; Call puts
    call puts

    ; Exit the program
    mov eax, 60 ; System call number for exit
    xor edi, edi ; Exit status 0
    syscall
