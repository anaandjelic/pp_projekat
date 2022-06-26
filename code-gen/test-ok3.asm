
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$0,-4(%14)
		MOV 	$0,-8(%14)
@for_cmp_0:
		CMPS 	-8(%14),$5
		JGES	@for_end_0
		ADDS	-4(%14),-8(%14),%0
		MOV 	%0,-4(%14)
		MOV 	$0,-12(%14)
@for_cmp_1:
		CMPS 	-12(%14),$5
		JGES	@for_end_1
		ADDS	-4(%14),-8(%14),%0
		MOV 	%0,-4(%14)
		ADDS	-12(%14),$1,-12(%14)
		JMP 	@for_cmp_1
@for_end_1:
		ADDS	-8(%14),$1,-8(%14)
		JMP 	@for_cmp_0
@for_end_0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET