
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$0,-8(%14)
		MOV 	$0,-4(%14)
@for_cmp_0:
		CMPS 	-4(%14),$8
		JGES	@for_end_0
		ADDS	-8(%14),-4(%14),%0
		MOV 	%0,-8(%14)
		ADDS	-4(%14),$1,-4(%14)
		JMP 	@for_cmp_0
@for_end_0:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET