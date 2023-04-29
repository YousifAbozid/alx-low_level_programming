section .data
    msg db 'Hello, Holberton', 0   ; null-terminated string

section .text
    global main

    extern printf

main:
    push rbp        ; save base pointer
    mov rbp, rsp    ; set up stack frame

    mov rdi, msg    ; set up first argument to printf
    xor eax, eax    ; clear the EAX register (used as second argument)
    call printf     ; call printf with two arguments

    mov rsp, rbp    ; restore stack pointer
    pop rbp         ; restore base pointer
    xor eax, eax    ; set return value to 0
    ret             ; return from main
