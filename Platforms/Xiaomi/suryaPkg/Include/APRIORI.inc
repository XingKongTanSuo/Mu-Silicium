APRIORI DXE {
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Temporary/sm6150/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf

  # Core Drivers
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Temporary/sm6150/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Temporary/sm6150/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Temporary/sm6150/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Temporary/sm6150/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Temporary/sm6150/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Temporary/sm6150/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
