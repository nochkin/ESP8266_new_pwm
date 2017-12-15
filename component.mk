# Component makefile for extras/new_pwm

INC_DIRS += $(ROOT)extras/new_pwm

# args for passing into compile rule generation
new_pwm_INC_DIR =  $(ROOT)extras/new_pwm
new_pwm_SRC_DIR =  $(ROOT)extras/new_pwm
new_pwm_CFLAGS += -DFREERTOS

$(eval $(call component_compile_rules,new_pwm))
