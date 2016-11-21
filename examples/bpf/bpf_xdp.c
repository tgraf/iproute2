#include "../../include/bpf_api.h"

__section_xdp_entry
int xdp_entry(struct xdp_md *ctx)
{
	printt("hello world\n");
	return XDP_DROP;
}

BPF_LICENSE("GPL");
