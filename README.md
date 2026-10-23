<div align="center">

# ESP32 Marauder - Advanced Edition

### A tuned ESP32 wireless security firmware for education and authorized testing.

Built on the original ESP32 Marauder, with added modules, performance work, and a customized UI. Stability issues smoothed out, menu transitions sped up, and the whole build optimized for hands-on wireless security labs.

![Platform](https://img.shields.io/badge/Platform-ESP32-3C4DA6?style=for-the-badge&logo=espressif&logoColor=white)
![Language](https://img.shields.io/badge/Firmware-C%2B%2B%20%2F%20Arduino-00599C?style=for-the-badge&logo=arduino&logoColor=white)
![Build](https://img.shields.io/badge/Build-PlatformIO%20%2F%20Arduino-FF7F00?style=for-the-badge&logo=platformio&logoColor=white)
![Use](https://img.shields.io/badge/Use-Authorized%20testing%20only-e53935?style=for-the-badge)

[Features](#features) - [Device Support](#device-support) - [Quick Start](#quick-start) - [Troubleshooting](#troubleshooting) - [Legal Notice](#legal-notice)

</div>

---

## About

This is an Advanced Edition built on top of the original [ESP32 Marauder](https://github.com/justcallmekoko/ESP32Marauder) firmware. On top of that base it adds extra modules, performance improvements, and customized UI assets. Instabilities have been addressed, menu transitions made faster, and the build tuned for professional wireless security testing in lab and authorized settings.

Credit for the underlying firmware goes to the upstream ESP32 Marauder project and its contributors.

---

## Features

### Wi-Fi modules
- **Packet sniffing** — captures surrounding packets at high throughput and writes them directly to PCAP.
- **Deauthentication** — can target a single client or an entire network's traffic.
- **Evil Portal 2.0** — faster, more convincing, customizable captive-portal pages.
- **Beacon spam** — stable, high-frequency fake-network broadcasting.

### Bluetooth and BLE
- **BLE spam** — payloads tuned for Apple (iOS 17+), Samsung, and Windows pop-up tests.
- **Quiet discovery** — detect device MAC addresses and vendor information passively.

### Data and system
- **War driving and GPS** — continuous GPS integration for map-based network analysis.
- **SD card management** — fast filesystem access with a fault-protected write mechanism.
- **CLI and web control** — full control from both the serial terminal and a browser.

---

## Device Support

Optimized to run on the following hardware:

| Device | |
|---|---|
| Flipper Zero WiFi Dev Board | Supported |
| ESP32-S2 / S3 / WROOM / WROVER | Supported |
| M5Stack StickC / StickC Plus / Core | Supported |
| LilyGO T-Display and T-Embed | Supported |
| Custom ESP32 handhelds | TFT LCD + SD card + battery |

---

## Quick Start

### Requirements
- **Hardware:** any ESP32 development board.
- **Software:** Arduino IDE or PlatformIO.
- **Drivers:** make sure the CP2102 or CH340 USB-serial drivers are installed.

### Method 1 — PlatformIO (recommended)

The project is pre-configured for PlatformIO and installs its libraries and build flags automatically.

1. Install the **PlatformIO IDE** extension in VS Code.
2. Open this project in VS Code (`File > Open Folder`).
3. Click **Build** or **Upload** in the bottom status bar.
4. All dependencies (declared in `platformio.ini`) are downloaded and compiled automatically.

### Method 2 — Arduino IDE

1. Download this repository as a `.zip` and extract it.
2. Open `esp32_marauder/esp32_marauder.ino` in the Arduino IDE.
3. Open `configs.h` and enable the line matching your device by removing the leading `//`.
4. Under **Tools > Board**, select your board (for example `ESP32-S3 Dev Module` or `ESP32 Dev Module`).
5. Press **Upload**.

> An ESP32-C5 auto-flasher helper (`C5_Py_Flasher/c5_flasher.py`) is also included for that chip.

---

## Troubleshooting

| Symptom | Fix |
|---|---|
| Upload fails | Make sure your cable supports data transfer — some are charge-only. |
| Multiple-definition build errors | On PlatformIO, `platformio.ini` sets `-Wl,--allow-multiple-definition` to prevent these. |
| Blank screen | Confirm the correct hardware/display model is selected in `configs.h`. |
| Garbled serial output | Set the serial monitor baud rate to `115200`. |

---

## Legal Notice

This firmware is provided **only** for education and authorized security testing. Wi-Fi deauthentication, beacon/BLE spam, captive-portal, and packet-capture features affect wireless spectrum and other people's devices; using them against networks or devices you do not own or are not explicitly authorized to test is illegal in most countries and can carry serious penalties. All responsibility for use outside its intended purpose lies with the end user.

---

<div align="center">

Built on open-source firmware, for learning wireless security the right way.

</div>
