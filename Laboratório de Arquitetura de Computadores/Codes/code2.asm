.data
num1: .word 5
num2: .word 7
result: .word 0
msg: .asciiz "O Reseultado da soma é: "

 .text
 .globl main
 main:
 	lw $t0, num1
 	lw $t1, num2
 	add $t2, $t0, $t1
 	la $t3, result
 	sw $t2, 0($t3)
 	li $v0, 4
 	la $a0, msg
 	syscall
 	li $v0, 1
 	lw $a0, result
 	syscall
 	li $v0, 10
 	syscall 