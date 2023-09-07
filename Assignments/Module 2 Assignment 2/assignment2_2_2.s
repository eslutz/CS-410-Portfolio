movl   −8(%rbp), %eax
sall  	$2, %eax
subl 	$1, %eax
leal  	7(%rax), %edx
testl 	%eax, %eax
cmovs  %edx, %eax
sarl  	$3, %eax
movl  	%eax, −4(%rbp)
