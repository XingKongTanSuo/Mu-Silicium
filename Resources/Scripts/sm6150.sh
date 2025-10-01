#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/BootShim.bin "./Build/sm6150Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/SM6150_UEFI.fd" > "./Build/sm6150Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/SM6150_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/sm6150Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/SM6150_UEFI.fd-bootshim" > "./Build/sm6150Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/SM6150_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/sm6150Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/SM6150_UEFI.fd-bootshim.gz" ./Resources/DTBs/sm6150.dtb > ./Resources/bootpayload.bin||exit 1

# Create bootable Android boot.img
python3 ./Resources/Scripts/mkbootimg.py \
  --kernel ./Resources/bootpayload.bin \
  --ramdisk ./Resources/ramdisk \
  --kernel_offset 0x00000000 \
  --ramdisk_offset 0x00000000 \
  --tags_offset 0x00000000 \
  --os_version 11.0.0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 1 \
  -o Mu-sm6150.img \
  ||_error "\nFailed to create Android Boot Image!\n"
