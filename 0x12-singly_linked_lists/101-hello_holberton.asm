; Author James koduah
; Date: 11/26/22
global _start

section .text:

_start:
mov eax, 0x4
mov ebx, 1
mov ecx, mess
mov edx, mess_len
int 0x80

mov eax, 0x1
mov ebx, 0
int 0x80


section .data:
	mess: db "Hello, Holberton!", 0xA
	mess_len equ $-mess
