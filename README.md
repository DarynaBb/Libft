# Libft
This project is about coding a C library.
It will contain a lot of general purpose functions my programs will rely upon.

**isalpha**

The isalpha function in C is used to check if a given character is an alphabetic letter. It returns a non-zero (true) value if the character is an uppercase or lowercase letter (from 'A' to 'Z' or 'a' to 'z'), and zero (false) otherwise.

**isdigit**

The isdigit function in C is used to check if a given character is a numeric digit (from '0' to '9'). It returns a non-zero (true) value if the character is a digit, and zero (false) otherwise.

**isalnum**

The isalnum function in C checks if a given character is alphanumeric, meaning it's either a letter (uppercase or lowercase) or a digit. It’s part of the <ctype.h> library.

**isascii**

The isascii function in C checks if a given character is part of the ASCII character set. ASCII characters are those with integer values from 0 to 127.

**isprint**

The isprint function in C checks if a given character is printable, meaning it falls within the range of printable ASCII characters, including spaces but excluding control characters.

**strlen**

The strlen function in C calculates the length of a string, excluding the null terminator ('\0') at the end of the string.

**strlcpy**

The strlcpy function in C is used to copy a string from a source to a destination, ensuring that the destination string is null-terminated and that the copying does not exceed the specified buffer size. This function is considered safer than strcpy, as it helps prevent buffer overflows.

**strlcat**

The strlcat function in C is used to concatenate two strings, similar to strcat, but with added safety. It ensures that the destination buffer is not overrun and always ends with a null terminator if there is space for it. This function appends a source string (src) to the end of a destination string (dst) up to a specified total buffer size (dstsize).

**strchr**

The strchr function in C searches for the first occurrence of a specified character in a string and returns a pointer to that character within the string. If the character c is found, strchr returns a pointer to the first occurrence of c in str.
If c is not found, it returns NULL.

