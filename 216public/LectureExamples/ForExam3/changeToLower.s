	.file	"changeToLower.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
.LCFI0:
	movq	%rsp, %rbp
.LCFI1:
	subq	$4144, %rsp
.LCFI2:
	movl	$0, -4(%rbp)
	movl	$3, -8(%rbp)
	movl	$10, -12(%rbp)
	leaq	-4016(%rbp), %rsi
	movl	$0, %eax
	movl	$500, %edx
	movq	%rsi, %rdi
	movq	%rdx, %rcx
	rep stosq
	movl	$1684234849, -4128(%rbp)
	movl	$1751606885, -4124(%rbp)
	movl	$1818978921, -4120(%rbp)
	movl	$1886350957, -4116(%rbp)
	movl	$1953722993, -4112(%rbp)
	movl	$2021095029, -4108(%rbp)
	movl	$1111587449, -4104(%rbp)
	movl	$1178944579, -4100(%rbp)
	movl	$1246316615, -4096(%rbp)
	movl	$1313688651, -4092(%rbp)
	movl	$1381060687, -4088(%rbp)
	movl	$1448432723, -4084(%rbp)
	movq	$1515804759, -4080(%rbp)
	leaq	-4072(%rbp), %rdx
	movl	$0, %eax
	movl	$5, %ecx
	movq	%rdx, %rdi
	rep stosq
	movq	%rdi, %rdx
	movl	%eax, (%rdx)
	addq	$4, %rdx
	movl	$0, -4(%rbp)
	jmp	.L2
.L4:
	call	__ctype_b_loc
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	movzbl	-4128(%rbp,%rax), %eax
	movsbq	%al, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	andl	$256, %eax
	testl	%eax, %eax
	je	.L3
	movl	-4(%rbp), %eax
	cltq
	movzbl	-4128(%rbp,%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	tolower
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	movb	%dl, -4128(%rbp,%rax)
.L3:
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	movslq	%eax, %rsi
	leaq	-4128(%rbp), %rax
	movq	$-1, -4136(%rbp)
	movq	%rax, %rdx
	movl	$0, %eax
	movq	-4136(%rbp), %rcx
	movq	%rdx, %rdi
	repnz scasb
	movq	%rcx, %rax
	notq	%rax
	subq	$1, %rax
	cmpq	%rax, %rsi
	jb	.L4
	leaq	-4128(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movl	$0, -4(%rbp)
	jmp	.L5
.L6:
	movl	-8(%rbp), %eax
	addl	%eax, %eax
	movl	%eax, %ecx
	addl	-4(%rbp), %ecx
	movl	-8(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, %edx
	addl	-4(%rbp), %edx
	movslq	%ecx, %rax
	movl	%edx, -4016(%rbp,%rax,4)
	addl	$1, -4(%rbp)
.L5:
	cmpl	$199, -4(%rbp)
	jle	.L6
	movl	-4016(%rbp), %edx
	movl	$.LC0, %eax
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
.LCFI3:
	ret
.LFE0:
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
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE1:
	.ident	"GCC: (GNU) 4.6.1"
	.section	.note.GNU-stack,"",@progbits
