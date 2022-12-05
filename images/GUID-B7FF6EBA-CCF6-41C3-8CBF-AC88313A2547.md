# RN487x Transparent UART Application PIN Settings

<br />

-   PIC18F47Q10 MCC Configuration - Transparent Serial Example

    ![](GUID-D1B8B8C2-4B18-46AF-A5F5-68EA69310BFB-low.png)

    <br />

    ![](GUID-5A486D17-CC9C-4224-ACC2-3C50A3FC01D0-low.png)

    <br />


<br />

Since PIC18F47Q10 has only **Two Instance** of EUSART's the second EUSART was loaded<br /> Automatically for CDC UART \(If Device has more Number of Instances will be listed<br /> accordingly to select the respective EUSART's\)

![](GUID-442D1FB2-1B4A-4D4E-9F6B-5B457F25EC50-low.png)

**Note:**

-   Transparent UART Application uses two instance EUSART1 & EUSART2 for data transfer
-   Make sure **Interrupt Driven** was enabled for both **EUSART1** & **EUSART2**.
-   **Important:** EUSART Rx1/Tx1 & Rx2/Tx2 **Uncheck** Analog, Slew Rate & Input Level Control checkboxes as shown below.

    <br />

    ![](GUID-6FE8C4EC-D58D-4571-B1FF-EACC4DD81068-low.png)

    <br />

    ![](GUID-2588BC61-2739-4821-BF2A-8EBBC69C45E8-low.png)


Configuration for PIC Transparent UART was completed click [here](GUID-46C11149-1505-4DF7-86F9-FAB478F1DEF6.md) for code<br /> generation steps.

**Parent topic:**[RN487x Set Up and Running Example](GUID-F2370094-12C3-4CC6-B1DF-5465EBC4FC33.md)

