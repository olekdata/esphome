#pragma once

#include "esphome.h"

class MySensor : public PollingComponent, public sensor::Sensor {
public:
    MySensor() : PollingComponent(5000) {}  // Odczyt co 5 sekund

    void setup() override {
        ESP_LOGD("my_sensor", "Czujnik niestandardowy - inicjalizacja");
    }

    void update() override {
        float temperature = random(2000, 3000) / 100.0;  // Losowa temperatura 20-30°C
        ESP_LOGD("my_sensor", "Nowa temperatura: %.2f°C", temperature);
        publish_state(temperature);
    }
};
