/*
 * This file is @generated automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   freebsd-org/sys/kern/cpufreq_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _cpufreq_if_h_
#define _cpufreq_if_h_


struct cf_level;
struct cf_setting;

/** @brief Unique descriptor for the CPUFREQ_SET() method */
extern struct kobjop_desc cpufreq_set_desc;
/** @brief A function implementing the CPUFREQ_SET() method */
typedef int cpufreq_set_t(device_t dev, const struct cf_level *level,
                          int priority);

static __inline int CPUFREQ_SET(device_t dev, const struct cf_level *level,
                                int priority)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_set);
	rc = ((cpufreq_set_t *) _m)(dev, level, priority);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_GET() method */
extern struct kobjop_desc cpufreq_get_desc;
/** @brief A function implementing the CPUFREQ_GET() method */
typedef int cpufreq_get_t(device_t dev, struct cf_level *level);

static __inline int CPUFREQ_GET(device_t dev, struct cf_level *level)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_get);
	rc = ((cpufreq_get_t *) _m)(dev, level);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_LEVELS() method */
extern struct kobjop_desc cpufreq_levels_desc;
/** @brief A function implementing the CPUFREQ_LEVELS() method */
typedef int cpufreq_levels_t(device_t dev, struct cf_level *levels, int *count);

static __inline int CPUFREQ_LEVELS(device_t dev, struct cf_level *levels,
                                   int *count)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_levels);
	rc = ((cpufreq_levels_t *) _m)(dev, levels, count);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_DRV_SET() method */
extern struct kobjop_desc cpufreq_drv_set_desc;
/** @brief A function implementing the CPUFREQ_DRV_SET() method */
typedef int cpufreq_drv_set_t(device_t dev, const struct cf_setting *set);

static __inline int CPUFREQ_DRV_SET(device_t dev, const struct cf_setting *set)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_drv_set);
	rc = ((cpufreq_drv_set_t *) _m)(dev, set);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_DRV_GET() method */
extern struct kobjop_desc cpufreq_drv_get_desc;
/** @brief A function implementing the CPUFREQ_DRV_GET() method */
typedef int cpufreq_drv_get_t(device_t dev, struct cf_setting *set);

static __inline int CPUFREQ_DRV_GET(device_t dev, struct cf_setting *set)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_drv_get);
	rc = ((cpufreq_drv_get_t *) _m)(dev, set);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_DRV_SETTINGS() method */
extern struct kobjop_desc cpufreq_drv_settings_desc;
/** @brief A function implementing the CPUFREQ_DRV_SETTINGS() method */
typedef int cpufreq_drv_settings_t(device_t dev, struct cf_setting *sets,
                                   int *count);

static __inline int CPUFREQ_DRV_SETTINGS(device_t dev, struct cf_setting *sets,
                                         int *count)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_drv_settings);
	rc = ((cpufreq_drv_settings_t *) _m)(dev, sets, count);
	return (rc);
}

/** @brief Unique descriptor for the CPUFREQ_DRV_TYPE() method */
extern struct kobjop_desc cpufreq_drv_type_desc;
/** @brief A function implementing the CPUFREQ_DRV_TYPE() method */
typedef int cpufreq_drv_type_t(device_t dev, int *type);

static __inline int CPUFREQ_DRV_TYPE(device_t dev, int *type)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,cpufreq_drv_type);
	rc = ((cpufreq_drv_type_t *) _m)(dev, type);
	return (rc);
}

#endif /* _cpufreq_if_h_ */
