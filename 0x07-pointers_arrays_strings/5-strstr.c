#include "holberton.h"
/**
 * _strstr - searches string for a substring
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{ unsigned int i = 0, j = 0;

        while (haystack[i])
        {
                while (needle[j] && (haystack[i] == needle[0]))
                {
                        if (haystack[i + j] == needle[j])
                                j++;
                        else
                                break;
                }
                if (needle[j])
                {
                        i++;
                        j = 0;
                }
                else
                        return (haystack + i);
        }
        return (0);

}
