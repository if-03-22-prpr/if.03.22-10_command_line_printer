/**
* @mainpage
* @section intro Introduction
* A simple application that prints and optionally modifies the command line with which it is invoked.
*
* The application shall produce the following output:
*
* -# Separator line: `========================================================`
* -# The text: `Invoked '<program_name>' with '<argument_count>' arguments:` where
*    <program_name> is the name of the invoked application and <argument_count> the number of arguments
*    excluding the program name.
* -# Prints the provided command line arguments in format `#<idx>: <argument>`, each argument in a separate line.
* -# If command line argument `--change` is present:
*     -# Separator line: `-------------------------------------------------------`
*     -# Invoke the function `change_cmd_line(...)` and
*     -# Print the line `Modified command line has '<length>' chars:` where <length> is the number of characters of result
*     -# Prints the returned text.
*     If that command line argument `--change` is not set, step 4) including all its sub-steps is skipped.
* -# Separator line: `========================================================` followed by 2 line breaks.
* 
* @section example Example Output
* **Example 1:** ./cli_printer
*
* <code><pre>
* ========================================================
* Invoked './cli_printer' with '0' arguments:`
* ========================================================
* </pre></code>
*
* **Example 2:** ./cli_printer -arg1 -arg2 -arg3
* 
* <code><pre>
* ========================================================
* Invoked './cli_printer' with '3' arguments:
* #1: -arg1
* #2: -arg2
* #3: -arg3
* ========================================================
* </pre></code>
* 
* **Example 3:** ./cli_printer -arg1 -arg2 -arg3 --change
* 
* <code><pre>
* ========================================================
* Invoked './cli_printer' with '4' arguments:
* #1: -arg1
* #2: -arg2
* #3: -arg3
* #4: --change
* -------------------------------------------------------
* Modified command line has '48' chars:
* #0: -nop1 | #1: -nop2 | #2: -nop3 | #3: --change
* ========================================================
* </pre></code>
* 
* **Example 4:** ./cli_printer -arg1 a r g --change -argument -ARG5 -another6 77 -arg8
* 
* <code><pre>
* ========================================================
* Invoked './cli_printer' with '10' arguments:
* #1: -arg1
* #2: a
* #3: r
* #4: g
* #5: --change
* #6: -argument
* #7: -ARG5
* #8: -another6
* #9: 77
* #10: -arg8
* -------------------------------------------------------
* Modified command line has '113' chars:
* #0: -nop1 | #1: a | #2: r | #3: g | #4: --change | #5: -nopument | #6: -ARG5 | #7: -another6 | #8: 77 | #9: -nop8
* ========================================================
* </pre></code>
* 
* @section objective Assignment Objective
* In this assignment string related functions and command line arguments shall be evaluated and used.
*
* @section assignment Assignment
* This is a rather simple assignment, but nevertheless it is useful, to develop the code in a focused and clean way, step by step.
* Unit tests are provided to ease development.
*
* Complete header file `cmd_line_printer.h` and implement required functions in file `cmd_line_printer.c`.
* Other files don't need  to be changed.
*
* - Types in template files may be marked as `<type>` within header and source files or may be omitted completely. Replace `<type>`
*   with the correct type and complete missing types. Some types, those which are shared among multiple sources, are located in `general.h`.
* - Parameter lists of function in a template files may be missing or incomplete.
*
* - Don't forget to **COMMIT** after each step.
*
*  __Hints:__ 
* + Use `strcmp` to compare strings.
* + Use `strstr` to find a substring within a string
* + Use `s(n)printf` to format numbers.
* + Use `strcat` to concatenate strings.
* + Use `strlen` to determine the length of a string.
* + Use `memcpy` to copy a certain amount of bytes.
* + Read and obey the comment within the code.
*
* @section notes Notes
* + make cleantest: This new make target for clearing the console, building, and running unit test is available.
*/