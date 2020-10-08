#include "holberton.h"

int _movewild(char *s2, char star)
{

	star = '*';
	if(*s2)
	{
		if (*s2 == star)
		{
			return (_movewild(s2 + 1, star));
		}
	}return (0);
}


int wildcmp(char *s1, char *s2)
{
	char star = '*';
	if (*s1 && *s2)
	{
		if (*(s1 + 1) == *(s2 +1))
		{
			return (1);
		}
		else if (*(s2 + 1) == star)
		{
			return (_movewild(s2 + 1, star));
		}

	}return (0);	
}

/**
 *
     int _checks2star(char *s2, char *s3)
     {
	if (*s2 && *s3)
	{
		s3 = s2 + 1;
		if (*s3 == star)
		{
			return (_checks2star(s2, s3 + 1));
		}
	}
	return (0);
      }

*/
