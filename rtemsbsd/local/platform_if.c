#include <machine/rtems-bsd-kernel-space.h>

/*
 * This file is @generated automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   freebsd-org/sys/arm/arm/platform_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/devmap.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/smp.h>
#include <machine/machdep.h>
#include <machine/platform.h>
#include <machine/platformvar.h>
#include <machine/smp.h>
#include <machine/vmparam.h>
#include <rtems/bsd/local/platform_if.h>


static void platform_null_attach(platform_t plat)
{
	return;
}

static vm_offset_t platform_default_lastaddr(platform_t plat)
{
	return (devmap_lastaddr());
}

static void platform_default_mp_setmaxid(platform_t plat)
{
	mp_ncpus = 1;
	mp_maxid = 0;
}

struct kobjop_desc platform_probe_desc = {
	0, { &platform_probe_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc platform_attach_desc = {
	0, { &platform_attach_desc, (kobjop_t)platform_null_attach }
};

struct kobjop_desc platform_devmap_init_desc = {
	0, { &platform_devmap_init_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc platform_lastaddr_desc = {
	0, { &platform_lastaddr_desc, (kobjop_t)platform_default_lastaddr }
};

struct kobjop_desc platform_gpio_init_desc = {
	0, { &platform_gpio_init_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc platform_late_init_desc = {
	0, { &platform_late_init_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc platform_mp_setmaxid_desc = {
	0, { &platform_mp_setmaxid_desc, (kobjop_t)platform_default_mp_setmaxid }
};

struct kobjop_desc platform_mp_start_ap_desc = {
	0, { &platform_mp_start_ap_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc platform_cpu_reset_desc = {
	0, { &platform_cpu_reset_desc, (kobjop_t)kobj_error_method }
};

