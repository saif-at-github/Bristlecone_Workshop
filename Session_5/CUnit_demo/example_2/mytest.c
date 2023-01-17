#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"

static FILE* file = NULL;
int init_suite1(void)
{
	if (NULL == (file = fopen("MyFile.txt", "w+"))) {
		return -1;
	}
	else {
		return 0;
	}
}

int clean_suite1(void)
{
	if (0 != fclose(file)) {
		return -1;
	}
	else {
		file = NULL;
		return 0;
	}
}


void test_fprintf(void)
{
	int x1 = 10;

	if (NULL != file) {
		CU_ASSERT(2 == fprintf(file, "Q\n"));
		CU_ASSERT(7 == fprintf(file, "x1 = %d", x1));
	}
}

void test_fread(void)
{
	unsigned char buffer[20];

	if (NULL != file) {
		rewind(file);
		CU_ASSERT(9 == fread(buffer, sizeof(unsigned char), 20, file));
		CU_ASSERT(0 == strncmp(buffer, "Q\nx1 = 10", 9));
	}
}

int main()
{
	CU_pSuite pSuite = NULL;
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();
	pSuite = CU_add_suite("Suite1", init_suite1, clean_suite1);
	if (NULL == pSuite) {
		CU_cleanup_registry();
		return CU_get_error();
	}
	if ((NULL == CU_add_test(pSuite, "fprintf() function Test", test_fprintf)) ||
			(NULL == CU_add_test(pSuite, "fread() function Test", test_fread)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
