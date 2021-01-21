/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class name here>
 * ---------------------------------------------------------
 * Exercise Number: 10 - Strings and Command Line
 * Author:			*/<your name>/*
 * ----------------------------------------------------------
 * Description:
 * Prints command line arguments
 * ----------------------------------------------------------
 */

/**
 * Prints information about the program invocation:
 * 
 * 1) Separator line: `========================================================`
 * 2) The text: `Invoked '<program_name>' with '<argument_count>' arguments:` where
 *    <program_name> is the name of the invoked application and <argument_count> the number of arguments
 *    excluding the program name.
 * 3) Prints the provided command line arguments in format `#<idx>: <argument>`, each argument in a separate line.
 * 4) If command line argument `--change` is present:
 * 4a) Separator line: `-------------------------------------------------------`
 * 4b) Invoke the function `change_cmd_line(...)` and
 * 4c) Print the line `Modified command line has '<length>' chars:` where <length> is the number of characters of result
 * 4c) Prints the returned text.
 *    __Hint:__ Use `strcmp` to compare strings.
 *    If that command line argument is not set, this step is skipped.
 * 5) Separator line: `========================================================` followed by 2 line breaks.
 * 
 * It mimics the `main` function of the application with respect to formal parameters.
 * @param argc Same as `argc` parameter of `main(argc, argv)`.
 * @param argv Same as `argv` parameter of `main(argc, argv)`.
 * @return int The number of command line attributes, which is the argument count without the application name.
 */
int print_command_line(int argc, char *argv[]);

/**
 * Creates a single string containing all command line arguments - but not the program name - 
 * following the given format and rules:
 * + #<arg_idx>: <argument_0> | #<arg_idx>: <argument_1> | ...
 * + Each occurrence of string 'arg' is replaced by string 'nop'
 * E.g.: The invocation of the program named 'cli_printer' as `cli_printer -my_arg --change -a -r -g a r g 55 end`
 * would create the string: `#0: -my_nop | #1: --change | #2: -a | #3: -r | #4: -g | #5: a | #6: r | #7: g | #8: 55 | #9: end`.
 * 
 * __Note:__ 
 * + The buffer for the resulting string shall be globally created with sufficient size
 * + Use `strstr` to find a substring within a string
 * + Use `s(n)printf` to format numbers
 * + Use `strcat` to concatenate strings
 * + Use `memcpy` to copy a certain amount of bytes
 * 
 * @param argc Same as `argc` parameter of `main(argc, argv)`.
 * @param argv Same as `argv` parameter of `main(argc, argv)`.
 * @return The resulting string.
 */
<type> change_cmd_line(<params>);
