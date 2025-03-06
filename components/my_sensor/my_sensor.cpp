#include "my_sensor.h"

namespace esphome {
namespace my_sensor {
// Konstruktor inicjalizuje PollingComponent (np. odczyt co 5 sekund)
MySensor::MySensor(uint32_t update_interval) : PollingComponent(update_interval) : Sensor(){
	
}

 
void MySensor::setup() {
    ESP_LOGD("my_sensor", "Inicjalizacja niestandardowego czujnika.");

}




void MySensor::update() {
    // Symulacja odczytu temperatury (losowa wartość 20-30°C)
    float temperature = random(2000, 3000) / 100.0;
    
    ESP_LOGD("my_sensor", "Nowa wartość: %.2f°C", temperature);
    publish_state(temperature);  // Wysłanie wartości do ESPHome
}

}
}