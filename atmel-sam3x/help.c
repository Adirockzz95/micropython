
#include "py/builtin.h"

const  char *help_text = 
"Welcome to Micropython!\n"
"\n"
"Quick overview of commands supported fot the board:\n"
" machine.sleep_ms(n)           --- wait for n milliseconds\n"
" machine.sleep_us(n)           --- wait for n microseconds\n"
" machine.millis()              --- get number of milliseconds since hard reset\n"
" machine.disable_irq()         --- Disable Interrupts\n"
" machine.enable_irq()          --- Enable Interrupts\n"
" machine.wfi()                 --- suspend execution until an interrupt occures"
" machine.LED()                 --- creates a LED object for onboard LED\n"
"                               LED methods: on(), off(), toggle()\n"
" machine.Pin(pin)              --- creates a Pin object associated with that pin\n"
"                               Pin methods: init(..), value([v]), mode()\n"
" machine.Pin(pin, m)           --- get a pin and configure it for IO mode\n"
"                               Pin methods: same as above\n"							
" machine.ADC(n)                --- make an analog object for pin\n"
"                               ADC pins: A0 to A11\n"
"                               ADC resolution: 12 bit\n"
"                               ADC methods: read()\n"
" machine.DAC(n)                --- make a DAC object\n"
"                               DAC pins: DAC0, DAC1\n"
"                               DAC methods: write(n)\n"
"                               DAC resolution: 12 bit\n"
" machine.PWM(n, [freq, duty])  --- creates a PWM object\n"
"                               PWM is only supported on pins: 6,7,8,9\n"
"                               PWM resolution: default:8 bit, max: 16bit\n"
"                               PWM methods: resolution(), duty(), deinit()\n"
"\n"
"Pins IO modes are: Pin.OUT, Pin.IN, Pin.PULLUP\n"
"Additional Serial bus object: I2C(n)\n"
"\n"
"Control commands:\n"
"  CTRL-A        -- on a blank line, enter raw REPL mode\n"
"  CTRL-B        -- on a blank line, enter normal REPL mode\n"
"  CTRL-C        -- interrupt a running program\n"
"  CTRL-D        -- on a blank line, do a soft reset of the board\n"
"  CTRL-E        -- on a blank line, enter paste mode\n"
"\n"
;