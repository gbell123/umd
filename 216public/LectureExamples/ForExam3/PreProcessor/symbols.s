	.file	"symbols.c"
	.section	.rodata
.LC0:
	.string	"The name of this file is %s\n"
.LC1:
	.string	"symbols.c"
	.align 8
.LC2:
	.string	"The name of this file is __FILE__"
.LC3:
	.string	"Currently %s on %s\n"
.LC4:
	.string	"Dec  1 2011"
.LC5:
	.string	"11:06:01"
.LC6:
	.string	"This is line %d\n"
.LC7:
	.string	"Good ansi C"
	.align 8
.LC8:
	.string	"last line before return is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
.LCFI0:
	movq	%rsp, %rbp
.LCFI1:
	movl	$.LC0, %eax
	movl	$.LC1, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$.LC2, %edi
	call	puts
	movl	$.LC3, %eax
	movl	$.LC4, %edx
	movl	$.LC5, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$.LC6, %eax
	movl	$7, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$.LC7, %edi
	call	puts
	movl	$.LC8, %eax
	movl	$12, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
.LCFI2:
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
	.long	.LCFI2-.LCFI1
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE1:
	.ident	"GCC: (GNU) 4.6.1"
	.section	.note.GNU-stack,"",@progbits
