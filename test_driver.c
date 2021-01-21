/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Exercise Number: 10
 * Title:			Test Driver for Command Line Printer
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Executes all unit tests of Command Line Printer.
 * ----------------------------------------------------------
 */

#include "shortcut.h"
#include "test_cmd_line_printer.h"

int main(int argc, char *argv[])
{
	ADD_TEST(test_argument_cnt_empty);
	ADD_TEST(test_argument_cnt_many);
	ADD_TEST(test_argument_line_empty);
	ADD_TEST(test_argument_line_1);
	ADD_TEST(test_argument_line_2);
	
	run_tests();
	return 0;
}
