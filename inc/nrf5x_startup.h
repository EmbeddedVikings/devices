#ifndef NRF5X_STARTUP_H
#define NRF5X_STARTUP_H

typedef void(* irq_handler_t)(void);

void Default_Handler(void);

extern const irq_handler_t isr_vector[];

#endif // NRF5X_STARTUP_H
