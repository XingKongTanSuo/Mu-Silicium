##
#
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = sm6150
  PLATFORM_GUID                  = 9B56DF54-FFF3-443B-8B28-06418027A314
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/sm6150Pkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = sm6150Pkg/sm6150.fdf
  USE_CUSTOM_DISPLAY_DRIVER      = 0
  HAS_BUILD_IN_KEYBOARD          = 0

  # If your SoC has multimple variants define the Number here
  # If not don't add this Define
  SOC_TYPE                       = 2

# If your SoC has multiple variants keep these Build Options
# If not don't add "-DSOC_TYPE=$(SOC_TYPE)" to the Build Options.
[BuildOptions]
  *_*_*_CC_FLAGS = -DSOC_TYPE=$(SOC_TYPE) -DHAS_BUILD_IN_KEYBOARD=$(HAS_BUILD_IN_KEYBOARD)

[LibraryClasses]
  DeviceMemoryMapLib|sm6150Pkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceConfigurationMapLib|sm6150Pkg/Library/DeviceConfigurationMapLib/DeviceConfigurationMapLib.inf

[PcdsFixedAtBuild]
  # DDR Start Address
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000

  # Device Maintainer
  gSiliciumPkgTokenSpaceGuid.PcdDeviceMaintainer|"XingKongTanSuo"

  # CPU Vector Address
  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x9FF8C000

  # UEFI Stack Addresses
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"EEBBK"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"S6"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"sm6150"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"S6_sm6150"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosBoardModel|"S6"

  # Simple FrameBuffer
  gSiliciumPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|2176
  gSiliciumPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1600
  gSiliciumPkgTokenSpaceGuid.PcdMipiFrameBufferColorDepth|32
  
  # Platform Pei
  gQcomPkgTokenSpaceGuid.PcdPlatformType|"LA"

  # Dynamic RAM Start Address
  gQcomPkgTokenSpaceGuid.PcdRamPartitionBase|0xA2322000

  # SD Card Slot
  gQcomPkgTokenSpaceGuid.PcdInitCardSlot|FALSE            # If your Phone has no SD Card Slot, Set it to FALSE.
  
  # USB Controller
  gQcomPkgTokenSpaceGuid.PcdStartUsbController|TRUE            # This should be TRUE unless your UsbConfigDxe is Patched to be Dual Role.

[LibraryClasses]
  DeviceMemoryMapLib|sm6150Pkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceConfigurationMapLib|sm6150Pkg/Library/DeviceConfigurationMapLib/DeviceConfigurationMapLib.inf
  DeviceGuidLib|sm6180Pkg/Library/DeviceGuidLib/DeviceGuidLib.inf
  AcpiDeviceUpdateLib|SiliciumPkg/Library/AcpiDeviceUpdateLibNull/AcpiDeviceUpdateLibNull.inf

!include MooreaPkg/MooreaPkg.dsc.inc
