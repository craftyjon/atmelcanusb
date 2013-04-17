#ifdef ATMELCANUSB_EXPORTS
#define ATMELCANUSB_API __declspec(dllexport)
#else
#define ATMELCANUSB_API __declspec(dllimport)
#endif

// I am using the names from the Mictronics DLL because
// this one is supported as "DIY" adapter in T5Suite.
// I can't rebuild T5Suite as easily due to library dependencies.

ATMELCANUSB_API void MctAdapter_Create(void);

ATMELCANUSB_API void MctAdapter_Release(void);

ATMELCANUSB_API bool MctAdapter_Open(char* bitrate);

ATMELCANUSB_API bool MctAdapter_IsOpen(void);

ATMELCANUSB_API bool MctAdapter_SendMessage(unsigned int id, unsigned char length, unsigned char *data);

ATMELCANUSB_API bool MctAdapter_ReceiveMessage(unsigned int *id, unsigned char *length, unsigned char *data);

ATMELCANUSB_API bool MctAdapter_Close(void);