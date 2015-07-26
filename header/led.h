void glow( int pin, int time ) {
    digitalWrite(pin,time);
    delay(time);
    digitalWrite(pin,time);
}

