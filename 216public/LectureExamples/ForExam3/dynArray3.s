	.file	"dynArray3.c"
	.text
	.globl	fillArr
	.type	fillArr, @function
fillArr:
.LFB0:
	pushq	%rbp
.LCFI0:
	movq	%rsp, %rbp
.LCFI1:
	pushq	%rbx
.LCFI2:
	subq	$88, %rsp
.LCFI3:
	movq	%rdi, -88(%rbp)
	movl	%esi, -92(%rbp)
	movl	$0, -28(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	time
	movq	-72(%rbp), %rax
	movl	%eax, %edi
	call	srand
	movl	$0, -20(%rbp)
	jmp	.L2
.L8:
	movl	$4, %edi
	call	malloc
	movq	%rax, -40(%rbp)
	cmpq	$0, -40(%rbp)
	jne	.L3
	movl	$1, %edi
	call	exit
.L3:
	call	rand
	movl	%eax, %ecx
	movl	$274877907, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$6, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	imull	$1000, %eax, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movq	-40(%rbp), %rdx
	movl	%eax, (%rdx)
	movl	$4, %edi
	call	malloc
	movq	%rax, -48(%rbp)
	cmpq	$0, -48(%rbp)
	jne	.L4
	movl	$1, %edi
	call	exit
.L4:
	call	rand
	movl	%eax, %ecx
	movl	$862700375, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$9, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	imull	$2549, %eax, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movq	-48(%rbp), %rdx
	movl	%eax, (%rdx)
	movl	$4, %edi
	call	malloc
	movq	%rax, -56(%rbp)
	cmpq	$0, -56(%rbp)
	jne	.L5
	movl	$1, %edi
	call	exit
.L5:
	call	rand
	movl	%eax, %ecx
	movl	$1808407283, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$3, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, (%rax)
	movl	$0, -24(%rbp)
	jmp	.L6
.L7:
	movl	$4, %esi
	movl	$1000, %edi
	call	calloc
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	free
	addl	$1, -24(%rbp)
.L6:
	cmpl	$999, -24(%rbp)
	jle	.L7
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-48(%rbp), %rax
	movl	(%rax), %eax
	imull	%eax, %edx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%edx, %ecx
	imull	%eax, %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	leal	1(%rdx), %eax
	movl	%eax, -28(%rbp)
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-88(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, (%rax)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	free
	addl	$1, -20(%rbp)
.L2:
	movl	-20(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jl	.L8
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
.LCFI4:
	ret
.LFE0:
	.size	fillArr, .-fillArr
	.section	.rodata
.LC0:
	.string	"Array Values: "
.LC1:
	.string	" %d"
	.text
	.globl	printArr
	.type	printArr, @function
printArr:
.LFB1:
	pushq	%rbp
.LCFI5:
	movq	%rsp, %rbp
.LCFI6:
	subq	$32, %rsp
.LCFI7:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$.LC0, %eax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L10
.L11:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %edx
	movl	$.LC1, %eax
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
.L10:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L11
	movl	$10, %edi
	call	putchar
	leave
.LCFI8:
	ret
.LFE1:
	.size	printArr, .-printArr
	.globl	countEvens
	.type	countEvens, @function
countEvens:
.LFB2:
	pushq	%rbp
.LCFI9:
	movq	%rsp, %rbp
.LCFI10:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L13
.L15:
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L14
	addl	$1, -4(%rbp)
.L14:
	addl	$1, -8(%rbp)
.L13:
	movl	-8(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L15
	movl	-4(%rbp), %eax
	popq	%rbp
.LCFI11:
	ret
.LFE2:
	.size	countEvens, .-countEvens
	.globl	copyEvens
	.type	copyEvens, @function
copyEvens:
.LFB3:
	pushq	%rbp
.LCFI12:
	movq	%rsp, %rbp
.LCFI13:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%rdx, -40(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L17
.L19:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L18
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-40(%rbp), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	-24(%rbp), %rdx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	addl	$1, -8(%rbp)
.L18:
	addl	$1, -4(%rbp)
.L17:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L19
	popq	%rbp
.LCFI14:
	ret
.LFE3:
	.size	copyEvens, .-copyEvens
	.section	.rodata
.LC2:
	.string	"Can't allocate that much"
.LC3:
	.string	"arr1:"
.LC4:
	.string	"arr2:"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	pushq	%rbp
.LCFI15:
	movq	%rsp, %rbp
.LCFI16:
	subq	$32, %rsp
.LCFI17:
	movq	$0, -8(%rbp)
	movq	$0, -16(%rbp)
	movl	$0, -20(%rbp)
	movl	$10000, -24(%rbp)
	movl	-24(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L21
	movl	$.LC2, %edi
	call	puts
	movl	$-1, %edi
	call	exit
.L21:
	movl	-24(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	fillArr
	movl	-24(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	countEvens
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	cltq
	movl	$4, %esi
	movq	%rax, %rdi
	call	calloc
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdx
	movl	-24(%rbp), %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	copyEvens
	movl	$.LC3, %eax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	-24(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArr
	movl	$.LC4, %eax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	-20(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArr
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movq	$0, -8(%rbp)
	movq	$0, -16(%rbp)
	movl	$0, %eax
	leave
.LCFI18:
	ret
.LFE4:
	.size	main, .-main
	.section	.eh_frame,"a",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0
	.byte	0x1
	.string	"zR"
	.uleb128 0x1
	.sleb128 -8
	.byte	0x10
	.uleb128 0x1
	.byte	0x3
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x1
	.align 8
.LECIE1:
.LSFDE1:
	.long	.LEFDE1-.LASFDE1
.LASFDE1:
	.long	.LASFDE1-.Lframe1
	.long	.LFB0
	.long	.LFE0-.LFB0
	.uleb128 0
	.byte	0x4
	.long	.LCFI0-.LFB0
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI3-.LCFI1
	.byte	0x83
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE1:
.LSFDE3:
	.long	.LEFDE3-.LASFDE3
.LASFDE3:
	.long	.LASFDE3-.Lframe1
	.long	.LFB1
	.long	.LFE1-.LFB1
	.uleb128 0
	.byte	0x4
	.long	.LCFI5-.LFB1
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI6-.LCFI5
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI8-.LCFI6
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE3:
.LSFDE5:
	.long	.LEFDE5-.LASFDE5
.LASFDE5:
	.long	.LASFDE5-.Lframe1
	.long	.LFB2
	.long	.LFE2-.LFB2
	.uleb128 0
	.byte	0x4
	.long	.LCFI9-.LFB2
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI10-.LCFI9
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI11-.LCFI10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE5:
.LSFDE7:
	.long	.LEFDE7-.LASFDE7
.LASFDE7:
	.long	.LASFDE7-.Lframe1
	.long	.LFB3
	.long	.LFE3-.LFB3
	.uleb128 0
	.byte	0x4
	.long	.LCFI12-.LFB3
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI13-.LCFI12
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI14-.LCFI13
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE7:
.LSFDE9:
	.long	.LEFDE9-.LASFDE9
.LASFDE9:
	.long	.LASFDE9-.Lframe1
	.long	.LFB4
	.long	.LFE4-.LFB4
	.uleb128 0
	.byte	0x4
	.long	.LCFI15-.LFB4
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI16-.LCFI15
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI18-.LCFI16
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE9:
	.ident	"GCC: (GNU) 4.6.1"
	.section	.note.GNU-stack,"",@progbits
