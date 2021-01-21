/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Exercise Number: 10
 * Title:			Implementation of UTs for Command Line Printer
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Test functions for Command Line Printer.
 * ----------------------------------------------------------
 */

#include "test_cmd_line_printer.h"
#include "cmd_line_printer.h"

#include <stdio.h>
#include <string.h>

#include "shortcut.h"

TEST(test_argument_cnt_empty) {
    char pg_name[] = "prog_name";
    char* args[] = {pg_name};
    int len = sizeof(args)/sizeof(args[0]);
    int act_cnt = print_command_line(len, args);
	ASSERT_TRUE(act_cnt == len -1, MSG("Expected length of %d but got %d", len -1, act_cnt));
}

TEST(test_argument_cnt_many) {
    char pg_name[] = "prog_name";
    char arg0[] = "abc";
    char arg1[] = "def";
    char arg2[] = "--change";
    char arg3[] = "argument";
    char* args[] = {pg_name, arg0, arg1, arg2, arg3};
    int len = sizeof(args)/sizeof(args[0]);
    int act_cnt = print_command_line(len, args);
	ASSERT_TRUE(act_cnt == (len -1), MSG("Expected length of %d but got %d", len -1, act_cnt));
}

TEST(test_argument_line_empty) {
    char pg_name[] = "prog_name";
    char* args[] = {pg_name};
    int len = sizeof(args)/sizeof(args[0]);
    char* res = change_cmd_line(len, args);
	ASSERT_EQUALS_STR("", res);
}

TEST(test_argument_line_1) {
    char pg_name[] = "prog_name";
    char arg0[] = "abc";
    char arg1[] = "def";
    char arg2[] = "--change";
    char arg3[] = "argument";
    char* args[] = {pg_name, arg0, arg1, arg2, arg3};
    int len = sizeof(args)/sizeof(args[0]);
    char* res = change_cmd_line(len, args);
	ASSERT_EQUALS_STR("#0: abc | #1: def | #2: --change | #3: nopument", res);
}

TEST(test_argument_line_2) {
    char pg_name[] = "prog_name";
    char arg0[] = "arg";
    char arg1[] = "def";
    char arg2[] = "--change";
    char arg3[] = "noarg";
    char* args[] = {pg_name, arg0, arg1, arg2, arg3};
    int len = sizeof(args)/sizeof(args[0]);
    char* res = change_cmd_line(len, args);
	ASSERT_EQUALS_STR("#0: nop | #1: def | #2: --change | #3: nonop", res);
}