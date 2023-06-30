section .data
    hello: db 'Hello, Holberton', 10, 0   ; define the string with a newline character and null terminator
    fmt: db '%s', 10, 0                   ; define the format string with a newline character and null terminator

section .text
    global _start

_start:
    mov rax, 0          ; set rax to 0 for printf call
    lea rdi, [hello]    ; load the address of the hello string into rdi
    mov rsi, fmt        ; load the address of the format string into rsi
    mov rdx, 0          ; set rdx to 0 for printf call
    call printf         ; call printf function
    mov rax, 60         ; set rax to 60 for exit syscall
    xor rdi, rdi        ; set rdi to 0 for exit status
    syscall             ; call exit syscall

