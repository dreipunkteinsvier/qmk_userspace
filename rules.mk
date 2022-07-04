# Disable unused features
VIA_ENABLE = no
WPM_ENABLE = no
NKRO_ENABLE = no
AUDIO_ENABLE = no
STENO_ENABLE = no
LEADER_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
UNICODE_ENABLE = no
MOUSEKEY_ENABLE = no
TERMINAL_ENABLE = no
KEY_LOCK_ENABLE = no
RGBLIGHT_ENABLE = no
BOOTMAGIC_ENABLE = no
SLEEP_LED_ENABLE = no
TAP_DANCE_ENABLE = no
VELOCIKEY_ENABLE = no
SWAP_HANDS_ENABLE = no
SPACE_CADET_ENABLE = no

# Common features
LTO_ENABLE = yes
EXTRAKEY_ENABLE = yes
BOOTLOADER = atmel-dfu
BOOTMAGIC_ENABLE = no
COMBO_ENABLE = yes
SRC += combos.c
CAPS_WORD_ENABLE = yes


# Main source file
SRC += dreipunkteinsvier.c

# Features per keyboard

# Fifi
ifeq ($(KEYBOARD), crkbd/rev1)
	RGBLIGHT_ENABLE = yes
	# ifneq ($(strip $(OLED)),)
		OLED_ENABLE = yes
		# WPM_ENABLE = yes
		SRC += split_oled.c
	# endif
endif

# le chiffre
ifeq ($(KEYBOARD), tominabox1/le_chiffre)
	ENCODER_ENABLE = yes
	OLED_ENABLE = yes
	SRC += chiffre_oled.c
endif
