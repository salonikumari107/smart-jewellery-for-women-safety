# Smart Jewellery for Women Safety

This project presents a Smart Jewellery device designed to enhance women's safety by combining wearable fashion with embedded technology. The wearable acts as a discreet panic alert system that, when activated, connects with a smartphone to send real-time alerts and location information to emergency contacts.



🎯 Features
Emergency Button: Hidden push button triggers an emergency alert when pressed.

Bluetooth Communication: Connects to a smartphone via Bluetooth for alert transmission.

Microcontroller Unit: Controls logic and coordinates between components.

Vibration Feedback: Confirms activation of the safety mechanism.

Rechargeable Battery: Powers the entire circuit reliably.

🧩 Components Used
Component	Description
Push Button	Hidden within jewellery for discreet activation
Microcontroller	ESP32/Arduino Nano (depending on use case)
Bluetooth Module	HC-05/HC-06 or built-in on ESP32
Vibration Motor	Gives tactile feedback to the user
Battery	3.7V Li-ion rechargeable battery
Mobile App	Android app to send emergency SMS/location

⚙️ How It Works
User presses the hidden button embedded inside the jewellery.

Microcontroller detects the input and triggers a Bluetooth signal.

The paired smartphone app receives the signal.

The app sends an emergency SMS containing:

A predefined message (e.g., "I need help!")

Live GPS location

A vibration motor buzzes briefly to confirm successful activation.

📱 Mobile App Requirements
Bluetooth permission

Location access

Internet/SMS access

Emergency contacts pre-configured

🛠 Setup Instructions
Assemble the circuit inside a hollow pendant/casing.

Upload the code to the microcontroller using Arduino IDE.

Install the mobile app and pair it with the jewellery via Bluetooth.

Set emergency contacts in the app settings.

Wear the device and test activation to ensure everything functions properly.

🔐 Safety Considerations
Ensure the push button is not too sensitive to prevent false alerts.

Battery and circuits should be securely insulated.

Regularly test the connection with the mobile device.

📷 Design Diagram

💡 Future Enhancements
Integration with GPS module (if smartphone unavailable)

SOS voice recording activation

Real-time location tracking dashboard

Solar-powered charging

