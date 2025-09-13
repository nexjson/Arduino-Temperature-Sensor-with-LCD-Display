# Arduino-Temperature-Sensor-with-LCD-Display
Script ini digunakan untuk membaca suhu menggunakan sensor analog yang terhubung ke pin A3 pada Arduino, lalu menampilkannya pada LCD 16x2 menggunakan library Adafruit_LiquidCrystal.

## 🔗 Video Tutorial
- https://www.youtube.com/watch?v=CuSGyTheBLg
- https://www.tiktok.com/@nexjson
- https://www.youtube.com/@nexjson

## 📌 Fitur
- Membaca suhu dari sensor analog (LM35 atau sejenisnya).  
- Menghitung nilai suhu dalam **Celcius** dengan rumus kalibrasi sederhana.  
- Menampilkan hasil pengukuran secara real-time pada **LCD 16x2**.  
- Refresh otomatis setiap **1 detik**.  

## 🛠️ Hardware yang Dibutuhkan
- Arduino Uno / Nano / Board sejenis  
- Sensor Suhu (LM35 atau kompatibel, terhubung ke pin A3)  
- LCD 16x2 + I2C backpack (didukung library Adafruit_LiquidCrystal)  
- Kabel jumper  

## 📜 Instalasi Library
Pastikan sudah menginstal library berikut di Arduino IDE:  
- [Adafruit LiquidCrystal](https://github.com/adafruit/Adafruit_LiquidCrystal)  

## 🚀 Cara Menggunakan
1. Hubungkan sensor suhu ke pin A3 pada Arduino.  
2. Pasang LCD 16x2 dengan I2C.  
3. Upload script berikut ke board Arduino:  

