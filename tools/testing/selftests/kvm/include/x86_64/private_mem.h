/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2022, Google LLC.
 */

#ifndef SELFTEST_KVM_PRIVATE_MEM_H
#define SELFTEST_KVM_PRIVATE_MEM_H

#include <stdint.h>
#include <kvm_util.h>

void kvm_hypercall_map_shared(uint64_t gpa, uint64_t size);
void kvm_hypercall_map_private(uint64_t gpa, uint64_t size);

void vm_unback_private_mem(struct kvm_vm *vm, uint64_t gpa, uint64_t size);

void vm_allocate_private_mem(struct kvm_vm *vm, uint64_t gpa, uint64_t size);

void handle_vm_exit_map_gpa_hypercall(struct kvm_vm *vm, uint64_t gpa,
	uint64_t npages, uint64_t attrs);

void vcpu_run_and_handle_mapgpa(struct kvm_vm *vm, struct kvm_vcpu *vcpu);

#endif /* SELFTEST_KVM_PRIVATE_MEM_H */
