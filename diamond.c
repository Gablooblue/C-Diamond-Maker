#include <stdio.h>

main()
{
	int input, checker, ast,space,z = 1,x,v,min, odd;
	
	for(;;)
	{
		printf("Please input an odd integer: ");
		scanf("%d", &input);
		odd = input % 2;
		if (odd != 1)
		{
			printf("Odd integers only please\n");
			continue;
		}
		else 
		{
			break;
		}
	}
	x = space;
	checker = input;
	v = 0;
	
	for(; checker + 1 > z; )
	{
		for(space = ((input / 2.0) - 0.5) ; space > v ; space--)
		{
			printf(" ");
		}
		for(ast = 0; ast < z; ast++ )
		{
			printf("*");
		}
		printf("\n");
		z += 2;
		v++;
	}
	z -= 4;
	v -= ((input / 2.0) - 0.5);
	for (;z > 0;)
	{
		for(space = 0; space < v; space++ )
		{
			printf(" ");
		}
		for(ast = 0; ast < z; ast++)
		{
			printf("*");
		}
		printf("\n");
		v++;
		z -= 2;
		
	}
}