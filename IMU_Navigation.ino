
unsigned int a_x;
int vx, vx0;
unsigned long cur_time, prev_time;

void setup()
{
    // Serial Communication Initialization
    Serial.begin(57600);
    /* ADC Initialization */
    // Built-in reference, 3.3V
    analogReference(AR_DEFAULT);
    // Due has a 12-bit ADC, this will return the
    // value between 0 and 4096
    analogReadResolution(12);

    // Set initial velocity to zero
    vx0 = 0;
    // time tick
    cur_time = millis();
    prev_time = millis();
}

void loop()
{
    cur_time = millis();
    a_x = analogRead(A0);
    vx  = vx0 + a_x * (prev_time - cur_time);
    Serial.println(vx);

    prev_time = cur_time;
}

