#include <machine/rtems-bsd-kernel-space.h>

/*
 * This file is @generated automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   freebsd-org/sys/dev/mbox/mbox_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <rtems/bsd/local/mbox_if.h>

struct kobjop_desc mbox_read_desc = {
	0, { &mbox_read_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc mbox_write_desc = {
	0, { &mbox_write_desc, (kobjop_t)kobj_error_method }
};

