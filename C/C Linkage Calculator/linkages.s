	.global calculator
	.extern globalResult
	.intel_syntax noprefix

	.text
calculator:
	push rbp
	mov rbp, rsp
	
	mov al, al

	cmp al, '+'
	je .L_add
	cmp al, '-'
	je .L_sub
	cmp al, '*'
	je .L_mul
	cmp al, '/'
	je .L_div

	
.L_add:
	addsd xmm0, xmm1
	jmp .L_store_result
	
.L_sub:
	subsd xmm0, xmm1
	jmp .L_store_result
	
.L_mul:
	mulsd xmm0, xmm1
	jmp .L_store_result
	
.L_div:
	divsd xmm0, xmm1
	jmp .L_store_result

.L_store_result:
	movsd QWORD ptr [rip+globalResult], xmm0
	pop rbp
	ret
