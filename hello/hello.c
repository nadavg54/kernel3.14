#include <linux/kernel.h>

 asmlinkage long sys_hello(int a)
{
        a=a*3;
	printk("Hellooooooooooooooooooooo %d \n",a);
        return 0;
 }
