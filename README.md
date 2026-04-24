🐙 ArduinoPrint Server
This project turns an Arduino into a lightweight, OctoPrint-style web server. It allows you to host a 3D printing interface directly from your microcontroller to manage G-code and monitor prints over a network.
🚀 Key Features
• Built-in Web Server: Access your printer control panel through any web browser.
• G-code Streaming: Sends commands directly to the 3D printer controller.
• Tiny Footprint: Runs entirely on Arduino hardware without needing a Raspberry Pi.
• Live Stats: Real-time feedback of print progress and temperatures.
🛠️ Hardware Requirements
• Microcontroller: [e.g., Arduino GIGA, ESP32, or Arduino Ethernet]
• Network: [e.g., Ethernet Shield or built-in WiFi]
📥 Installation
2.	Configure Network: Open config.h and enter your IP address or WiFi credentials.
3.	Upload Code: Use the Arduino IDE to flash the server code to your board.
4.	Connect: Plug your Arduino into your printer's Serial port.
🖥️ Usage
Once the Arduino is powered on:
1.	Open your browser and type the Arduino's IP Address.
2.	Upload a .gcode file through the web interface.
3.	Click Print and watch your Arduino handle the rest!
💡 Why use this?
This is perfect for "Low-Power" 3D printing setups where you want a web interface but don't want to use a full computer or a Raspberry Pi.
