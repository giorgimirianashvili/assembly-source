#include <linux/module.h>
#include <linux/kernel.h>

static int init_module(){
	int return_value = 0;
	int return_value_if_error = 1;
	return return_value;
}
static void init_module_exit(void){
	printk(KERN_ALERT "Edit text\n");
}

module_init(init_module);
module_exit(init_module_exit);
