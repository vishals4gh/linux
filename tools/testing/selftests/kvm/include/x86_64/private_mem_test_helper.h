/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2022, Google LLC.
 */

#ifndef SELFTEST_KVM_PRIVATE_MEM_TEST_HELPER_H
#define SELFTEST_KVM_PRIVATE_MEM_TEST_HELPER_H

#include <stdint.h>
#include <kvm_util.h>

void execute_vm_with_private_test_mem(
			enum vm_mem_backing_src_type test_mem_src);

#endif /* SELFTEST_KVM_PRIVATE_MEM_TEST_HELPER_H */
