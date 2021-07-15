#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void) {
    printk(KERN_ALERT "Hello world~~! \n");
    return 0;
}

static void goobye_exit(void) {
    printk(KERN_ALERT "Goodbye ! world!~~");
}

module_init(hello_init);
module_exit(goobye_exit);