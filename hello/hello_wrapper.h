int example_wrapper( int count){
long __res;
__asm__ volatile (
"movl $245, %%eax;"
"movl %1, %%ebx;"
"int $0x80;"
"movl %%eax,%0"
: "=m" (__res) 
: "m" (count)
: "%eax","%ebx","%ecx"
);

return (int)(__res);
}
