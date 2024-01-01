section .data
    hello db 'Hello, Holberton', 0xA ; The string to print, 0xA is the newline character

section .text
    global main
    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, hello ; The format string
    xor rax, rax   ; 0 floating point parameters
    ; Call printf
    call printf
    ; Return 0
    mov eax, 0x60  ; The syscall number for exit
    xor edi, edi   ; Exit code 0
    syscall        ; Call the kernel
