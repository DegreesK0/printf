# Tasks Breakdown

### Task 0
Protype: `int _printf(const char *format, ...);`
- [ ] setup the typedef struct
- [ ] setup the conversion specifiers to variadic functions
- [ ] return the number of characters printed, excluding the null byte
- [ ] write output to stdout
- [ ] _Conversion specifiers_
	- [ ] %c print a single character
	- [ ] %s print a string of characters
	- [ ] \%% print a percent sign (\\% also works)

### Task 1
- [ ] Add these _conversion specifiers_
	- [ ] %d print a decimal (base 10) number
	- [ ] %i print an integer in base 10

### Task 2
- [ ] Create a custom conversion specifier
	- [ ] `%b`: the unsigned int argument is converted to binary

### Task 3
- [ ] Handle the following conversion specifiers;
	- [ ] `%u`: print an unsigned decimal (base 10) number
	- [ ] `%o`: print a number in octal (base 8)
	- [ ] `%x`: print a number in hexidecimal (base 16)
	- [ ] `%X`: print a number in upper hexidecimal (base 16)

### Task 4
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.

### Task 5
- [ ] Handle the following custom conversion specifier:
	- [ ]`%S`: prints the string.
	- [ ] Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, - 
	- [ ] followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### Task 6
- [ ] Handle the following conversion specifier;
	- [ ] p: Prints the memory address of a given input

### Task 7
- [ ] Handle the following flag characters for non-custom conversion specifiers:
    - [ ] +
    - [ ] space
    - [ ] #

### Task 8
- [ ] Handle the following length modifiers for non-custom conversion specifiers:
	- [ ] l
	- [ ] h
- [ ] Conversion specifiers to handle: d, i, u, o, x, X

### Task 9
- [ ] Handle the field width for non-custom conversion specifiers.

### Task 10
- [ ] Handle the precision for non-custom conversion specifiers.

### Task 11
- [ ] Handle the `0` flag character for non-custom conversion specifiers.

### Task 12
- [ ] Handle the `-` flag character for non-custom conversion specifiers.

### Task 13
- [ ] Handle the following custom conversion specifier:
	- [ ] r : prints the reversed string

### Task 14
- [ ] Handle the following custom conversion specifier:
    - [ ] R: prints the rot13'ed string

### Task 15
	


[....]

# Setting up the struct
Set up the struct to check variadic functions for %signs before printing values

# What the function should do
- [ ] print normal string ("xyz")
- [ ] print _special characters_
	- [ ] \\\\
	- [ ] \\"
	- [ ] \\'
	- [ ] \\%
- [ ] Turn _special letters into characters_
	- [ ] \\a - audible alert (bell)
	- [ ] \\b - backspace
	- [ ] \\f - form feed
	- [ ] \\n - newline
	- [ ] \\r - carriage return
	- [ ] \\t - tab
	- [ ] \\v - vertical tab
- [ ] Use arguments to print data types (_conversion specifiers_)
	- [ ] %c print a single character
	- [ ] %d print a decimal (base 10) number
	- [ ] %e print an exponential floating-point number
	- [ ] %f print a floating-point number
	- [ ] %g print a general-format floating-point number
	- [ ] %i print an integer in base 10
	- [ ] %o print a number in octal (base 8)
	- [ ] %s print a string of characters
	- [ ] %u print an unsigned decimal (base 10) number
	- [ ] %x print a number in hexidecimal (base 16)
	- [ ] \%% print a percent sign (\\% also works)
- [ ] Check for and print specified _widths_ ("\_" for space)
	- [ ] Right aligned (Default)
		- [ ] ("%5d",0) - _ _ _ 0
		- [ ] ("%5d",-7) - _ _ _ -7
		- [ ] ("%5d",1560133635) - _ _ _ 1560133635
		- [ ] ("%5d",-2035065302) - _ _ _ -2035065302
	- [ ] Left aligned (with "-" sign)
		- [ ] ("%-5d",0) 0 _ _ _ _
		- [ ] ("%-5d",-7) -7 _ _ _
		- [ ] ("%-5d",1560133635) 1560133635
		- [ ] ("%-5d",-2035065302) -2035065302
	- [ ] Zero-fill (0 always goes in front, before justification)
		- [ ] ("%05d",0) 00000
		- [ ] ("%05d",-7) -0007
		- [ ] ("%05d",1560133635) 1560133635
		- [ ] ("%05d",-2035065302) -2035065302
	- [ ] fun with plus ???
		- [ ] ("%+5d",0) +0
		- [ ] ("%+5d",-7) -7
		- [ ] ("%+5d",1560133635) +1560133635
		- [ ] ("%+5d",-2035065302) -2035065302
	- [ ] Invisible plus sign ?????
	- [ ] Plus, Space, and Zero ????
- [ ] Decimal places (_precision_) for floating points (e = 2.718281828)
	- [ ] Normal precision
		- [ ] ("%.0f",e) - 3
		- [ ] ("%.0f.",e) - 3.
		- [ ] ("%.1f",e) - 2.7
		- [ ] ("%.2f",e) - 2.72
		- [ ] ("%.6f",e) - 2.718282
		- [ ] ("%f",e) - 2.718282 (default %6)
		- [ ] ("%.7f",e) - 2.7182818
	- [ ] _width_ an _precision_ conflicts
	- [ ] Other _flag combinations_ with _precision_
- [ ] Edge-cases
	- [ ] Very large numbers
	- [ ] Check what is Before, Between and Behind what you print

# Requirements
## Key things to remember
- We need to use one repository for the group
- We have to have equal contributions on our commits
- no more than a 40/60 split in contribution from both partners

## Authorized functions
```c
write
malloc
free
va_start
va_end
va_copy
va_arg
```


