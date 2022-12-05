# RN487x Example2: Running Transparent UART Example Application

<br />

![](GUID-8E99A785-AE04-48F7-BBD4-7259DC3B5F9B-low.png)

<br />

<br />

|Transparent Serial:|
|-------------------|
|<br /> This example will demostrat data transmitted from a PC serial<br /> terminal is written to a smart phone app and vice versa. The MCU<br /> device will act as a bridge, and pass data between RNBD Module â†?<br /> MCU â†’ Serial Terminal.<br /> This action will occur when STREAM\_OPEN is processed<br /> through the Message Handler. For this example, data typed into<br /> the Serial Terminal will appear on the BLE Phone Application,<br /> and Data sent from the Application will appear on the Serial<br /> Terminal.<br />|

<br />

1.  Download and Install Phone Application for demonstration:
    -   **Microchip Bluetooth Data** by **Microchip** from the [App Store](https://apps.apple.com/us/app/microchip-bluetooth-data/id1319166097) or from [Google Play](https://play.google.com/store/apps/details?id=com.microchip.bluetooth.data&hl=en_IN&gl=US).
2.  Launch the Phone Application

    ![](GUID-10887333-0442-467E-B79B-6A17DB835DB2-low.png)

    ![](GUID-7271A2D0-99A8-41F4-BB4C-269F2F83820C-low.png)

    <br />

    ![](GUID-8A9EE9CE-AA92-4648-8364-09987F2E0526-low.png)

    <br />

    After Installing open the MBD App and Click on **BLE UART** Sub Apps:

    <br />

    ![](GUID-D647FF96-CA12-4FA0-A3AA-29C6D6C3DF9D-low.png)

    <br />

3.  On Selecting BM70 scan for available devices to connect.

    <br />

    ![](GUID-6B7B0F61-A3A7-478C-A253-06E561E1313F-low.png)

    <br />

    Click on the below Scan image to scan the Nearby "RN487x-xxxx"

    <br />

    ![](GUID-C7AB4C05-260C-4C69-AF6D-298B9E02F302-low.png)

    <br />

    The Application will automatically scan the area for Bluetooth devices within<br /> a range. By default, the device should appear as "RN487x-xxxx"

    <br />

    ![](GUID-C36CEB36-58F8-4DAD-8800-358F70E56B66-low.png)

    <br />

4.  For Transparent Serial only: Open a "Serial Terminal" Program such as Tera Term, Realterm, PuTTY, Serial; or similar. Baud Rate will be configured as: 115200

    <br />

    ![](GUID-B18B65D8-9AA3-478A-A674-DEB871E086CA-low.png)

    <br />

    <br />

    ![](GUID-BC559EA4-E40C-4332-9EF3-4BA8F919AFE6-low.png)

    <br />

5.  Once Connected with RN487x-xxxx click on Transfer data to device as shown below to initiate the data transfer.

    <br />

    ![](GUID-B3297905-2011-452F-8141-887853ECF6AD-low.png)

    <br />

    - Check Serial Terminal for the status of the connection.

    <br />

    ![](GUID-DF2150F8-89DC-4876-B351-D59A58E34272-low.png)

    <br />

6.  Enter the text to be transferred from mobile to RN487x-xxxx device and click send button

    <br />

    ![](GUID-B8693063-53D6-4080-AD8C-3906E2698F6C-low.png)

    <br />

    - The data will be received at the RN487x-xxxx side and will be displayed in<br /> serial terminal of RNBD45x

    <br />

    ![](GUID-E0106617-7CA8-4508-AE5A-278D8E8B737B-low.png)

    <br />

7.  Type any data on the serial terminal of the RN487x-xxxx to send to the Microchip Bluetooth Data App, which is received and printed on the receive view of the Microchip Bluetooth App.

    <br />

    ![](GUID-CEC4E31B-D080-4A65-8350-81D62D130FC9-low.png)

    <br />

    <br />

    ![](GUID-E985EFE1-6B23-4A76-86DE-E349AF41D0F1-low.png)

    <br />


**Parent topic:**[RN487x Set Up and Running Example](GUID-F2370094-12C3-4CC6-B1DF-5465EBC4FC33.md)

