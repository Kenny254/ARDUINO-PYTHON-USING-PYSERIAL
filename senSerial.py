import serial
import time

# Replace 'COMX' with the appropriate serial port name for your Arduino (e.g., '/dev/tty.usbmodemXXXX' on macOS)
ser = serial.Serial('/dev/tty.usbmodemXXXX', 9600, timeout=1)

def turn_on_led():
    ser.write(b'H')  # Send 'H' to turn on the LED

def turn_off_led():
    ser.write(b'L')  # Send 'L' to turn off the LED

# Main loop
while True:
    turn_on_led()
    time.sleep(1)  # Wait for 1 second
    turn_off_led()
    time.sleep(1)  # Wait for 1 second
