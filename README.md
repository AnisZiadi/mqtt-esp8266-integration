# MQTT Integration for ESP8266

This repository provides a module to integrate MQTT communication with an ESP8266, enabling lightweight IoT communication for projects like a connected remote control.

## Features
- Supports MQTT publish and subscribe functionalities.
- Lightweight implementation using the **PubSubClient** library.
- Easily configurable for Wi-Fi credentials and MQTT broker settings.

## Requirements
- **Hardware**:
  - ESP8266 (e.g., NodeMCU, Wemos D1 Mini)
- **Software**:
  - Arduino IDE or PlatformIO
  - PubSubClient library (install via Arduino Library Manager)

## Setup Instructions

### Install Dependencies
1. Install the required library:
   - **PubSubClient**:
     ```bash
     Arduino IDE > Tools > Manage Libraries > Search "PubSubClient" > Install
     ```

### Configure Wi-Fi and MQTT Broker
1. Edit the Wi-Fi credentials and MQTT broker details in `src/main.ino`:
   ```cpp
   const char* ssid = "Your_WiFi_SSID";
   const char* password = "Your_WiFi_Password";
   const char* mqtt_server = "192.168.1.100"; // Replace with your broker's IP

### integrate submdule 
git submodule add https://github.com/AnisZiadi/mqtt-esp8266-integration.git modules/mqtt

