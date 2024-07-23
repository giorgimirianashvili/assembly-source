#include <linux/module.h>
#include <linux/kernel.h>

static int init_module(){
	printk(KERN_ALERT "Loaded!\n");
	return 0;
}
static void init_module_exit(void){
	printk(KERN_ALERT "Exitted!\n");
}

module_init(init_module);
module_exit(init_module_exit);
