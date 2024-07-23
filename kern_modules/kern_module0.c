#include <linux/module.h>
#include <linux/kernel.h>

static int init_module(){ // main function
	printk(KERN_INFO "Edit text\n"); // use this for a simple kernel logs
	printk(KERN_ALERT "Edit text\n"); // use this for a kernel alert
	return 0;
}
static void init_module_exit(void){ // exit function
	printk(KERN_ALERT "Edit text\n"); // use this for a kernel alert exit
}


module_init(init_module); // load init_module() on the load
module_exit(init_module_exit); // load init_module_exit(void) on the exit
