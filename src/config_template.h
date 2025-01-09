#ifndef CONFIG_H
#define CONFIG_H

// Wi-Fi credentials
const char* ssid_config = "Your_WiFi_SSID";
const char* password_config = "Your_WiFi_Password";

// MQTT server
const char* mqtt_server_config = "192.168.1.100";

// MQTT credentials
const char *mqtt_username_config = "emqx";        // MQTT username for authentication
const char *mqtt_password_config = "public";  // MQTT password for authentication
const int mqtt_port_config = 1883;  // MQTT port (TCP)

#endif
