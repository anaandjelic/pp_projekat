
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$40,%15
@main_body:
		MOV 	$5,-16(%14)
		MOV 	$5,-12(%14)
		MOV 	-12(%14),%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET