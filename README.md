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

## Configuration

1. Copiez le fichier `config_template.h` sous le nom `config.h`.
2. Ouvrez le fichier `config.h` et remplissez les champs suivants :
   - `ssid` : Le nom de votre réseau Wi-Fi.
   - `password` : Le mot de passe de votre réseau Wi-Fi.
   - `mqtt_server` : L'adresse IP ou le domaine de votre serveur MQTT.

Exemple :
```cpp
const char* ssid_config = "MyWiFi";
const char* password_config = "MySecurePassword";
const char* mqtt_server_config = "192.168.1.100";
// MQTT credentials
const char *mqtt_username_config = "emqx";        // MQTT username for authentication
const char *mqtt_password_config = "public";  // MQTT password for authentication
const int mqtt_port_config = 1883;  // MQTT port (TCP)
```

### integrate submdule 
git submodule add https://github.com/AnisZiadi/mqtt-esp8266-integration.git modules/mqtt

