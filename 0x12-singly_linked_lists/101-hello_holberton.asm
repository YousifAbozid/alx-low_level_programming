section .data
    hello db "Hello, Holberton",10

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 4          ; system call for write
    mov ebx, 1          ; file descriptor for stdout
    mov ecx, hello      ; pointer to the string
    mov edx, 16         ; length of the string
    int 0x80            ; call the kernel

    ; exit with status code 0
    mov eax, 1          ; system call for exit
    xor ebx, ebx        ; status code 0
    int 0x80            ; call the kernel
