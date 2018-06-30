# Teacup_PCBScriber

DEPRECATED: The firmware modifications here were incorporated into the experimental branch of the Teacup firmware, so please use that instead.

This is a variation on the popular Teacup_Firmware for RepRaps and 3D printers, that's used for a RepStrap that produces Scratch'n'Etch PCBs. ( https://github.com/Traumflug/Teacup_Firmware )

Most of the files are identical to the most recent release of Teacup_Firmware (as of this writing), with the addition of "scriber.c", "scriber.h", and the config files "printer.mgscriber.h" and "board.mgscriber-uno-0002.h". There are also some changes to how gcode is processed and to homing.

While Teacup is made to support a range of microcontrollers and electronics setup, Teacup_PCBScriber only supports an Arduino UNO-based setup with a stripped down RAMPs-style shield (at this time). If you're using this with your setup, you will at the very least go through the config files and make any changes to pin numbers, etc., that you need.
