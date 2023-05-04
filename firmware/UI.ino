/* UI.ino - Interface/menu structure
 *  
 * This file handles the user interface at high level. 
 * In particular, it dynamically calculates what LEDs 
 * should be on, and handles button press events.
 */
 

  
/* getDisplayState is executed at ~1kHz, but not time-critical (if the call takes more than 1ms it will skip the
 * next call, but that is acceptable for IO operations).
 * IMPORTANT: this code may be interrupted at any time by the Core code (processChannel and processCV).
 * Hence, when acessing any global variables that are used in those functions, 
 * interrupts must be disabled with cli() and re-enabled with sei()
 */
