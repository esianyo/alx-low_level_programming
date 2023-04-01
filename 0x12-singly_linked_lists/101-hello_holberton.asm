global _start

section .data
    message db "Hello, Holberton",0
    format db "%s\n",0

section .text
_start:
    mov rax, 0        ; clear rax register
    lea rdi, [message] ; load message address into rdi register
    mov rsi, format   ; load format string into rsi register
    xor rdx, rdx      ; clear rdx register
    call printf       ; call printf function
    mov rax, 60       ; load exit syscall number into rax
    xor rdi, rdi      ; clear rdi register
    syscall           ; call exit syscall















