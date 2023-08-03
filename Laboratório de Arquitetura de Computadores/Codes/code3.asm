.data
buffer: .space 100
msg: .asciiz "Digite uma string: "
msg2: .asciiz " A string é: "
	.text
	.globl main
main:
	la $a0, msg
	li $v0, 4
	syscall
	
	la $a0, buffer
	la $a1, 100
	li $v0, 8
	syscall
	
	la $a0, msg2
	li $v0, 4
	syscall
	
	la $a0, buffer
	li $v0, 4
	syscall
	
	li $v0, 10
	syscall 