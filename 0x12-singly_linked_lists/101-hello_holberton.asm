extern printf           ; declare that we will use the 'printf' function defined elsewhere

section .data          ; declare the data section
msg:   db "Hello, Holberton", 0  ; define a string of characters with a null terminator and name it 'msg'
fmt:   db "%s", 10, 0          ; define a format string with a newline character and a null terminator and name it 'fmt'

section .text          ; declare the text section
global main            ; define the global entry point of the program as 'main'

main:
    push rbp            ; save the value of RBP on the stack
    mov rdi,fmt         ; move the address of the format string 'fmt' to the first parameter register RDI
    mov rsi,msg         ; move the address of the message string 'msg' to the second parameter register RSI
    mov rax,0           ; move 0 to RAX
    call printf         ; call the 'printf' function with the values in RDI and RSI as parameters

    pop rbp             ; restore the value of RBP from the stack
    mov rax,0           ; move 0 to RAX
    ret                 ; return from the function and return the value in RAX
