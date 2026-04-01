**Keyestudio IoT Smart Home Kit für ESP32**
===========================================

|image1|

.. _1-description:

1. Beschreibung
==============

Mit der rasanten Entwicklung des Internets werden verschiedene intelligente
Geräte nach und nach in unseren Alltag integriert. Zum Beispiel können wir
RFID verwenden, um die Tür zu öffnen. Außerdem ist die Küche mit einem
Gaswarnmelder ausgestattet, der bei Erkennung von gefährlichem Gas und
starkem Rauch die Menschen warnt. Wenn Regen erkannt wird, kann es
automatisch die Kleidung einsammeln und Fenster schließen. Alle Arten von
elektrischen Geräten können per Mobiltelefon gesteuert werden, wie Licht,
Ventilatoren, Klimaanlage und so weiter.

In diesem Zusammenhang möchten wir dieses Smart-Home-Produkt mit ESP32-
Steuerung vorstellen, das eine Vielzahl von Sensoren und Modulen sowie
Netzwerkfunktionen besitzt und Ihnen das relevante Wissen über das Internet
zugänglicher macht.

.. _2-features:

2. Merkmale
===========

1. Elegantes Aussehen
2. Eine Vielzahl von Sensormodulen
3. Netzwerksteuerung per Mobiltelefon-App
4. Morse-Passwort-Tür
5. Automatisches Schließen von Fenstern
6. RFID-Funktion
7. C-Sprache und MicroPython

.. _3-kit-list:

3. Kit-Liste
===========

== ========= ===================================== =================
#  Bild      Name                                  Menge
== ========= ===================================== =================
1  |image2|  Holzbrett                            1
2  |image3|  Acrylbrett                          1
3  |image4|  ESP32 PLUS Entwicklungsboard        1
4  |image5|  6812 RGB Modul                      1
5  |image6|  Analoger Gassensor                  1
6  |image7|  Tastenmodul                        2
7  |image8|  RFID-Modul                         1
8  |image9|  Passiver Summer Modul              1
9  |image10| 130 Motor                          1
10 |image11| Dampfsensor                        1
11 |image12| XHT11 Temperatur- und Feuchtigkeitssensor 1
12 |image13| PIR-Bewegungsmelder                1
13 |image14| Gelbes LED-Modul                   1
14 |image15| Servo                             2
15 |image16| I2C1602 LCD-Modul                  1
16 |image17| 3P F-F 150 mm Dupont-Kabel         5
17 |image18| 3P F-F 200 mm Dupont-Kabel         4
18 |image19| F-F 200 mm /40P/2.54 Kabel         0.1 (4 Stränge)
19 |image20| 4P F-F 200 mm Verbindungs-Dupont-Kabel 2
20 |image21| M1.4*6MM Rundkopfschrauben         4
21 |img|     M1.2*4MM Rundkopfschrauben         4
22 |image22| M3 Vernickelte Mutter (Selbstsichernd) 5
23 |image23| M4*8MM Rundkopfschrauben           24
24 |image24| M3*6MM Rundkopfschrauben           9
25 |image25| M3*10MM Rundkopfschrauben          5
26 |image26| M2*12MM Rundkopfschrauben          5
27 |image27| M4 Vernickelte Mutter              24
28 |image28| M3 Vernickelte Mutter              7
29 |image29| M2 Vernickelte Mutter              6
30 |image30| M3*8MM Senkkopfschrauben           3
31 |image31| Kreuzschlüssel                     1
32 |image32| 3.0*40MM Schraubendreher           1
33 |image33| 2.0*40MM Schraubendreher           1
34 |image34| M3*10MM Doppel-Pass Kupferpfosten  4
35 |image35| USB-Kabel                         1
36 |image36| 6-Fach AA Batteriefach             1
37 |image37| M3*12MM Rundkopfschrauben          4
38 |image38| Weiße Karte                       1
39 |image39| ABS RFID-Schlüssel                 1
== ========= ===================================== =================

.. _4-how-to-install-the-smart-home:

4. Wie man das Smart Home installiert
=====================================

| **Schritt 1**
| Benötigte Komponenten

|image40|

Installationsdiagramm

|image41|
Prototype

|image42|

**Schritt 2**

Benötigte Komponenten

|image43|

Installationsdiagramm

|image44|

Prototype

|image45|

**Schritt 3**

Benötigte Komponenten

|image46|

