#pragma once

#include "esphome.h"

class MySensor : public PollingComponent, public sensor::Sensor {
public:
    // Konstruktor z czasem odczytu w milisekundach
    MySensor(uint32_t update_interval = 5000);

    void setup() override;   // Inicjalizacja komponentu
    void update() override;  // Odczyt danych i aktualizacja wartości
};