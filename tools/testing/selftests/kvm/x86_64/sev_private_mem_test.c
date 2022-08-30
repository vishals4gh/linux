// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2022, Google LLC.
 */
#define _GNU_SOURCE /* for program_invocation_short_name */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <test_util.h>
#include <kvm_util.h>
#include <private_mem_test_helper.h>

int main(int argc, char *argv[])
{
	/* Tell stdout not to buffer its content */
	setbuf(stdout, NULL);

	execute_sev_memory_conversion_tests();
	return 0;
}