Installation

|image47|

Prototype

|image48|

**Schritt 4**

Benötigte Komponenten

|image49|

Installationsdiagramm

|image50|

Prototype

|image51|

**Schritt 5**

Benötigte Komponenten

|image52|

Installationsdiagramm

|image53|

Prototype

|image54|

**Schritt 6**

Benötigte Komponenten

|image55|

Installation (Ziehen Sie die selbstsichernden Muttern nicht fest)

|image56|

Prototype

|image57|

**Schritt 7**

Benötigte Komponenten

|image58|

⚠️ **Besonderer Hinweis:** Stellen Sie den Servo des Fensters vor der
Installation auf 0 Grad ein

=========== =====
Servo       PCB
=========== =====
Braune Leitung  G
Rote Leitung    5V
Orange Leitung  GPIO5
=========== =====

⚠️ **Besonders zu beachten:** Die folgenden zwei Methoden können je nach
Ihrer eigenen Situation frei gewählt werden.

**Methode 1：Arduino-Code**

⚠️ **Besonderer Hinweis:** Bevor Sie den Code schreiben und hochladen,
müssen Sie die Arduino IDE installieren. Bitte gehen Sie auf den Link:
`5. Arduino Tutorial <https://docs.keyestudio.com/projects/KS5009/en/latest/docs/Arduino/arduino.html>`__\ und
sehen Sie sich dann den Abschnitt **5.2 Getting started with Arduino** an.
Wie erhält man den Code?

Im Ordner **..\\Resource compression package\\arduino Code** öffnen Sie die Datei
**Initialization-of-window-servo-angle.ino** oder kopieren und fügen Sie den
folgenden Testcode in die Arduino IDE ein.

|Img|

.. code:: c

   #include <ESP32Servo.h>
   Servo myservo;
   #define servoPin 5

   void setup() {
     myservo.attach(servoPin,500,2500);
     myservo.write(0);
     delay(300);
     myservo.write(90);
     delay(300);
     myservo.write(0);
     delay(300);
   }

   void loop() {
     // put your main code here, to run repeatedly:
   }

**Methode 2：MicroPython-Code**

⚠️ **Besonderer Hinweis:** Bevor Sie den Code schreiben und hochladen, müssen Sie
die MicroPython IDE installieren. Bitte gehen Sie dazu auf den Link: `6. Python
tutorial <https://docs.keyestudio.com/projects/KS5009/en/latest/docs/Python/Python.html>`__,
und sehen Sie sich dann den Abschnitt **6.2 get starter with Thonny** an.

Wie erhält man den Code?

Im Ordner **..\\Resource compression package\\microPython Code** öffnen Sie die
Datei **Initialization-of-window-servo-angle.py** oder kopieren und fügen Sie den
folgenden Testcode in die Thonny IDE ein.

|image59|

.. code:: python

   from machine import Pin, PWM
   import time
   pwm = PWM(Pin(5))  
   pwm.freq(50)

   '''
   The duty cycle corresponding to the angle
   0°----2.5%----25
   45°----5%----51.2
   90°----7.5%----77
   135°----10%----102.4
   180°----12.5%----128
   '''
   angle_0 = 25
   angle_90 = 77
   angle_180 = 128

   pwm.duty(angle_0)
   time.sleep(1)
   pwm.duty(angle_90)
   time.sleep(1)
   pwm.duty(angle_0)
   time.sleep(1)

   # while True:

Nachdem Sie den Winkel des Fenster-Servos auf 0° eingestellt haben, fahren Sie mit der Installation wie im folgenden Bild gezeigt fort)

|image60|

Installieren Sie M1.4*6MM selbstschneidende Schrauben wie unten gezeigt

|image61|

Prototyp

|image62|

**Schritt 8**

Benötigte Komponenten

|image63|

Installationsdiagramm

|image64|

Prototyp

|image65|

**Schritt 9**
Benötigte Komponenten

|image66|

Installationsdiagramm

|image67|

Prototyp

|image68|

**Schritt 10**

Benötigte Komponenten

|image69|

Installationsdiagramm

|image70|

Prototyp

|image71|

**Schritt 11**

Benötigte Komponenten

|image72|

Installationsdiagramm

|image73|

Prototyp

|image74|

**Schritt 12**

Benötigte Komponenten

|image75|

Installationsdiagramm

|image76|

Prototyp

|image77|

**Schritt 13**

