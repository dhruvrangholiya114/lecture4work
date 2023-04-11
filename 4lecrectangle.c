#include<stdio.h>

main()

{
	float principal=300, rate=5, time=365, interest;
	interest= (principal*rate*time)/100;
	
	printf("Simple Interest is %.2f",interest);
}
