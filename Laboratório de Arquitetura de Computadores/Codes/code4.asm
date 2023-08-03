.data

li $t0, 5
li $t1, 10
msg: .asciiz "Equal"
msg2: .asciiz "Not Equal"
slt $t2, $t0, $t1

	.text
	.globl main
main:

	
	
	la $v0, msg
	li $v0, 4
	
	
diferentes:
	la $v0, msg2
	li $v0, 4
	
	
