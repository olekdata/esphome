#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace my_sensor {
	
class MySensor : public PollingComponent, public sensor::Sensor {
public:
    // Konstruktor z czasem odczytu w milisekundach
    MySensor() : PollingComponent(1000) {}
	
    void setup() override;   // Inicjalizacja komponentu
    void update() override;  // Odczyt danych i aktualizacja wartości
};

}
}