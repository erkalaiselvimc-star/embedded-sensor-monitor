

// Simulated sensor reading function
int read_sensor(void) {
    int sensor_value = 25; // example temperature value
    return sensor_value;
}

int main(void) {
    int value = read_sensor();
    printf("Sensor value: %d\n", value);
    return 0;
}
 Add initial embedded C sensor simulation
