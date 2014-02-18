
int val_x;

void setup()
{
    // Serial Communication Initialization
    Serial.begin(57600);
    /* ADC Initialization */
    // Built-in reference, 3.3V
    analogReference(AR_DEFAULT);
    // Due has a 12-bit ADC, this will return the
    // value between 0 and 1023
    analogReadResolution(12);
}

void loop()
{
    val_x = analogRead(A0);
    Serial.println(val_x);
}
