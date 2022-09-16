#include <stdio.h>

int main()
{
	while(1)
	{
		char str[50];
		printf("Welcome ya Basha > ");
		gets(str);
		if(str[0] == 'e' && str[1] == 'x' && str[2] == 'i' && str[3] == 't')
		{
			break;
		}
		printf("You said: %s\n",str);
	}
	printf("Good bye!\n");
	return 0;
}
