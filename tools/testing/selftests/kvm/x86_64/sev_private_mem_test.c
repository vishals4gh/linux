// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2022, Google LLC.
 */
#define _GNU_SOURCE /* for program_invocation_short_name */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <private_mem_test_helper.h>

int main(int argc, char *argv[])
{
	execute_sev_vm_with_private_test_mem(
				VM_MEM_SRC_ANONYMOUS_AND_RESTRICTED_MEMFD);

	/* Needs 2MB Hugepages */
	if (get_free_huge_2mb_pages() >= 1) {
		printf("Running SEV VM private mem test with 2M pages\n");
		execute_sev_vm_with_private_test_mem(
				VM_MEM_SRC_ANON_HTLB2M_AND_RESTRICTED_MEMFD);
	} else
		printf("Skipping SEV VM private mem test with 2M pages\n");

	return 0;
}
