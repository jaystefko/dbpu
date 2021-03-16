	.file	"main.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.align 8
.LC0:
	.string	"ERROR: program input must have searched_word as an argument.\n"
	.align 8
.LC1:
	.string	"If you want to run this program simply run it as follows:\n"
.LC2:
	.string	"\t1\tInstall g++\n"
	.align 8
.LC3:
	.string	"\t2\tGo to folder in terminal and enter \"g++ main.cpp\"\n"
	.align 8
.LC4:
	.string	"\t3\tEnter: \"./a.out zyrafa < input_file.txt\"\n"
	.text
	.globl	_Z20print_error_messagesv
	.type	_Z20print_error_messagesv, @function
_Z20print_error_messagesv:
.LFB1572:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC4(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1572:
	.size	_Z20print_error_messagesv, .-_Z20print_error_messagesv
	.globl	_Z6strlenPKc
	.type	_Z6strlenPKc, @function
_Z6strlenPKc:
.LFB1573:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
.L4:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L3
	addq	$1, -8(%rbp)
	jmp	.L4
.L3:
	movq	-8(%rbp), %rax
	subq	-24(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1573:
	.size	_Z6strlenPKc, .-_Z6strlenPKc
	.section	.rodata
.LC5:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1574:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	cmpl	$2, -36(%rbp)
	je	.L7
	call	_Z20print_error_messagesv
	movl	$-1, %eax
	jmp	.L8
.L7:
	movl	$1, -24(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -16(%rbp)
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_Z6strlenPKc
	movq	%rax, -8(%rbp)
.L14:
	call	getchar@PLT
	movl	%eax, -12(%rbp)
	cmpl	$-1, -12(%rbp)
	setne	%al
	testb	%al, %al
	je	.L9
	cmpl	$0, -16(%rbp)
	jne	.L10
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	cmpl	%eax, -12(%rbp)
	jne	.L11
	movl	-20(%rbp), %eax
	cltq
	movq	-8(%rbp), %rdx
	subq	$1, %rdx
	cmpq	%rdx, %rax
	jne	.L12
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, -16(%rbp)
	jmp	.L10
.L12:
	addl	$1, -20(%rbp)
	jmp	.L10
.L11:
	cmpl	$0, -20(%rbp)
	je	.L10
	movl	$0, -20(%rbp)
.L10:
	cmpl	$10, -12(%rbp)
	jne	.L14
	addl	$1, -24(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L14
.L9:
	movl	$0, %eax
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1574:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2070:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L17
	cmpl	$65535, -8(%rbp)
	jne	.L17
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L17:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2070:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z20print_error_messagesv, @function
_GLOBAL__sub_I__Z20print_error_messagesv:
.LFB2071:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2071:
	.size	_GLOBAL__sub_I__Z20print_error_messagesv, .-_GLOBAL__sub_I__Z20print_error_messagesv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z20print_error_messagesv
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 10.2.0-13ubuntu1) 10.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
