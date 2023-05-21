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


#ifndef _mbox_if_h_
#define _mbox_if_h_

/** @brief Unique descriptor for the MBOX_READ() method */
extern struct kobjop_desc mbox_read_desc;
/** @brief A function implementing the MBOX_READ() method */
typedef int mbox_read_t(device_t dev, int channel, uint32_t *data);

static __inline int MBOX_READ(device_t dev, int channel, uint32_t *data)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,mbox_read);
	rc = ((mbox_read_t *) _m)(dev, channel, data);
	return (rc);
}

/** @brief Unique descriptor for the MBOX_WRITE() method */
extern struct kobjop_desc mbox_write_desc;
/** @brief A function implementing the MBOX_WRITE() method */
typedef int mbox_write_t(device_t dev, int channel, uint32_t data);

static __inline int MBOX_WRITE(device_t dev, int channel, uint32_t data)
{
	kobjop_t _m;
	int rc;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,mbox_write);
	rc = ((mbox_write_t *) _m)(dev, channel, data);
	return (rc);
}

#endif /* _mbox_if_h_ */
