#include <Windows.h>
#pragma comment(lib, "ntdll.lib") // Why?

extern "C" NTSTATUS WINAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrThread, PBOOLEAN StatusPointer);
extern "C" NTSTATUS WINAPI NtRaiseHardError(LONG ErrorStatus, ULONG Unless1, ULONG Unless2, PULONG_PTR Unless3, ULONG ValidResponseOption, PULONG ResponsePointer);