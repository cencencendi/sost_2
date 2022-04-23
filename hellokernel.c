/*  
 *  hello-3.c - Illustrating the __init, __initdata and __exit macros.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

#define DRIVER_AUTHOR "cendikia.i@mail.ugm.ac.id"
#define DRIVER_DESC   "SOST Project 2"

MODULE_LICENSE("GPL");

static int __init hello_3_init(void)
{
	printk(KERN_INFO "Cendikia Ishmatuka Srihascaryasmoro (19/439607/TK/48337)\n");
	return 0;
}

static void __exit hello_3_exit(void)
{
	printk(KERN_INFO "Once again, my name is Cendikia Ishmatuka S rihascaryasmoro (19/439607/TK/48337)\n\n Nice to meet you!");
}

module_init(hello_3_init);
module_exit(hello_3_exit);