Benötigte Komponenten

|image78|

Installationsdiagramm

|image79|

Prototyp

|image80|

**Schritt 14**

Benötigte Komponenten

|image81|

Installationsdiagramm

|image82|

Prototyp

|image83|

**Schritt 15**

Benötigte Komponenten

|image84|

Installationsdiagramm

|image85|

Prototyp

|image86|

**Schritt 16**

Benötigte Komponenten
|image87|

Installationsdiagramm

|image88|

Prototyp

|image89|

**Schritt 17**

Benötigte Komponenten

|image90|

Installationsdiagramm

|image91|

Prototyp

|image92|

**Schritt 18**

Benötigte Komponenten

|image93|

Installationsdiagramm

|image94|

Prototyp

|image95|

**Schritt 19**

Benötigte Komponenten

|image96|

Installationsdiagramm

|image97|

Prototyp

|image98|

**Verdrahtungsteil**

Temperatur und Luftfeuchtigkeit an io17

3P-Verbindungskabel kurz verwenden: 15 cm

|image99|

|image100|

Gelbes LED-Modul an io12

|image101|

|image102|

Dampfsensor an io34

3P-Verbindungskabel kurz verwenden: 15 cm

|image103|

|image104|

Lüfter (IN- an io18, IN+ an io19)

Verwendete Dupont-Kabel: 4 Dupont-Kabel verteilt

|image105|

|image106|

PIR-Bewegungsmelder an io14

3P-Verbindungskabel kurz verwenden: 15 cm

|image107|

|image108|

Linkes Tastenmodul an io16

3P-Verbindungskabel lang verwenden: 20 cm

|image109|

|image110|
rechter Tastenmodul zum io27

3P-Verbindungskabel mit langem Draht: 20cm

|image111|

|image112|

RFID-Modul zum IIC

Die 4P zusammengeführte Leitung

|image113|

|image114|

LCD1602 Display zum IIC

Die 4P zusammengeführte Leitung

|image115|

|image116|

6812RGB LED zum io26

3P-Verbindungskabel mit kurzem Draht: 15cm

|image117|

|image118|

Gassensor zum io23

3P-Verbindungskabel mit langem Draht: 20cm

|image119|

|image120|

Summer-Sensor zum io25

3P-Verbindungskabel mit langem Draht: 20cm

|image121|

|image122|

Servo zur Fenstersteuerung zum io5

|image123|

|image124|

Servo zur Türsteuerung zum io13

|image125|

|image126|

Stromverkabelung

|image127|

**Schritt 20**

Benötigte Komponenten

|image128|

Installationsdiagramm

|image129|

Prototyp

|image130||image130|

