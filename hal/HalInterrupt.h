#ifndef HAL_HAL_INTERRUPT_H_
#define HAL_HAL_INTERRUPT_H_

#define INTERRUPT_HANDLER_NUM 255

typedef void (*InterHdir_fptr)(void);

void Hal_interrupt_init(void);
void Hal_interrupt_enable(uint32_t interrupt_num); 
void Hal_interrupt_disable(uint32_t interrupt_num);
void Hal_interrupt_register_handler(InterHdir_fptr handler,uint32_t interrupt_num); 
void Hal_interrupt_run_handler(void); 

#endif 
