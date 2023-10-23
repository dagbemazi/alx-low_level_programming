; This program prints "Hello, Holberton

section .text
   global main 

main:
	mov edx, len    ; message length
	mov ecx, msg    ; message to write
	mov ebx, 1      ; file descriptor (stdout)
	mov eax, 4      ; sys call number (sys_write)
	int 0x80        ; call kernel


	mov eax, 1      ; sys call num (sys_exit)
	int 0x80        ; call kernel

section .data
msg db 'Hello, Holberton', 0xa  ; string to print
len equ  $ - msg    ; length of string
