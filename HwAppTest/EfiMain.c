

#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>


EFI_STATUS EFIAPI UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
  {
     //1.learn how to read stdin out
     /*
      1.use stdout
      2.中文注释
     */
    gST=SystemTable;
    //gST->ConOut->ClearScreen (gST->ConOut);
    gST->ConOut->OutputString(gST->ConOut,L"Hello world!");
    return EFI_SUCCESS;
  }