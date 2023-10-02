#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *_strcpy(char *dest, char *src)
{
    int len = strlen(src);
    int i;
    
    for (i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    
    dest[len] = '\0';
    
    return dest;
}

char *str_concat(char *s1, char *s2)
{
    
    if (s1 == NULL)
        s1 = "";

	if (s2 == NULL)
		s2 = "";
   
    
    int total_len = strlen(s1) + strlen(s2);
    
    char *result;
    
    result = malloc(total_len+1);
    
    if (result == NULL)
    {
        return (NULL);
    }
    else{
        _strcpy(result, s1);
        
        int i = strlen(s1);
        
        for (int t = i; t <= total_len; t++)
            result[t] = s2[t-i];
    
    
    }
    
    return result;
}

