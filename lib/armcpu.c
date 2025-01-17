#include "armcpu.h" 

void enable_irq(void) 
{ 
	__asm__("push {r0, r1}"); 
	__asm__("mrs r0, cpsr"); 
	__asm__("bic r1, r0, #0x80"); 
	__asm__("msr cpsr, r1"); 
	__asm__("pop {r0, r1}"); 
}

void enable_fiq(void)
{
	__asm__("push {r0, r1}"); 
	__asm__("mrs r0, cpsr"); 
	__asm__("bic r1, r0, #0x40"); 
	__asm__("msr cpsr, r1"); 
	__asm__("pop {r0, r1}"); 
} 

void disable_irq(void)
{
	__asm__("push {r0, r1}"); 
	__asm__("mrs r0, cpsr"); 
	__asm__("orr r1, r0, #0x80"); 
	__asm__("msr cpsr, r1"); 
	__asm__("pop {r0, r1}"); 
}

void disalbe_fiq(void)
{
	__asm__("push {r0, r1}"); 
	__asm__("mrs r0, cpsr"); 
	__asm__("orr r1, r0, #0x80"); 
	__asm__("msr cpsr, r1"); 
	__asm__("pop {r0, r1}");
}
