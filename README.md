# Libft
This project is about coding a C library.
It will contain a lot of general purpose functions my programs will rely upon.

**isalpha**

The `isalpha` function in C is used to check if a given character is an alphabetic letter. It returns a non-zero (true) value if the character is an uppercase or lowercase letter (from 'A' to 'Z' or 'a' to 'z'), and zero (false) otherwise.

**isdigit**

The `isdigit` function in C is used to check if a given character is a numeric digit (from '0' to '9'). It returns a non-zero (true) value if the character is a digit, and zero (false) otherwise.

**isalnum**

The `isalnum` function in C checks if a given character is alphanumeric, meaning it's either a letter (uppercase or lowercase) or a digit. It’s part of the <ctype.h> library.

**isascii**

The `isascii` function in C checks if a given character is part of the ASCII character set. ASCII characters are those with integer values from 0 to 127.

**isprint**

The `isprint` function in C checks if a given character is printable, meaning it falls within the range of printable ASCII characters, including spaces but excluding control characters.

**strlen**

The `strlen` function in C calculates the length of a string, excluding the null terminator ('\0') at the end of the string.

**strlcpy**

The `strlcpy` function in C is used to copy a string from a source to a destination, ensuring that the destination string is null-terminated and that the copying does not exceed the specified buffer size. This function is considered safer than strcpy, as it helps prevent buffer overflows.

**strlcat**

The `strlcat` function in C is used to concatenate two strings, similar to strcat, but with added safety. It ensures that the destination buffer is not overrun and always ends with a null terminator if there is space for it. This function appends a source string (src) to the end of a destination string (dst) up to a specified total buffer size (dstsize).

**strchr**

The `strchr` function in C searches for the first occurrence of a specified character in a string and returns a pointer to that character within the string. If the character c is found, strchr returns a pointer to the first occurrence of c in str.
If c is not found, it returns NULL.

**strrchr**

The `strrchr` function in C is used to find the last occurrence of a character in a string. It searches for the specified character, starting from the end of the string and moving backward towards the beginning.
If the character c is found: It returns a pointer to the last occurrence of c in the string.
If the character c is not found: It returns NULL.

**strncmp**

The `strncmp` function in C compares the first n characters of two strings, s1 and s2. It returns an integer value based on the comparison:
If the first n characters of both strings are equal, strncmp returns 0.
If the first differing character has a greater value in s1 than in s2, it returns a positive value.
If the first differing character has a lesser value in s1 than in s2, it returns a negative value.

**toupper**

The `toupper` function in C is used to convert a lowercase letter to its corresponding uppercase letter. If the input character is a lowercase letter (from 'a' to 'z'), toupper will return the uppercase version of that letter. If the character is already uppercase or is not an alphabetic letter, it will return the character unchanged.

**tolower**

The `tolower` function in C is used to convert an uppercase letter to its corresponding lowercase letter. If the input character is an uppercase letter (from 'A' to 'Z'), tolower will return the lowercase version of that letter. If the character is already lowercase or is not an alphabetic letter, it will return the character unchanged.

**atoi**

The `atoi` (ASCII to integer) function in C converts a string to an integer. It reads characters in the string and interprets them as a numeric value, stopping at the first non-numeric character or at the end of the string. If the string starts with a valid integer format (including optional whitespace, an optional sign (+ or -), and digits), atoi will return the integer equivalent.

**strnstr**

In C, the `strnstr` function is used to locate the first occurrence of a substring (needle) within the initial part of another string (haystack), limited by a specified number of characters (len).
If needle is found within the specified len range, strnstr returns a pointer to the beginning of the found substring in haystack.
If needle is not found within the first len characters, it returns NULL.
If needle is an empty string (""), strnstr returns a pointer to the beginning of haystack, as any string contains an empty substring at its start.