.. |image1| image:: media/A1.jpeg
.. |image2| image:: media/Wooden-Board.jpeg
.. |image3| image:: media/Acrylic-Board.jpeg
.. |image4| image:: media/ESP32-Board.jpeg
.. |image5| image:: media/6812-RGB.png
.. |image6| image:: media/Gas-Sensor.png
.. |image7| image:: media/Button-Module.png
.. |image8| image:: media/RFID-Module.png
.. |image9| image:: media/Buzzer-Module.png
.. |image10| image:: media/Motor.png
.. |image11| image:: media/Steam-Sensor.png
.. |image12| image:: media/XHT11.png
.. |image13| image:: media/PIR-Sensor.png
.. |image14| image:: media/LED-Module.png
.. |image15| image:: media/Servo.png
.. |image16| image:: media/I2C1602-LCD.png
.. |image17| image:: media/3P-150-mm-Wire.png
.. |image18| image:: media/3P-200-mm-Wire.png
.. |image19| image:: media/F-F-200-mm.png
.. |image20| image:: media/4P-200-mm-Wire.png
.. |image21| image:: media/M1.4-6MM-Screws.png
.. |img| image:: media/wps1.jpg
.. |image22| image:: media/M3-Nickle-plated.png
.. |image23| image:: media/M4-8MM-Screws.png
.. |image24| image:: media/M3-6MM-Screws.png
.. |image25| image:: media/M3-6MM-Screws.png
.. |image26| image:: media/M3-6MM-Screws.png
.. |image27| image:: media/M4-Nut.png
.. |image28| image:: media/M4-Nut.png
.. |image29| image:: media/M4-Nut.png
.. |image30| image:: media/M3-8MM.png
.. |image31| image:: media/Cross-Wrench.jpeg
.. |image32| image:: media/3.0-40MM-Screwdriver.png
.. |image33| image:: media/2.0-40MM-Screwdriver.png
.. |image34| image:: media/M3-10MM.png
.. |image35| image:: media/USB-Cable.png
.. |image36| image:: media/AA-Battery-Holder.png
.. |image37| image:: media/M3-6MM-Screws.png
.. |image38| image:: media/White-Card.png
.. |image39| image:: media/ABS-RFID-Key.png
.. |image40| image:: media/A01.png
.. |image41| image:: media/A02.png
.. |image42| image:: media/A03.png
.. |image43| image:: media/A04.png
.. |image44| image:: media/A05.png
.. |image45| image:: media/A06.png
.. |image46| image:: media/A07.png
.. |image47| image:: media/A08.png
.. |image48| image:: media/A09.png
.. |image49| image:: media/A10.png
.. |image50| image:: media/A11.png
.. |image51| image:: media/A12.png
.. |image52| image:: media/A13.png
.. |image53| image:: media/A14.png
.. |image54| image:: media/A15.png
.. |image55| image:: media/A16.png
.. |image56| image:: media/A17.png
.. |image57| image:: media/A18.png
.. |image58| image:: media/A19.png
.. |Img| image:: ./media/A20.png
.. |image59| image:: ./media/A21.png
.. |image60| image:: media/wps1-1.jpg
.. |image61| image:: media/wps2.jpg
.. |image62| image:: media/A22.png
.. |image63| image:: media/A23.png
.. |image64| image:: media/A24.png
.. |image65| image:: media/A25.png
.. |image66| image:: media/A26.png
.. |image67| image:: media/A27.png
.. |image68| image:: media/A28.png
.. |image69| image:: media/A29.png
.. |image70| image:: media/A30.png
.. |image71| image:: media/A31.png
.. |image72| image:: media/A32.png
.. |image73| image:: media/A33.png
.. |image74| image:: media/A34.png
.. |image75| image:: media/A35.png
.. |image76| image:: media/A36.png
.. |image77| image:: media/A37.png
.. |image78| image:: media/A38.png
.. |image79| image:: media/A39.png
.. |image80| image:: media/A40.png
.. |image81| image:: media/A41.png
.. |image82| image:: media/A43.png
.. |image83| image:: media/A44.png
.. |image84| image:: media/A45.png
.. |image85| image:: media/A46.png
.. |image86| image:: media/A47.png
.. |image87| image:: media/A48.png
.. |image88| image:: media/A49.png
.. |image89| image:: media/A50.png
.. |image90| image:: media/A51.png
.. |image91| image:: media/A52.png
.. |image92| image:: media/A53.png
.. |image93| image:: media/A54.png
.. |image94| image:: media/A55.png
.. |image95| image:: media/A56.png
.. |image96| image:: media/A57.png
.. |image97| image:: media/A58.png
.. |image98| image:: media/A59.png
.. |image99| image:: ./media/A60-1.png
.. |image100| image:: media/A60.png
.. |image101| image:: ./media/A61-1.png
.. |image102| image:: media/A61.png
.. |image103| image:: ./media/A62-1.png
.. |image104| image:: media/A62.png
.. |image105| image:: ./media/A63-1.png
.. |image106| image:: media/A63.png
.. |image107| image:: ./media/A64-1.png
.. |image108| image:: media/A64.png
.. |image109| image:: ./media/A65-1.png
.. |image110| image:: media/A65.png
.. |image111| image:: ./media/A66-1.png
.. |image112| image:: media/A66.png
.. |image113| image:: ./media/A67-1.png
.. |image114| image:: media/A67.png
.. |image115| image:: ./media/A68-1.png
.. |image116| image:: media/A68.png
.. |image117| image:: ./media/A69-1.png
.. |image118| image:: media/A69.png
.. |image119| image:: ./media/A70-1.png
.. |image120| image:: media/A70.png
.. |image121| image:: ./media/A71-1.png
.. |image122| image:: media/A71.png
.. |image123| image:: ./media/A72-1.png
.. |image124| image:: media/A72.png
.. |image125| image:: ./media/A73-1.png
.. |image126| image:: media/A73.png
.. |image127| image:: media/A74.jpeg
.. |image128| image:: media/A75.png
.. |image129| image:: media/A76.png
.. |image130| image:: media/A77.png
