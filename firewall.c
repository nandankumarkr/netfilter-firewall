#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nandan Kumar");
MODULE_DESCRIPTION("My kernel module");
static int __init dummy_init(void){
	printk(KERN_INFO "Hi from kernel module\n");
	return 0;
}
static void __exit dummy_exit(void){
	printk(KERN_INFO "bye from kernel module\n");
}
module_init(dummy_init);
module_exit(dummy_exit);


