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

**memset**

The `memset` function in C is used to set a block of memory to a specific value. It’s commonly used to initialize or reset memory to a particular byte value. 
`ptr`: A pointer to the memory block that you want to set.
`value`: The value to set each byte of memory to. This is typically provided as an int, but it's cast to an unsigned char, so only the lowest 8 bits are used.
`num`: The number of bytes to set in the memory block.

**bzero**

The `bzero` function in C is used to set a block of memory to zero. It takes two arguments:
A pointer to the memory area (`void *s`), which is the address of the block you want to set to zero.
The size of the memory block (`size_t len`), which is the number of bytes you want to set to zero.
The function clears the specified area of memory by filling it with 0 values.

**memcpy**

The `memcpy` function in C is used to copy a block of memory from one location to another. 
`dest`: A pointer to the destination memory block where the content will be copied.
`src`: A pointer to the source memory block from which the content will be copied.
`n`: The number of bytes to copy from src to dest.

**memmove**

The `memmove` function in C is used to copy a specified number of bytes from a source memory block to a destination memory block. Its key feature is that it correctly handles overlapping memory regions, which memcpy does not. If the source and destination overlap, memmove ensures that the original source content is copied safely by first copying the data into a temporary buffer.
`dest`: Pointer to the destination memory block where data is to be copied.
`src`: Pointer to the source memory block from which data will be copied.
`n`: Number of bytes to copy.

**memchr**

The `memchr` function in C is used to locate the first occurrence of a specified value in a block of memory. It searches for a given character within a specified number of bytes.
`ptr`: A pointer to the block of memory to be searched.
`value`: The value (character) to search for, passed as an int but treated as an unsigned char.
`num`: The number of bytes to search.
It returns a pointer to the first occurrence of value in the block of memory, or NULL if the value is not found.

**memcmp**

The memcmp function in C compares two blocks of memory (arrays, structures, or any type of memory) byte by byte. It is often used to check if two memory regions are identical or to determine which one is lexicographically smaller or greater.
`ptr1`: A pointer to the first memory block.
`ptr2`: A pointer to the second memory block.
`n`: The number of bytes to compare.

A negative value if the first `n` bytes of `ptr1` are lexicographically less than those of `ptr2`.
A positive value if the first `n` bytes of `ptr1` are lexicographically greater than those of `ptr2`.
Zero if the first `n` bytes of `ptr1` and `ptr2` are equal.

**calloc**

In C, the `calloc` function is used to allocate memory for an array of elements and initialize the memory to zero. 
`num`: The number of elements you want to allocate memory for.
`size`: The size of each element in bytes.
`calloc` allocates memory for num elements, each of size size bytes, and it initializes all of the bytes in the allocated memory to zero.

**substr**

Allocates (with malloc(3)) and returns a substring
from the string `s`. The substring begins at index `start` and is of maximum size `len`.
`s`: The string from which to create the substring.
`start`: The start index of the substring in the
string ’s’. 
`len`: The maximum length of the substring. Returns the substring. NULL if the allocation fails.

**strjoin**

Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of `s1` and `s2`.
`s1`: The prefix string.
`s2`: The suffix string.
Returns the new string. NULL if the allocation fails.

**strtrim**

Allocates (with malloc(3)) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.
`s1`: The string to be trimmed.
`set`: The reference set of characters to trim.
Returns the trimmed string. NULL if the allocation fails.

**split**

Allocates (with malloc(3)) and returns an array of strings obtained by splitting `s` using the character ’c’ as a delimiter. The array must end with a NULL pointer.
`s`: The string to be split.
`c`: The delimiter character.
Returns the array of new strings resulting from the split. NULL if the allocation fails.

**itoa**

Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
`n`: the integer to convert.
The string representing the integer. NULL if the allocation fails.

**strmapi**

Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of `f`.
`s`: The string on which to iterate.
`f`: The function to apply to each character.
Returns the string created from the successive applications of `f`. Returns NULL if the allocation fails.

**striteri**

Applies the function `f` on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to `f` to be modified if necessary.
`s`: The string on which to iterate.
`f`: The function to apply to each character.
Return value: None.

**putchar_fd**

Outputs the character `c` to the given file descriptor.
`c`: The character to output.
`fd`: The file descriptor on which to write.
Return value: None.

**putstr_fd**

Outputs the string `s` to the given file descriptor.
`s`: The string to output.
`fd`: The file descriptor on which to write.
Return value: None.

**putendl_fd**

Outputs the string `s` to the given file descriptor followed by a newline.
`s`: The string to output.
`fd`: The file descriptor on which to write.
Return value: None.

**putnbr_fd**

Outputs the integer `n` to the given file descriptor.
`n`: The integer to output.
`fd`: The file descriptor on which to write.
Return value: None.
