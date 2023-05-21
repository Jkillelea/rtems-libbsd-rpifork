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

/**
 * @defgroup PLATFORM platform - KObj methods for ARM platform
 * implementations
 * @brief A set of methods required by all platform implementations.
 * These are used to bring up secondary CPUs, supply the physical memory
 * map, etc.
 *@{
 */

#ifndef _platform_if_h_
#define _platform_if_h_

/** @brief Unique descriptor for the PLATFORM_PROBE() method */
extern struct kobjop_desc platform_probe_desc;
/** @brief A function implementing the PLATFORM_PROBE() method */
typedef int platform_probe_t(platform_t _plat);
/**
 * @brief Probe for whether we are on this platform, returning the standard
 * newbus probe codes. If we have Open Firmware or a flattened device tree,
 * it is guaranteed to be available at this point.
 */

static __inline int PLATFORM_PROBE(platform_t _plat)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_probe);
	rc = ((platform_probe_t *) _m)(_plat);
	return (rc);
}

/** @brief Unique descriptor for the PLATFORM_ATTACH() method */
extern struct kobjop_desc platform_attach_desc;
/** @brief A function implementing the PLATFORM_ATTACH() method */
typedef int platform_attach_t(platform_t _plat);
/**
 * @brief Attach this platform module. This happens before the MMU is online,
 * so the platform module can install its own high-priority MMU module at
 * this point.
 */

static __inline int PLATFORM_ATTACH(platform_t _plat)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_attach);
	rc = ((platform_attach_t *) _m)(_plat);
	return (rc);
}

/** @brief Unique descriptor for the PLATFORM_DEVMAP_INIT() method */
extern struct kobjop_desc platform_devmap_init_desc;
/** @brief A function implementing the PLATFORM_DEVMAP_INIT() method */
typedef int platform_devmap_init_t(platform_t _plat);
/**
 * @brief Called as one of the last steps of early virtual memory
 * initialization, shortly before the new page tables are installed.
 */

static __inline int PLATFORM_DEVMAP_INIT(platform_t _plat)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_devmap_init);
	rc = ((platform_devmap_init_t *) _m)(_plat);
	return (rc);
}

/** @brief Unique descriptor for the PLATFORM_LASTADDR() method */
extern struct kobjop_desc platform_lastaddr_desc;
/** @brief A function implementing the PLATFORM_LASTADDR() method */
typedef vm_offset_t platform_lastaddr_t(platform_t _plat);
/**
 * @brief Called after devmap_init(), and must return the address of the
 * first byte of unusable KVA space.  This allows a platform to carve out
 * of the top of the KVA space whatever reserves it needs for things like
 * static device mapping, and this is called to get the value before
 * calling pmap_bootstrap() which uses the value to size the available KVA.
 */

static __inline vm_offset_t PLATFORM_LASTADDR(platform_t _plat)
{
	kobjop_t _m;
	vm_offset_t rc;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_lastaddr);
	rc = ((platform_lastaddr_t *) _m)(_plat);
	return (rc);
}

/** @brief Unique descriptor for the PLATFORM_GPIO_INIT() method */
extern struct kobjop_desc platform_gpio_init_desc;
/** @brief A function implementing the PLATFORM_GPIO_INIT() method */
typedef void platform_gpio_init_t(platform_t _plat);
/**
 * @brief Called after the static device mappings are established and just
 * before cninit(). The intention is that the routine can do any hardware
 * setup (such as gpio or pinmux) necessary to make the console functional.
 */

static __inline void PLATFORM_GPIO_INIT(platform_t _plat)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_gpio_init);
	((platform_gpio_init_t *) _m)(_plat);
}

/** @brief Unique descriptor for the PLATFORM_LATE_INIT() method */
extern struct kobjop_desc platform_late_init_desc;
/** @brief A function implementing the PLATFORM_LATE_INIT() method */
typedef void platform_late_init_t(platform_t _plat);
/**
 * @brief Called just after cninit(). This is the first of the init
 * routines that can use printf() and expect the output to appear on
 * a standard console.
 */

static __inline void PLATFORM_LATE_INIT(platform_t _plat)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_late_init);
	((platform_late_init_t *) _m)(_plat);
}

/** @brief Unique descriptor for the PLATFORM_MP_SETMAXID() method */
extern struct kobjop_desc platform_mp_setmaxid_desc;
/** @brief A function implementing the PLATFORM_MP_SETMAXID() method */
typedef void platform_mp_setmaxid_t(platform_t _plat);
/**
 * @brief Called by cpu_mp_setmaxid() to set mp_maxid and mp_ncpus.
 */

static __inline void PLATFORM_MP_SETMAXID(platform_t _plat)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_mp_setmaxid);
	((platform_mp_setmaxid_t *) _m)(_plat);
}

/** @brief Unique descriptor for the PLATFORM_MP_START_AP() method */
extern struct kobjop_desc platform_mp_start_ap_desc;
/** @brief A function implementing the PLATFORM_MP_START_AP() method */
typedef void platform_mp_start_ap_t(platform_t _plat);
/**
 * @brief Called by cpu_mp_start to start the secondary processors.
 */

static __inline void PLATFORM_MP_START_AP(platform_t _plat)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_mp_start_ap);
	((platform_mp_start_ap_t *) _m)(_plat);
}

/** @brief Unique descriptor for the PLATFORM_CPU_RESET() method */
extern struct kobjop_desc platform_cpu_reset_desc;
/** @brief A function implementing the PLATFORM_CPU_RESET() method */
typedef void platform_cpu_reset_t(platform_t _plat);
/**
 * @brief Called by cpu_reset to reboot.
 */

static __inline void PLATFORM_CPU_RESET(platform_t _plat)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)_plat)->ops,platform_cpu_reset);
	((platform_cpu_reset_t *) _m)(_plat);
}

#endif /* _platform_if_h_ */
