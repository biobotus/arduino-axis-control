/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino/Genuino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define F_CPU 16000000L
#define ARDUINO 166
#define ARDUINO_AVR_MEGA2560
#define ARDUINO_ARCH_AVR
#define __cplusplus
#define __AVR__
#define __inline__
#define __asm__(x)
#define __extension__
//#define __ATTR_PURE__
//#define __ATTR_CONST__
#define __inline__
//#define __asm__ 
#define __volatile__
#define GCC_VERSION 40801
#define volatile(va_arg) 
#define _CONST
typedef void *__builtin_va_list;
#define __builtin_va_start
#define __builtin_va_end
//#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
#ifndef __builtin_constant_p
#define __builtin_constant_p __attribute__((__const__))
#endif
#ifndef __builtin_strlen
#define __builtin_strlen  __attribute__((__const__))
#endif
#define NEW_H
/*
#ifndef __ATTR_CONST__
#define __ATTR_CONST__ __attribute__((__const__))
#endif

#ifndef __ATTR_MALLOC__
#define __ATTR_MALLOC__ __attribute__((__malloc__))
#endif

#ifndef __ATTR_NORETURN__
#define __ATTR_NORETURN__ __attribute__((__noreturn__))
#endif

#ifndef __ATTR_PURE__
#define __ATTR_PURE__ __attribute__((__pure__))
#endif            
*/
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include <arduino.h>
#include <pins_arduino.h> 
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <..\Marlin Biobot\Marlin.pde>
#include <..\Marlin Biobot\BlinkM.cpp>
#include <..\Marlin Biobot\BlinkM.h>
#include <..\Marlin Biobot\Configuration.h>
#include <..\Marlin Biobot\ConfigurationStore.cpp>
#include <..\Marlin Biobot\ConfigurationStore.h>
#include <..\Marlin Biobot\Configuration_adv.h>
#include <..\Marlin Biobot\DOGMbitmaps.h>
#include <..\Marlin Biobot\LiquidCrystalRus.cpp>
#include <..\Marlin Biobot\LiquidCrystalRus.h>
#include <..\Marlin Biobot\Marlin.h>
#include <..\Marlin Biobot\Marlin.ino>
#include <..\Marlin Biobot\MarlinSerial.cpp>
#include <..\Marlin Biobot\MarlinSerial.h>
#include <..\Marlin Biobot\Marlin_main.cpp>
#include <..\Marlin Biobot\Sd2Card.cpp>
#include <..\Marlin Biobot\Sd2Card.h>
#include <..\Marlin Biobot\Sd2PinMap.h>
#include <..\Marlin Biobot\SdBaseFile.cpp>
#include <..\Marlin Biobot\SdBaseFile.h>
#include <..\Marlin Biobot\SdFatConfig.h>
#include <..\Marlin Biobot\SdFatStructs.h>
#include <..\Marlin Biobot\SdFatUtil.cpp>
#include <..\Marlin Biobot\SdFatUtil.h>
#include <..\Marlin Biobot\SdFile.cpp>
#include <..\Marlin Biobot\SdFile.h>
#include <..\Marlin Biobot\SdInfo.h>
#include <..\Marlin Biobot\SdVolume.cpp>
#include <..\Marlin Biobot\SdVolume.h>
#include <..\Marlin Biobot\Servo.cpp>
#include <..\Marlin Biobot\Servo.h>
#include <..\Marlin Biobot\boards.h>
#include <..\Marlin Biobot\cardreader.cpp>
#include <..\Marlin Biobot\cardreader.h>
#include <..\Marlin Biobot\digipot_mcp4451.cpp>
#include <..\Marlin Biobot\dogm_font_data_marlin.h>
#include <..\Marlin Biobot\dogm_lcd_implementation.h>
#include <..\Marlin Biobot\fastio.h>
#include <..\Marlin Biobot\language.h>
#include <..\Marlin Biobot\language_an.h>
#include <..\Marlin Biobot\language_ca.h>
#include <..\Marlin Biobot\language_de.h>
#include <..\Marlin Biobot\language_en.h>
#include <..\Marlin Biobot\language_es.h>
#include <..\Marlin Biobot\language_eu.h>
#include <..\Marlin Biobot\language_fi.h>
#include <..\Marlin Biobot\language_fr.h>
#include <..\Marlin Biobot\language_it.h>
#include <..\Marlin Biobot\language_nl.h>
#include <..\Marlin Biobot\language_pl.h>
#include <..\Marlin Biobot\language_pt.h>
#include <..\Marlin Biobot\language_ru.h>
#include <..\Marlin Biobot\motion_control.cpp>
#include <..\Marlin Biobot\motion_control.h>
#include <..\Marlin Biobot\pins.h>
#include <..\Marlin Biobot\planner.cpp>
#include <..\Marlin Biobot\planner.h>
#include <..\Marlin Biobot\qr_solve.cpp>
#include <..\Marlin Biobot\qr_solve.h>
#include <..\Marlin Biobot\speed_lookuptable.h>
#include <..\Marlin Biobot\stepper.cpp>
#include <..\Marlin Biobot\stepper.h>
#include <..\Marlin Biobot\temperature.cpp>
#include <..\Marlin Biobot\temperature.h>
#include <..\Marlin Biobot\thermistortables.h>
#include <..\Marlin Biobot\ultralcd.cpp>
#include <..\Marlin Biobot\ultralcd.h>
#include <..\Marlin Biobot\ultralcd_implementation_hitachi_HD44780.h>
#include <..\Marlin Biobot\ultralcd_st7920_u8glib_rrd.h>
#include <..\Marlin Biobot\vector_3.cpp>
#include <..\Marlin Biobot\vector_3.h>
#include <..\Marlin Biobot\watchdog.cpp>
#include <..\Marlin Biobot\watchdog.h>
#endif
