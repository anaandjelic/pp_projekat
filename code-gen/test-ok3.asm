
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$2,-4(%14)
		LOAD	-4(%14),%0
		MOV 	%0,-12(%14)
		UNLOAD	-12(%14),%0
		ADDS	%0,$1,%0
		MOV 	%0,-8(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET