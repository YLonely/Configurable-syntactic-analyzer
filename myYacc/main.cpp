// myYacc.cpp : �������̨Ӧ�ó������ڵ㡣
// A simple Parser based on LR(1).

#include "stdafx.h"
extern set* sets_arr[100];
extern int sets_num;

int main()
{
	char *grammar_path = "D:/Personal/Desktop/yacc.txt";
	char *regex_path = "D:/Personal/Desktop/regex.txt";
	char *code_path = "D:/Personal/Desktop/code.txt";

	yacc_init(grammar_path, regex_path, code_path);
	yacc_analyze();
	getchar();
}

