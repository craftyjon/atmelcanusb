#include "stdafx.h"
#include "atmelcanusb.h"

// Uncomment this line to enable debug output
#define DEBUG_ENABLE

ATMELCANUSB_API void MctAdapter_Create()
{
    is_open = false;
    datarate = 0;

#ifdef DEBUG_ENABLE
    AllocConsole();
#endif
}


ATMELCANUSB_API void MctAdapter_Release()
{
    is_open = false;

#ifdef DEBUG_ENABLE
    FreeConsole();
#endif
}


ATMELCANUSB_API bool MctAdapter_Open(const char *bitrate)
{
    // T5Suite passes in the string "4037"
    datarate = strtoul(bitrate, NULL, 10);

#ifdef DEBUG_ENABLE
    std::cout << "Got bitrate " << datarate << std::endl;
#endif

    is_open = true;
    return true;
}


ATMELCANUSB_API bool MctAdapter_IsOpen()
{
    return is_open;
}


/**
 * Sends a message
 * @param id The 11- or 29-bit identifier
 * @param length The number of data bytes (0-8)
 * @param data The data bytes 0..7
 */
ATMELCANUSB_API bool MctAdapter_SendMessage(unsigned int id, unsigned char length, unsigned long data)
{
    return true;
}


/**
 * Receives a message
 * @param id Pointer whose target will be filled with the 11- or 29-bit identifier
 * @param length Pointer whose target will be filled with the number of data bytes (0-8)
 * @param data Pointer whose target will be filled with the data bytes 0..7
 */
ATMELCANUSB_API bool MctAdapter_ReceiveMessage(unsigned int *id, unsigned char *length, unsigned long *data)
{
    return true;
}


ATMELCANUSB_API bool MctAdapter_Close()
{
    is_open = false;
    return true;
}
