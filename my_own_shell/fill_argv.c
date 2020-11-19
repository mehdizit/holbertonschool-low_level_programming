#include "shell.h"

void fill_argv(char *temp_argv)
{
	char **my_argv;
	char *foo = temp_argv;
	int i = 0;
	char ret[100];
	memset(ret, 0, 100);
	while(*foo != '\0')
	{
		if(i == 10)
			break;
		if(*foo == ' ')
		{
			if(my_argv[i] == NULL)
				my_argv[i] = (char *)malloc(sizeof(char) * strlen(ret) + 1);
			else
			{
				memset(my_argv[i], 0, strlen(my_argv[i]));
			}
			strncpy(my_argv[i], ret, strlen(ret));
			strncat(my_argv[i], "\0", 1);
			memset(ret, 0, 100);
			i++;
		}
		else
		{
			strncat(ret, foo, 1);
		}
		foo++;
	}
	if (ret[0] != '\0')
	{
		my_argv[i] = (char *)malloc(sizeof(char) * strlen(ret) + 1);
		strncpy(my_argv[i], ret, strlen(ret));
		strncat(my_argv[i], "\0", 1);
	}
}
