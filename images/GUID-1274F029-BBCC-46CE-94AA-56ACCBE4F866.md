# RNBD GPIO Based Connection Setup

The RNBD451 device has BT Status indication 1 and BT Status indication 2 pins which can be used<br /> to indicate GPIO based connection status. This feature can be useful in the scenario<br /> were the host MCU can verify the BT connection status by monitoring the status<br /> indication pins other than monitoring the connect message in the serial UART prints.

**Ble Status Indication Pin Table:**

<br />

![](GUID-7D357103-8BE2-4E40-92A3-AC9C96EA66F3-low.png)

<br />

**PIN Mapping Between RNBD BLE Status 1 & 2 Pins with PIC18F47Q10:**

<br />

|Pin Functionality|RNBD Pin Number|PIC18F47Q10 Pin Number|
|-----------------|---------------|----------------------|
|Ble Status Indication 1|PB3|PC6|
|Ble Status Indication 2|PB7|PC5|

<br />

<br />

1.  Selecting GPIO Based Connection for Both Basic Data Exchange & Transparent UART Application

    <br />

    ![](GUID-42CB6072-67E2-41F0-9FA7-DEA213D82BEF-low.png)

    <br />

2.  Pin Selection for Status Indication 1 & 2 Pins under Pin Grid View:

    <br />

    ![](GUID-ABA4FB55-3159-4888-AD73-0D69332AB1C4-low.png)

    <br />

3.  Pins Setting under Project Resource:

    <br />

    ![](GUID-2EDBAA59-E30C-4459-BD3C-59BEDE31AC47-low.png)

    <br />

    By Default Analog, Start High, Weak Pullup, Slew Rate, Input Level Control<br /> checks will be selected for Status Indication Pin 1 & 2

    <br />

    ![](GUID-8C132405-1139-44C8-AB9B-CB2B371A3993-low.png)

    <br />

    **Uncheck** the Analog, Start High, Weak Pullup, Slew Rate, Input Level<br /> Control checks as shown in the below Picture

    <br />

    ![](GUID-7D79A1BF-651F-4961-ACB5-42E7F1AD9E5E-low.png)

    <br />


<br />

**Parent topic:**[RNBD451 Set Up & Running Example Application](GUID-67A04F29-B099-418B-A3E7-B4781BE8AF34.md)

