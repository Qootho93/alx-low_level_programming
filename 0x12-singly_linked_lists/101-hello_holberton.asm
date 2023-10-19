	extern printf

	SECTION .data
  msg:		db "Hello, Holberton\n", 0
  fmt:		db "%d"  10 , 0

	section .text

	global main

  main: push   rbp

	mov    rdi,fmt
	move   rax,0
	call   printf
	pop    rbp
	mov    rsi,msg
	mov    rdx,rax
	ret	  
