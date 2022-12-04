#include "/home/jawad/xv6-riscv/kernel/types.h"
#include "/home/jawad/xv6-riscv/kernel/stat.h"
#include "user.h"
#include <stddef.h>

int main(void)
{

printf("hello ran and trace gave = %d\n",trace("/home/jawad/xv6-riscv/file1.txt"));
open("/home/jawad/xv6-riscv/file1.txt",0);
open("/home/jawad/xv6-riscv/file1.txt",0);
open("/home/jawad/xv6-riscv/file1.txt",0);
printf("value of getcount is = %d\n",getcount());

exit(0);
}
