
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int num = 0;
    
    while (str[i] != '\0')
    {
        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        {
            i++;
        }
        if (str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
            {
                sign = -1;
            }
            i++;
        }
        if (str[i] >= 48 && str[i] <= 57)
        {
            num *= 10;
            num += (str[i] - '0');
            
        } else 
        {
            return (num*sign);
        }
        i++;
    }
    return (num*sign);
    
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     char c[] = "    +123";
//     printf("%d\n", atoi(c));
//     printf("%d", ft_atoi(c));

//     return 0;
// }