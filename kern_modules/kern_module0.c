#include <linux/module.h>
#include <linux/kernel.h>

int init_module(){
	printk(KERN_INFO "Edit text\n");
	return 0;
}
