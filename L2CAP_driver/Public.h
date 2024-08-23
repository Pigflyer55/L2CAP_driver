/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_L2CAPdriver,
    0xcbfc1729,0x9790,0x42ae,0x96,0xdf,0xc7,0x28,0x65,0x71,0x68,0xda);
// {cbfc1729-9790-42ae-96df-c728657168da}
