#include <stdio.h>

char *balance(char *str)
{
	int		i = -1;
	int		now = 0;
	char	stack[102];

	while(str[++i] != '.')
	{
		if (str[i] == '(')
		{
			stack[now] = '(';
			now++;
		}
		else if (str[i] == ')')
		{
			if (now >= 1 && stack[now - 1] == '(')
				now--;
			else
				return ("no");
		}
		else if (str[i] == '[')
		{
			stack[now] = '[';
			now++;
		}
		else if (str[i] == ']')
		{
			if (now >= 1 && stack[now - 1] == '[')
				now--;
			else
				return ("no");
		}
	}
	return ("yes");
}

int	main(void)
{
	char str[102];

	gets(str);
	while(str[0] != '.')
	{
		printf("%s\n", balance(str));
		gets(str);
	}
	return (0);
}
