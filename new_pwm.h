#ifndef _NEW_PWM_H
#define _NEW_PWM_H

#include <stdint.h>

void pwm_init(uint32_t period, uint32_t *duty, uint32_t pwm_channel_num, uint32_t (*pin_info_list)[3]);
void pwm_start(void);
void pwm_set_duty(uint32_t duty, uint8_t channel);
uint32_t pwm_get_duty(uint8_t channel);
void pwm_set_period(uint32_t period);
uint32_t pwm_get_period(void);
uint32_t get_pwm_version(void);
void set_pwm_debug_en(uint8_t print_en);

#endif
