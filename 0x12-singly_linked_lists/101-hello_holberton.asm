section .data
    hello db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global main
    extern    printf

main:
    push rbp
    mov rbp, rsp

    sub rsp, 16

    mov rsi, hello
    mov rdi, fmt
    mov eax, 0
    call printf

    add rsp, 16

    mov eax, 0
    leave
    ret

