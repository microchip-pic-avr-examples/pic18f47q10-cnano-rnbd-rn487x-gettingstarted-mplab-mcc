/**
 * \file rn487x_example.c
 * \brief This file contains the APIs required to communicate with the RN487X driver library to 
 *        create, and open a basic Transparent EUSART demonstration.
 */  
/*
    (c) 2022 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include <stdbool.h>
#include <stdint.h>
#include "../../mcc_generated_files/uart/eusart1.h"
#include "rn487x_example.h"
#include "../rn487x/rn487x_interface.h"
#include "../rn487x/rn487x.h"
#include "../system/interrupt.h"
#include "../system/clock.h"

/** MACRO used to configure the application used buffer sizes.
 *  This is used by the application for communication buffers.
 */
#define MAX_BUFFER_SIZE                 (80)

/**< Status Buffer instance passed to RNBD drive used for Asynchronous Message Handling (see *RNBD_AsyncMessageHandlerSet in rnbd.c) */
static char statusBuffer[MAX_BUFFER_SIZE];    

/**
 * \def DEMO_PERIODIC_TRANSMIT_COUNT
 * This macro provide a definition for a periodic data transmission demostration
 */
#define DEMO_PERIODIC_TRANSMIT_COUNT           (100)
/**
 * \def DEMO_PERIODIC_CHARACTER
 * This macro provide a character sent at a periodic rate for demostration
 */
#define DEMO_PERIODIC_CHARACTER                 ('1')
/**
 * \ingroup RN487X_Example
 * \brief Example Implmentation for simple Data Exchange Demostration
 *
 * \return Connected Status
 * \retval true - Connected.
 * \retval false - Not Connected
 */  
static bool RN487X_Example_BasicDataExchange(void);
/**
 * \ingroup RNBD_Example_Run
 * \brief This 'Runs' the example applications While(1) loop
 *
 * For more details, refer  RNBD user guide.
 * \param none
 * \return void
 */  
static void RN487X_Example_Run(void);

bool RN487X_Example_Initialized(void)
{
    bool exampleIsInitialized = false;
    
    exampleIsInitialized = RN487X_AsyncMessageHandlerSet(statusBuffer, sizeof(statusBuffer));
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    RN487X_Init();

    __delay_ms(300);
    
    if (exampleIsInitialized == true)
    {
        RN487X_Example_Run();
    }
    return (false);     // ^ Held if Successful; Return failure if reaching this.
}

static void RN487X_Example_Run(void)
{
    while(1)
    {
        if (true == RN487X_Example_BasicDataExchange())    
        {
            // Connected
        }
        else
        {
            // Not Connected
        }
    }
}

static bool RN487X_Example_BasicDataExchange(void)
{
   static uint16_t periodicCounter = 0;
   bool isConnected;
   volatile uint8_t readData;
   readData = 0;
   isConnected = RN487X_IsConnected();

   if (true == isConnected)
   {
       while (RN487X_isDataReady())
       {
           readData = RN487X_Read();
           // Use the readData as desired
       }
       if (periodicCounter == DEMO_PERIODIC_TRANSMIT_COUNT)
       {
           RN487X.Write(DEMO_PERIODIC_CHARACTER);
           periodicCounter = 0;
       }
       else
       {
           periodicCounter++;
           __delay_ms(1);
       }
   }
   else
    {
        while(RN487X_isDataReady())
        {
            // Clear data; Allow ASYNC processor decode
            readData = RN487X_Read();
        }
    }

    return isConnected;
}
