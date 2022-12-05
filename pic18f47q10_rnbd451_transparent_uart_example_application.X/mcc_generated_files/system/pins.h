/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSELB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)
   
// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSELB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)
   
// get/set RC5 aliases
#define BT_STATUS_IND_2_TRIS                 TRISCbits.TRISC5
#define BT_STATUS_IND_2_LAT                  LATCbits.LATC5
#define BT_STATUS_IND_2_PORT                 PORTCbits.RC5
#define BT_STATUS_IND_2_WPU                  WPUCbits.WPUC5
#define BT_STATUS_IND_2_OD                   ODCONCbits.ODCC5
#define BT_STATUS_IND_2_ANS                  ANSELCbits.ANSELC5
#define BT_STATUS_IND_2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define BT_STATUS_IND_2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define BT_STATUS_IND_2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define BT_STATUS_IND_2_GetValue()           PORTCbits.RC5
#define BT_STATUS_IND_2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define BT_STATUS_IND_2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define BT_STATUS_IND_2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define BT_STATUS_IND_2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define BT_STATUS_IND_2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define BT_STATUS_IND_2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define BT_STATUS_IND_2_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define BT_STATUS_IND_2_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)
   
// get/set RC6 aliases
#define BT_STATUS_IND_1_TRIS                 TRISCbits.TRISC6
#define BT_STATUS_IND_1_LAT                  LATCbits.LATC6
#define BT_STATUS_IND_1_PORT                 PORTCbits.RC6
#define BT_STATUS_IND_1_WPU                  WPUCbits.WPUC6
#define BT_STATUS_IND_1_OD                   ODCONCbits.ODCC6
#define BT_STATUS_IND_1_ANS                  ANSELCbits.ANSELC6
#define BT_STATUS_IND_1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define BT_STATUS_IND_1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define BT_STATUS_IND_1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define BT_STATUS_IND_1_GetValue()           PORTCbits.RC6
#define BT_STATUS_IND_1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define BT_STATUS_IND_1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define BT_STATUS_IND_1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define BT_STATUS_IND_1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define BT_STATUS_IND_1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define BT_STATUS_IND_1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define BT_STATUS_IND_1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define BT_STATUS_IND_1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)
   
// get/set RC7 aliases
#define BT_RST_TRIS                 TRISCbits.TRISC7
#define BT_RST_LAT                  LATCbits.LATC7
#define BT_RST_PORT                 PORTCbits.RC7
#define BT_RST_WPU                  WPUCbits.WPUC7
#define BT_RST_OD                   ODCONCbits.ODCC7
#define BT_RST_ANS                  ANSELCbits.ANSELC7
#define BT_RST_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define BT_RST_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define BT_RST_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define BT_RST_GetValue()           PORTCbits.RC7
#define BT_RST_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define BT_RST_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define BT_RST_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define BT_RST_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define BT_RST_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define BT_RST_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define BT_RST_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define BT_RST_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/