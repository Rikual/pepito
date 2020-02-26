	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"Truc.\n"
	.text
.globl my_put_truc
	.type	my_put_truc, @function
my_put_truc:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$6, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	my_put_truc, .-my_put_truc
.globl function
	.type	function, @function
function:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	leaq	-16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$7, (%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	function, .-function
.globl main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -4(%rbp)
	movl	$3, %edx
	movl	$2, %esi
	movl	$1, %edi
	call	function
	movl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	my_putnbr
	movl	$10, %edi
	call	my_putchar
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.5.1 20100924 (Red Hat 4.5.1-4)"
	.section	.note.GNU-stack,"",@progbits
