# I2C_Communication
Task 2 of the Internet of Things path

![Screenshot (424)](https://github.com/iidabawaj/I2C_Communication-/assets/139181626/b67b4cd0-453b-4ab1-bfe1-cab4fad3714a)


## I2C Serial Communications
I2C (Inter-Integrated Circuit) is a serial communication protocol that allows multiple devices to communicate with each other using just two wires. In an I2C communication setup, one device acts as the "master" and the other device(s) act as "slaves".

In your case, one Arduino board will act as the sender (master) and the other Arduino board will act as the receiver (slave). The sender will send data to the receiver over the I2C bus.

To set up I2C communication between two Arduinos, you will need to connect the two boards using two wires: SDA (serial data) and SCL (serial clock). These pins are usually labeled on the Arduino board.

The sender (master) will initiate communication by sending a start signal on the SDA line. This will let the receiver (slave) know that communication is starting. The master will then send the address of the slave it wants to communicate with, followed by the data it wants to send.

The slave will respond to the master's request and send an acknowledgment signal back to the master. The master will then continue sending data until it is finished, and then send a stop signal to end the communication.


## Master Arduino Code Explanation
* The code defines a variable called "botao1" and sets it to pin 11. This pin is connected to a button that will be used to send data to the slave device over I2C.

* The code also defines two boolean variables: "ebotao1" and "confbotao1". "ebotao1" will be used to store the state of the button (whether it is pressed or not), and "confbotao1" will be used to store whether the button's state has been confirmed by the slave device.

* The "setup" function runs only once when the Arduino is first turned on or reset. In this code, the setup function initializes the digital pin connected to the button as an input with a pull-up resistor. It also initializes the serial communication with a baud rate of 9600.

* The "loop" function runs repeatedly as long as the Arduino is powered on. In this code, it reads the state of the button using the "digitalRead" function and stores it in the "ebotao1" variable.

* The code then uses a switch statement to check the value of "ebotao1". If it is HIGH, it sends the character "A" over the serial communication to the slave device. If it is LOW, it sends the character "a". If it is neither HIGH nor LOW, it does nothing.

* The code then loops back to the beginning of the loop function and repeats the process.


## Slave Arduino Code Explanation 
* The code defines a variable called "led" and sets it to pin 12. This pin is connected to an LED that will be turned on and off based on the data received from the master device over I2C.

* The code also defines a character variable called "comando". This variable will be used to store the data received from the master device.

* The "setup" function runs only once when the Arduino is first turned on or reset. In this code, the setup function initializes the digital pin connected to the LED as an output and initializes the serial communication with a baud rate of 9600.

* The "loop" function runs repeatedly as long as the Arduino is powered on. In this code, it first checks if there is data available to be read from the master device using the "Serial.available()" function. If there is data available, it reads the data into the "comando" variable using the "Serial.read()" function.

* The code then uses a switch statement to check the value of "comando". If it is 'A', it turns the LED on using the "digitalWrite" function with the HIGH parameter. If it is 'a', it turns the LED off using the "digitalWrite" function with the LOW parameter. If it is neither 'A' nor 'a', it does nothing.

* The code then loops back to the beginning of the loop function and repeats the process.


https://github.com/iidabawaj/I2C_Communication-/assets/139181626/8733c350-fe32-4f98-a3b5-59418a630395



