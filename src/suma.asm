section .data
    msg db "Hola Mundo", 10
    len equ $ - msg

section .text
    global _start

_start:
    mov eax,10h
    ; write(stdout, msg, len)
    mov rax, 1      ; syscall write
    mov rdi, 1      ; descriptor stdout
    mov rsi, msg    ; direccion del mensaje
    mov rdx, len    ; longitud
    syscall

    ; exit(0)
    mov rax, 60     ; syscall exit
    xor rdi, rdi    ; codigo de salida 0
    syscall
