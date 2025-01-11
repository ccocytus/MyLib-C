#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putstr(const char *str) {
    for(int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    printf("%c", *str);
}

int my_strlen(char *str)
{
    int i= 0;

    for (;str[i]; i++);
    return i;
}

void  my_revstr(char *str)
{
    int val1 = my_strlen(str);
    char temp;

    for (int i = 0; i < val1 / 2; i++)
    {
        temp = str[i];
        str[i] = str[val1 - 1 -i];
        str[val1 - 1 - i] = temp;
    }    
}

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

char *my_strcpy(char *dest, char *src)
{
    int len = my_strlen(src);

    for (int i = 0; i < len; i++)
        dest[i] = src[i];
    dest[len] = '\0';
}

char *my_strcat(char *dest, char *src)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; i < src[i]; i++)
        dest[len + i] = src[i];
    dest[len + i] =  '\0';
    return dest;
}
