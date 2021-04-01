# Gecko Bootloader - 16kB Bootloader with LZMA support

This repository holds a sample application that allows to fit LZMA decompressor in EFR32 devices that have only 16kB Flash bootloader spaces such as EFR32xG13
This uses internal storage as a storage slot, if you have an external flash you shouldn't use this as you can avoid using compression and keep security features available

## Warning ##
In order to fit the LZMA code in this space, I had to completely remove the bootloader's security features:
* Encryption
* Authentication
* Secure boot

This converts Silicon Labs' secure bootloader into a basic bootloader that only perform CRC checks

## How To Build
Use the attached .ISC file as a reference 
Simply remove mbedtls and crypto folders from the build configuration
Finally, add the stubs.c file to your project

## How to use
This bootloader supports both uncompressed and LZMA compressed GBL files
For details on how to generate these GBL files please use Silicon Labs' documentation accroding to your protocol