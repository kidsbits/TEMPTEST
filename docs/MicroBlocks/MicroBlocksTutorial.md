# MicroBlocks Tutorial

## 1.About MicroBlocks

### 1.1 What Is MicroBlocks?

MicroBlocks is a free graphical programming language similar to Scratch, which supports many educational microcontroller main boards, such as micro:bit, ESP32/ESP8266, Raspberry PI Pico, etc. 

Welcome to use MicroBlocks to learn physical computing!

### 1.2 What Are Its Features?

**Real-Time Programming:** MicroBlocks is a real-time programming environment. Click a block, and it runs immediately on the board. Try out command blocks to view and plot sensor values in real time, with no waiting for code compilation or downloading.

**Autonomous Operation:** MicroBlocks downloads your code as you write it. Once programmed, it runs independently (offline). Create portable games, fitness apps, or glowing wearables as you wish.

**Parallel Tasks:** Want to control a motor while displaying an animation? No problem! MicroBlocks lets you write separate scripts for each task and run them simultaneously. Parallel coding becomes simpler and more intuitive.

**Cross-Platform Compatibility:** MicroBlocks runs on many different boards, “write once, run anywhere”. Blocks for buttons, sensors, and displays work across boards with compatible hardware. It even simulates the micro:bit 5x5 LED matrix on TFT displays.

**Program Portability:** With MicroBlocks, your board acts like a USB drive. No need to store files—just plug it in to reload your code. Share your board with friends, and they can explore your scripts or add new features directly!

While other block-based languages exist for microcontrollers, what truly sets MicroBlocks apart is its combination of real-time programming and autonomous operation. Other languages support only one of these features rather than both.

### 1.3 How MicroBlocks Works?

The MicroBlocks system has three components:

- **Blocks Editor**: Runs on a computer during development.
- **Virtual Machine**: Executes user code on the microcontroller.
- **Communication System**: Updates code on the board as scripts are edited.

The blocks editor lets users create and edit code while managing MicroBlocks libraries for added functionality. Some libraries support sensors or devices like servos and NeoPixels; others provide APIs for text, lists, and music. Libraries themselves are written in MicroBlocks, allowing users to explore, modify, and extend them.

Like MicroPython, MicroBlocks code is compiled into **bytecode** executed by a [virtual machine](https://wiki.microblocks.fun/virtual_machine) on the microcontroller. Bytecode is low-level, processor-agnostic instructions, making it easy to support diverse 32-bit microcontrollers. In fact, the MicroBlocks VM isn’t limited to microcontrollers—it also runs on Linux devices like Raspberry Pi.

To learn more about bytecode, visit the VM page on the wiki. If “Advanced Blocks” are enabled, right-click scripts to view their generated instructions and bytecode—a great way to explore how computers execute code.

The communication system sends bytecode to the VM and updates it incrementally as scripts are edited, enabling immediate execution for rapid testing and iteration. It also handles starting/stopping scripts and relays data from the microcontroller, allowing the editor to visualize events graphically.

**Sensor Insights Through Real-Time Feedback**
The key to understanding sensors is observing their live responses. For example, how does acceleration change when tossing a micro:bit? The communication system displays sensor values and results in small “Dialogue Bubbles” and supports real-time data plotting. Visualization turns abstract physical and electrical properties into intuitive, observable phenomena.

### 1.4 Coding Box Driver !

<span style="color:red;font-size:20px;">When installing the driver, connect the coding box to the computer! ! !</span>

#### 1.4.1 Windows

Click to download the [Windows CH340 driver](./Windows.zip).

![](./media/6-3-1.png)

<p style="color:red;">After downloading, extract and save it in a location where you can find it. It's best to store it on your desktop.</p>

For windows 10 and higher versions, they have built-in drivers. If you are their users, connect the coding box to the computer, click on Computer → Properties → Device Manager. As shown in the figure, once the connection is successful, there is no need to install the driver again.

![](./media/6-3-2-2.png)

If here’s the case, the driver needs to be installed manually.

![](./media/6-3-3.png)

Right-click ![](./media/6-3-4.png) to “Update driver”.

![](./media/6-3-5.png)

“Browse my computer for drivers”.

![](./media/6-3-6.png)

Find the downloaded driver file “usb_ch341_3.1.2009.06”:

![](./media/6-3-7.png)

After the driver is installed, click “Close”, and then the serial port number will appear.

![](./media/6-3-8.png)

In this way, the driver is installed. Click on Computer → Properties → Device Manager, and we can see:

![](./media/6-3-2-2.png)

#### 1.4.2 MAC

Click to download the [MAC CH340 driver](./MAC.zip).

![image-20240809151931276](./media/6-3-10.png)

<p style="color:red;">After downloading, extract and save it in a location where you can find it. It's best to store it on your desktop.</p>

Step 1: Download the driver from the Website and extract the file to the local installation directory.

![](./media/6-3-11.png)

Step 2: For details about how to install the driver in pkg format by default, see Step 3. If OS X 11.0 or later does not support Rosetta, refer to Step 4 to install the dmg driver.

Before installation, please forward to “System Preferences” → “Security & Privacy” → “General” page, below the title “Allow apps downloaded from:” choose the choice 2 → “Mac App Store and identified developers”, then the driver will work normally.

![20221232](./media/6-3-12.png)

Step 3: To install the driver in pkg format, tap the driver file → Continue → Install.

![](./media/6-3-13.png)

![20221226083](./media/6-3-14.png)

Then the installation will be successful.

![20221226084](./media/6-3-15.png)

![2022122605](./media/6-3-16.png)

To install the pkg format driver on OS X 11.0 and later: Open “LaunchPad” → “CH34xVCPDriver” → Install.

![2022122606](./media/6-3-17.png)

When using OS X 10.9 to OS X 10.15, click “Restart” to restart your computer, and perform the following steps after the restart.

![20221226097](./media/6-3-18.png)

Step 4: To install the dmg driver, tap the dmg file and drag “CH34xVCPDriver” to enter the application folder in the operating system.

![2022122608](./media/6-3-19.png)

Then open “LaunchPad” → “CH34xVCPDriver” → Install.

![202212269](./media/6-3-20.png)

Then the installation will be successful.

![202212260910](./media/6-3-21.png)

When inserting the CH340 control board into the USB port, open System Report → Hardware → USB. On the right is USB Device Tree. If the USB device is working properly, you will find a device whose “Vendor ID” is [0x1a86].

![20221226011](./media/6-3-22.png)

Open “Terminal” program under Applications → Utilities folder and type the command “ls /dev/tty*”.

![202212271312](./media/6-3-23.png)

You should see the “tty.wchusbserialx” where “x” is the assigned device number similar to Windows COM port assignment.

### 1.5 Program on MicroBlocks

There are two programming methods for MicroBlocks.

#### 1.5.1 Online on Browser (Recommended)

Click on the link: [MicroBlocks](https://microblocks.fun/run-pilot/)

MicroBlocks can be run in Chrome or Edge browsers without installing any software.

![t15](./media/t15.png)

Neither traditional applications nor professional technicians are required when we run MicroBlocks in a browser.

MicroBlocks can also run in other browsers, but it can only connect to the main board when running in Chrome or Edge browsers on desktops, laptops, or Chromebook computers (non-mobile devices).

#### 1.5.2 MicroBlocks Software

<span style="color:red; font-size:20px;">Note: The software version is currently in testing, please use '1.5.1 Online on Browser (Recommended)' first, and it is expected to be updated to the software in August. `</span>

[Get Started - MicroBlocks](https://microblocks.fun/get-started#computer)

After entering the Download link, select your computer system. For example, choose the “Windows” system and then click “Download”.

![t16](./media/t16.png)

Click to download the MicroBlocks.

![t17](./media/t17.png)

Download successful! Double-click to install.

![t18](./media/t18.png)

### 1.6 Main Board Firmware !

<span style="color:red;">Here we demonstrate how to burn firmware on browsers, which can be a reference for MicroBlocks software users.</span>

[MicroBlocks](https://microblocks.fun/run-pilot/)

Click on the link and open it in the browser to enter the programming page.

![t20](./media/t20.png)

Click ![t21](./media/t21.png) to `update firmware on board` and choose the coding box.

![t22](./media/t22.png)

It includes a specified firmware `KidsBits` for the coding box, so we upload this firmware.

![t23](./media/t23.png)

Choose the USB serial number and `connect`. If you have any further questions about this, please back to `1.4 Coding Box Driver !`.

![t24](./media/t24.png)

When the upload progress reaches 100%, the firmware upload is complete.

![t25](./media/t25.png)

Click `OK`.

![t26](./media/t26.png)

### 1.7 Programming Page

The following figure shows the main interface of the MicroBlocks editor.

![t27](./media/t27.png)

**Block Categories:**

This area contains all block categories used for MicroBlocks programming. They are divided into nine colors of groups. Choose a category and the blocks in it will be listed beside (like opening a drawer with building blocks placed inside).

![](./media/output.png) stores the code blocks used for outputting data.

![](./media/input.png) contains the code blocks used for reading the input data.

![](./media/pins.png) stores the code blocks used for operating the input or output data of the pins.

![](./media/control.png) contains control code blocks.

![](./media/operators.png) stores the code blocks for operations.

![](./media/variables.png) is used to define variables.

![](./media/data.png) contains the code blocks for data processing.

![](./media/myBlocks.png) is used for customizing code blocks.

Official detailed introduction: [Blocks Reference | MicroBlocks Wiki](https://wiki.microblocks.fun/en/reference_manual)

**Menu Bar:**

Three system menus are provided, along with icon.

![t8](./media/t8.png) sets the language displayed by the editor.

![t9](./media/t9.png) is the settings. Click to set up the editor. The firmware of the coding box also needs to be selected here.

![t10](./media/t10.png) is files that can be operated on, such as creating, saving, opening, etc.

![t12](./media/t12.png) is the name of the code file.

![t11](./media/t11.png) is a graph plotter to view the data changes.

![t13](./media/t13.png) connects the boding box. Click it to select the way to connect to the coding box: USB or Bluetooth.

![t14](./media/t14.png) is the run and stop buttons, through which the code can be controlled to run and stop running.

**Library List:**

The contents of this area reflects various libraries loaded according to the requirements of user scripts and microprocessors. The list can be empty (without any libraries) or multiple libraries can be introduced.

**Blocks Palette:**

After choosing a category, code blocks with such specific functions will be listed in this area beside the category. Here, these blocks can be dragged into the script area to write programs. If you need to delete a block in the script area, just drag it back to this area.

**Tip bar:**

Move your mouse over the blocks and IDE areas highlighted in yellow, and their types and brief description as well as functions of each area will be displayed in this area. Detailed block description can be obtained through right-click menu of each block.

**Working with Scripts:**

Since the script area is the most frequently used part in the editor, introducing the unique operations and usage conventions of this area can help you work with the editor better.

For more details, please visit [User Guide | MicroBlocks Wiki](https://wiki.microblocks.fun/en/ide).

### 1.8 Coding Box Connection

Click ![t13](./media/t13.png) to connect by USB or Bluetooth. After connection, we can directly upload code to the coding box. Here we choose USB connection.

![t28](./media/t28.png)

USB connection:

![t29](./media/t29.png)

Bluetooth connection:

![t30](./media/t30.png)

After connecting, it will load library files required by the coding box and show ![t31](./media/t31.png).

![t32](./media/t32.png)

### 1.9 Upload Code

After connecting the coding box, upload the code. We can either build the code manually or open the provided code file.

**Build the code blocks manually:**

When uploading code, since the MicroBlocks code is in real time, you only need to click to run the code to upload it to the coding box.

![t33](./media/t33.gif)

## 2. Code Download

### 2.1 How to Download

Click to [download the code file](./Codes.zip).

### 2.2 How to Open

![t232](./media/t232.gif)

### 2.3 How to Upload

![t233](./media/t233.gif)

## 3. Projects

### 3.1 LED Blink

#### 3.1.1 Overview

LED Blink is one of the simplest entry-level programming projects for the ESP32 Coding Box. It only needs an LED and then upload the code. This simple project helps beginners better master basic concepts.

#### 3.1.2 Schematic Diagram

![t40](./media/t40.png)

**LED lighting on:** The output current of the IO ports is limited, so the LED brightness may not be enough. Therefore, a NPN triode (Q2) is added to the circuit as a switch. We only need to add a high(low) level at the triode base pin 1 to light it up(out).

**Triode on/off:** To put it simple, when the base(pin 1) receives a high level, the collector(pin 3) and the transmitter(pin 2) are connected, so then VCC passes through the current-limiting resistor to the LED and then into the triode to GND, forming a loop. At this time, LED is on. When pin 1 receives a low level, pin 3 and 2 are disconnected so the current loop cannot be formed, resulting LED off.

#### 3.1.3 Code Blocks

Blocks in ![](./media/control.png):

1. ![t1](./media/t1.png) is in “Control” class. Click the green ![image-20250411084853429](./media/image-20250411084853429.png) to run the code. These hat blocks monitor the various conditions described in their titles. When the startup condition is true, **when started** will be activated. The others are to check whether the button status or Boolean conditions are true to determine whether to execute the blocks placed under them.

2. ![t2](./media/t2.png), a C-shaped block, also called LOOP, is a set of control blocks. As long as the conditions described in it are true, the inside codes will run. This repetitive execution will run the code blocks inside it forever. It is often used for plotting numerical values or continuously monitoring port values, etc.

3. ![t4](./media/t4.png) pauses the execution flow for the specified number of milliseconds. It is used to pause and resume the execution in a time-controlled manner. Unit conversion: 1 second = 1000 milliseconds

--------------------------------

Blocks in ![](./media/codingBox.png):

1. ![t3](./media/t3.png) is a block included in coding box library. It can control the red, yellow and green LED on/off on the coding box. Click ![](./media/t5.png) to choose an LED and tap ![t6](./media/t6.png) to turn off it. ![t6](./media/t6.png) means ON, and ![t7](./media/t7.png) is OFF.

#### 3.1.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-1-LED.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/codingBox.png), drag ![t3](./media/t3.png) block and place it in ![](./media/t2.png).

![t35](./media/t35.png)

3. In ![](./media/control.png), drag ![t4](./media/t4.png) block and modify `500` into `1000`, and put it under ![t3](./media/t3.png).

![t36](./media/t36.png)

4. Move your mouse onto ![t3](./media/t3.png) and click to choose `duplicate all`. Put the copy under the above blocks and set ![t3](./media/t3.png) to ![t37](./media/t37.png).

![t38](./media/t38.png)

**Complete code:**

![t39](./media/t39.png)

#### 3.1.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The red LED will blink with an interval of 1 second. If you want it to flash faster, modify the delay.

### 3.2 Sound Sensor

#### 3.2.1 Overview

The sound sensor, with excellent sound reception, mainly contains a high sensitivity microphone and an LM358 operational amplifier. Weak sound signals are captured by the microphone and amplified by LM358, so the output is clear and recognizable, which can be effectively detected the sounds. 

This sensor features high sensitivity, fast response speed, so is widely used in sound detection and recognition, providing a stable and reliable voice input solution for various intelligent devices.

#### 3.2.2 Schematic Diagram

![t41](./media/t41.png)

**Working principle:** If the built-in electret film vibrates after receiving sounds, its capacitance will change to produce a tiny voltage. The LM358 chip is adopted in circuits to amplify the sound signals detected by the high-sensitivity microphone.

#### 3.2.3 Code Blocks

Blocks in ![](./media/output.png):

1. ![t44](./media/t44.png) displays the input values. It can be used to display any data type supported by MicroBlocks. In addition to directly entering values, a variable report block can also be placed there. If you want to display more than one piece of data, simply click on the triangle to add more. This is one of the main methods to help troubleshoot the faults in the code. Click on ![t47](./media/t47.png) to add an output blank: 

![t45](./media/t45.png)

2. ![t42](./media/t42.png) plots input values in a Data Graph. Any type of data can be plotted as a graph: numbers, digital and analog pin input, sensor output, etc. If you want to draw more than one, click on the triangle to add up to six values simultaneously drawn in different colors. Note that plotting is only supported in the IDE. Therefore, it is possible to plot only when a device is connected to the computer. Plotting without a device will result in showing “Not connected to the mainboard”. Click ![t11](./media/t11.png) to check the graph. 

![t46](./media/t46.png)

-----------------

Blocks in ![](./media/codingBox.png):

1. ![t43](./media/t43.png) is a block included in coding box library. It reads the analog values of the sound sensors in the coding box.

#### 3.2.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-2-Sound.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) and ![t42](./media/t42.png) block and put them in ![](./media/t2.png) respectively. 
3. Tap ![t47](./media/t47.png) of the ![t44](./media/t44.png) to add an output blank. Enter `loudness:` in the first one.

![t48](./media/t48.png)

4. In ![](./media/codingBox.png), drag ![t43](./media/t43.png) and put it in both the second blank of ![t48](./media/t48.png) and the ![t42](./media/t42.png).

**Complete code:**

![t49](./media/t49.png)

#### 3.2.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Click ![t11](./media/t11.png) to check the graph. Make a sound for the sensor to capture, and then we can see the analog values of the sound on the editor.

![t50](./media/t50.png)

### 3.3 PIR Motion Sensor

#### 3.3.1 Overview

The PIR motion sensor adopts RE200B-P element. 

Based on pyroelectric effect, the sensor is able to detect the infrared ray emitted by human body or animal. With Fresnel lens, it can even detect farther and wider. When a nearby human or animal motion is detected, the sensor outputs a high level.

#### 3.3.2 Schematic Diagram

![t51](./media/t51.png)

**Working principle:** The human body maintains at 37 degrees, so it will emit a specific wavelength of about 10μm infrared. The sensor captures 10μM infrared to determine whether there is a motion.

#### 3.3.3 Code Blocks

Blocks in ![](./media/control.png):

1. ![t52](./media/t52.png) “IF” block checks the Boolean condition. If it is true, the included blocks run once. ![t53](./media/t53.png) allows for expansions by adding multiple “ELSE IF” conditions. If the previous branches are not true, each of the following ELSE IF will be continuously evaluated and executed.

--------------------

Blocks in ![](./media/codingBox.png):

1. ![t54](./media/t54.png) is a block included in coding box library. It reads the value of the PIR motion sensor in the coding box. When a person is detected, the sensor outputs a high level (1); when not, the sensor outputs a low level (0).

#### 3.3.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-3-Pir.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/control.png), drag ![t52](./media/t52.png) block and put it in ![](./media/t2.png); Click ![t53](./media/t53.png) to add an “else”.

![t55](./media/t55.png)

3. In ![](./media/codingBox.png), drag ![t54](./media/t54.png) block and put it in ![t56](./media/t56.png).

![t57](./media/t57.png)

4. In ![](./media/output.png), drag two ![t44](./media/t44.png) and put them in ![t56](./media/t56.png) respectively. Output `Someone!` in “if” and `No one!` in “else”.

   **Complete code:**

![t58](./media/t58.png)

#### 3.3.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. When the PIR motion sensor detects a human, it outputs `Someone!`. If not, it shows `No one!`.

![t60](./media/t60.png)

### 3.4 Power Amplifier

#### 3.4.1 Overview

The 8002b power amplifier mainly consists of a speaker and an audio amplification chip. It can amplify small audio signals for about 8.5 times. These amplified sounds will be played through its speaker. Besides, it can also play some music or melodies. 

#### 3.4.2 Schematic Diagram

![t61](./media/t61.png)

#### 3.4.3 Code Blocks

Blocks in ![tone](./media/tone.png):

1. ![img](./media/t62.png) plays the given note at a given octave within a set milliseconds. The note name is AG (uppercase or lowercase), followed by a # to indicate a sharp sign.

2. ![img](./media/t63.png) plays the notes specified by the key numbers (0-127) on the piano, where the center C is 60. This block performs mathematical conversions on music (for example, transposing to another key).

   MIDI, Musical Instrument Digital Interface, is the industry standard for controlling synthesizers, drum machines and other electronic music devices.

3. ![img](./media/t64.png) plays the notes specified in Hertz (Hz). The central C is approximately 261 Hz, and the upper A is 440 Hz (the note tuned by the orchestra).

4. ![img](./media/t65.png) starts playing the specified tone in Hertz (Hz) continuously.

5. ![img](./media/t66.png) stops playing.

6. ![img](./media/t67.png) sets the pin for playing the tone. Connect the piezoelectric buzzer or headphones to this pin. For a board with a built-in speaker, if this block is omitted, the built-in speaker will be used.

Blocks in ![](./media/codingBox.png):

1. ![t68](./media/t68.png) is a block included in coding box library. It controls the speaker in the coding box to emit a beep  sound and its duration can be set.



#### 3.4.5 Test Code

You can manually build blocks, or directly open the code file we provide: `3-4-Speaker.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/tone.png), drag 7 ![img](./media/t62.png) and set “play note" to `c,d,e,f,g,a,b` reapectively.

**Complete code:**



![t69](./media/t69.png)

#### 3.4.6 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The power amplifier plays Do, Re, Mi, Fa, Sol, La, Si, in a loop.

### 3.5 Photoresistor

#### 3.5.1 Overview

Photoresistor is photoelectric device that works according to semiconductor photoconductivity. It can be used to sense the brightness of the current environment to output a corresponding analog value.

#### 3.5.2 Schematic Diagram

![t70](./media/t70.png)

Photoresistor takes advantage of the photoelectric effect of semiconductors. Its resistance varies with ambient light. 

In the light, the semiconductor material absorbs photon energy to produce electron-hole pairs, increasing the conductivity and reducing the resistance. The brighter the light is, the lower the resistance will be. From the changes of resistance, it can sense light intensity accurately. Therefore, it is widely used in automatic lighting, photoelectric control, real-time monitoring and regulation of light.

#### 3.5.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t71](./media/t71.png) is a block included in coding box library. It reads the analog value of the photoresistor in the coding box. The brighter the light is, the larger the analog value will be (Analog value range: 0-1023)

#### 6.5.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-5-Light.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) and ![t42](./media/t42.png) block and put them in ![](./media/t2.png).
3. Tap ![t47](./media/t47.png) of the ![t44](./media/t44.png) to add an output blank. In the first blank, enter `light value:`

![t72](./media/t72.png)

4. In ![](./media/codingBox.png), drag ![t71](./media/t71.png) and put it into both the second blank of  ![t72](./media/t72.png) and ![t42](./media/t42.png).

**Complete code:**

![t73](./media/t73.png)

#### 3.5.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Click ![t11](./media/t11.png) to check the graph. Cover the sensor with your hand, and you will see the value decreases.

![t74](./media/t74.png)

### 3.6 AD Button

#### 3.6.1 Overview

The AD button requires only one analog pin to read multiple button states, which greatly saves IO ports. It adopts analog acquisition, and the output voltages vary from pressed buttons, so that different analog values can be obtained. We can determine which button is pressed according to these values.

#### 3.6.2 Schematic Diagram

![t75](./media/t75.png)

From the Schematic Diagram: 

When no button is pressed, the output at signal pin IO33 is pulled down by R34 (connected to GND. So the analog value of IO33 is 0, that is, low level 0V;

When button S1(the red button) is pressed, pin IO33 is connected to VCC. So the analog value of IO33 is 4095 (voltage = 3.3V).

When button S2(the yellow button) is pressed, the voltage of IO33 is that between R32 and R34: VCCxR34/(R32+R34) ≈ 2.2V, and the analog value is about 2432;

When button S3(the green button) is pressed, the voltage of IO33 is that between R32+R33 and R34: VCCxR34/(R32+R33+R34) ≈ 1.1V, and the analog value is about 1175.

#### 3.6.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t76](./media/t76.png) is a block included in coding box library. It reads the status value of the AD button in the coding box. Pressing is a high level (1), and releasing is a low level (0). Click on the ![](./media/t5.png) to switch buttons.

	![t77](./media/t77.png)

#### 3.6.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-6-ADKey.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/control.png), drag ![t52](./media/t52.png) block and put it into ![](./media/t2.png), and tap ![t53](./media/t53.png) to add some else-ifs as follows. 

![t78](./media/t78.png)

2. In ![](./media/codingBox.png), drag 3 ![t76](./media/t76.png) and put it on the ![t79](./media/t79.png) of ![t52](./media/t52.png). Set the first to red, the second to yellow and the third to green. Tap ![t80](./media/t80.png) to remove “else”.

![t81](./media/t81.png)

3. In ![](./media/output.png), drag three ![t44](./media/t44.png) blocks and put them in ![t52](./media/t52.png). Press the red button to output “Press the red button”, yellow: “Press the yellow button” and green: “Press the green button”.

**Complete code:**

![t82](./media/t82.png)

#### 3.6.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Press the red button and it outputs `Press the red button`; Press the yellow button and it says `Press the yellow button`; Press the green button it outputs `Press the green button`.

![t83](./media/t83.png)

### 3.7 Ultrasonic Sensor

#### 3.7.1 Overview

Ultrasonic sensor measures the distance of an object by sound waves. It boasts a transmitter and a receiver to emit sound waves and then measure the returned waves. The time difference between transmitting and receiving can be used to calculate the distance value. Beyond that, it is also used to detect the shape or presence of objects, build automatic doors, and measure flow rates and pressures.

#### 3.7.2 Schematic Diagram

![t85](./media/t85.png)

**Working principle:** Like bats, the ultrasonic sensor sends an ultrasonic signal with a high frequency that human cannot hear. If these signals encounter obstacles, they will immediately reflect back and be received by the sensor. After that, the distance between the sensor and the obstacle is calculated according to the time difference between signals transmitting and receiving. 

**Maximum detection distance:** 3M

**Minimum detection distance:** 4cm

**Detection angle:** no greater than 15 degrees

#### 3.7.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t86](./media/t86.png) is a block included in coding box library. It reads the distance values detected by the ultrasonic sensor in the coding box.

#### 3.7.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-7-Ultrasonic.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and put it in ![](./media/t2.png).
3. Tap ![t47](./media/t47.png) of the ![t44](./media/t44.png) to add an output blank. In the first blank, enter `distance：`

![t87](./media/t87.png)

4. In ![](./media/codingBox.png), drag ![t86](./media/t86.png) and place it in the second blank of ![t87](./media/t87.png).
5. In ![](./media/control.png), drag ![t4](./media/t4.png) and put it under ![t87](./media/t87.png), and modify the delay to `100ms`.

**Complete code:**

![t88](./media/t88.png)

#### 3.7.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. If you wave you hand in front of the ultrasonic sensor or move back and forth, you can see the change in the printed distance values.

![t89](./media/t89.png)

### 3.8 RFID Sensor

#### 3.8.1 Overview

RFID-RC522 module adopts Phillips MFRC522 original chip in card reading circuit, which is easy to use and with low cost. It is suitable for equipment and reader development, advanced applications, RF card terminal design and producing.

#### 3.8.2 Schematic Diagram

![t90](./media/t90.png)

**RFID (Radio Frequency Identification)**: 

The card reader is composed of a frequency transmitter module and a high level magnetic field. The Tag transponder is a device to be sensed without a battery. It consists only of tiny integrated circuit chips, media for storing data, and antennas for receiving and transmitting signals. To read the data in the tag, it must be placed within the reading range of the reader. After that, the reader will generate a magnetic field. According to Lenz's law (magnetic energy generates electricity), the RFID Tag will be powered, thus activating the device.

<p style="color:red;">NOTE: this module only recognize card working at 13.56MHz. It is recommended to use the provided card in the kit.</p>

#### 3.8.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t91](./media/t91.png) is a block included in coding box library. It reads the card value sensed by the RFID in the coding box.

#### 3.8.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-8-RFID.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and place in ![](./media/t2.png). 
3. Tap ![t47](./media/t47.png) of the ![t44](./media/t44.png) to add an output blank. In the first blank, enter `RFID：`

![t92](./media/t92.png)

4. In ![](./media/codingBox.png), drag ![t86](./media/t86.png) and put it into the second blank of ![](./media/t92.png).
5. In ![](./media/control.png), drag ![t4](./media/t4.png) and add it under ![](./media/t92.png) and set the delay to `100ms`.

**Complete code:**

![t93](./media/t93.png)

#### 3.8.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Cover the RFID sensing area with the IC card, and you will see the ID numbers. <span style="color:red;">Note that the ID number of each card is different. It shall be based on the one you read.</span>

![t94](./media/t94.png)

### 3.9 Axis-X&Y Joystick Module

#### 3.9.1 Overview

Axis-X&Y Joystick is a high-precision input device for bidirectional control. Its X and Y axes are separated to control horizontal and vertical movements respectively. This module contains 10K resistance so that it ensures the stability and accuracy of signals. 

#### 3.9.2 Schematic Diagram

![t95](./media/t95.png)

ESP32 Axis-X&Y Joystick works based on a two-axis potentiometer that detects movements on two axes. When the joystick moves on axis X or Y, the resistance of the potentiometer changes, outputting analog voltage signals. After being received by ESP32 analog input pin (ADC), these signals will be read by ESP32 board and converted to digital values. Therefore, the joystick coordinate can be easily revealed during controlling. 

#### 3.9.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t96](./media/t96.png) is a block included in coding box library. It reads the X and Y values of the joystick in the coding box. Tap ![](./media/t5.png) to switch:

![t97](./media/t97.png)

#### 3.9.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-9-Joystick.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and place in ![](./media/t2.png). 
3. Click ![t47](./media/t47.png) of the ![t44](./media/t44.png) to set 4 output blanks in total. In the first blank, enter `X:`; in the third one enter `Y:`

![t98](./media/t98.png)

4. In ![](./media/codingBox.png), drag ![t96](./media/t96.png) block and put it onto the second blank of ![t98](./media/t98.png).
5. In ![](./media/codingBox.png), drag ![t96](./media/t96.png) block and set to Y, and put it onto the fourth blank of ![t98](./media/t98.png).
6. In ![](./media/control.png), drag ![t4](./media/t4.png) block and put it under ![t98](./media/t98.png). Set the delay to `100ms`.

**Complete code:**

![t99](./media/t99.png)

#### 3.9.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Toggle the joystick, and the values on axis X and Y changes. 

![t100](./media/t100.png)

### 3.10 Temperature and Humidity Sensor

#### 3.10.1 Overview

AHT20 temperature and humidity sensor adopts I2C interface and 20Bit ADC, and its operating voltage is 2V-5V. It features small volume, stable performance and high precision (temperature ±0.3℃, humidity ±2%RH). So it is widely used in smart home, consumer electronics, medical and automotive. The sensor is stable and can work in harsh environments.

#### 3.10.2 Schematic Diagram

![t101](./media/t101.png)

ATH20 temperature and humidity sensor transmits data via I2C interface, and it works according to resistive and capacitive technology. It detects the temperature because the material's conductivity changes with temperature, and it reflects humidity through the change in the capacitance value. The temperature measurement range is -40 ° C to +85 ° C with accuracy of ±0.3 ° C, and the humidity range is 0% ~ 100%RH ±2%RH. Besides, it features high accuracy, high reliability and long-term stability, so it can work under a variety of environmental conditions. With I2C protocol, ATH20 provides real-time and accurate temperature and humidity data.

#### 3.10.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t103](./media/t103.png) is a block included in coding box library. It reads the ambient temperature sensed by the coding box.
2. ![t104](./media/t104.png) is a block included in coding box library. It reads the ambient humidity sensed by the coding box.

#### 3.10.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-10-AHT20.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and place in ![](./media/t2.png). 
3. Click ![t47](./media/t47.png) of the ![t44](./media/t44.png) to set 6 outputs blanks in total. In the first blank, enter `Temperature:`; in the fourth one, enter `Humidity:`. Output “°” and “%” as their units respectively.

![t102](./media/t102.png)

4. In ![](./media/codingBox.png), drag ![t103](./media/t103.png) and put it onto the second blank of ![t102](./media/t102.png).
5. In ![](./media/codingBox.png), drag ![t103](./media/t104.png) and put it onto the fifth blank of ![t102](./media/t102.png).
6. In ![](./media/control.png), drag ![t4](./media/t4.png) and put it under the ![t102](./media/t102.png) and set the delay to `100ms`.

**Complete code:**

![t105](./media/t105.png)

#### 3.10.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You will see the temperature and humidity values. If you cover the sensing hole of the sensor with your hand, you can see a significant change in humidity.

![t106](./media/t106.png)

### 3.11 Pressure Sensor

#### 3.11.1 Overview

BMP388 pressure sensor is a pneumatic MEMS sensor a very compact package, featuring small size, low power consumption but high performance. In brief, it is a combination of the temperature and pressure sensor, which is perfect for mobile applications. 

This module adopts proven piezoresistive pressure sensing technology with high accuracy and linearity, as well as long-term stability and high EMC stability. Besides, it maximize flexibility in multi-device working, and is ideal for altitude tracking in consumer electronics drones, wearables, smart homes, etc. 

As for improvement, we can optimize the device in terms of power consumption, resolution and filtering performance.

#### 3.11.2 Schematic Diagram

![t107](./media/t107.png)

Based on piezoelectric pressure sensing technology, the BMP388 pressure sensor accurately measures pressure and temperature. It is capable of measuring air pressure in the 300 ~ 1250 hPa range without consuming much power (consuming only 3.4 µA at 1 Hz operating frequency). In addition, the built-in infinite impulse response filter can effectively reduce effects from external interference.

#### 3.11.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t191](./media/t191.png) is a block included in coding box library. It reads the air pressure values sensed by the pressure sensor in the coding box.

#### 3.11.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-11-Pressure.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and place in ![](./media/t2.png). 
3. In ![](./media/codingBox.png), drag ![t191](./media/t191.png) block and put it in ![t44](./media/t44.png).
4. In ![](./media/control.png), drag ![t4](./media/t4.png) and set the delay to `200ms`.

**Complete code:**

![t192](./media/t192.png)

#### 3.11.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You will see the ambient air pressure value sensed by the sensor.

![t193](./media/t193.png)

### 3.12 Geomagnetic Sensor (Compass)

#### 3.12.1 Overview

AK8975C geomagnetic sensor is a three-axis electronic compass IC with high sensitivity. It can output 13-bit data and accurately detect X, Y, Z axes geomagnetic values. Thus, it is suitable for portable devices with navigation function such as mobile phones and tablets.

#### 3.12.2 Schematic Diagram

![t190](./media/t190.png)

The AK8975C geomagnetic sensor works in the principle of electromagnetic induction. It takes the Earth's magnetic field as a measurement benchmark to sense changes in the magnetic field through its internal magnetic material and coils. Specifically, when the magnetic material is affected by geomagnetic field, a directional constrained electron spin deflection will happen due to the field force, which in turn forms a magnetic field. This field induces potential signals in the coil.

This sensor amplifies and processes the induced potential signals, which are then transmitted to the system for further calculation, analysis and processing. So it measures geomagnetic magnetic field in the axis X, Y, and Z to determine the direction.

#### Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t187](./media/t187.png) is a block included in coding box library. It reads the angle value sensed by the geomagnetic sensor of the coding box.

#### Test Code

You can manually build blocks, or directly open the code file we provide: `3-12-Geomagnetic.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/output.png), drag ![t44](./media/t44.png) block and place in ![](./media/t2.png). 
3. In ![](./media/codingBox.png), drag ![t187](./media/t187.png) block and put it onto ![t44](./media/t44.png).
4. In ![](./media/control.png), drag ![t4](./media/t4.png) and set the delay to `200ms`.

**Complete code:**

![t188](./media/t188.png)

#### Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You can see the angles sensed by the geomagnetic sensor. Rotate the coding box to observe that the angle changes from 0 to 360 degrees. 

(Note that the sensor may be affected by electronic devices and environmental magnetic fields, resulting in geomagnetic angle deviations.)

![t189](./media/t189.png)

### 3.13 Fan Module

#### 3.13.1 Overview

The motor adopts HR1124S motor control chip that is a single channel H-bridge driver chip used in DC motors. The H-bridge drive uses PMOS and NMOS power tubes with low on-resistance, ensuring lower power loss and longer safe working time. In addition, its standby and static working current are both low, so it is commonly used in toys.

#### 3.13.2 Schematic Diagram

![t108](./media/t108.png)

**Motor control logic table:**

| IO18 | IO17 |      motor state      |
| :--: | :--: | :-------------------: |
| HIGH | LOW  |    forward rotate     |
| LOW  | HIGH |    reverse rotate     |
| HIGH | HIGH | stop (a gradual stop) |
| LOW  | LOW  | brake (a brake stop)  |

#### 3.13.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t109](./media/t109.png) is a block included in coding box library. It controls the rotation of the motor in the coding box.

**Motor control logic table for the blocks:**

|  motor state   | value (speed) |
| :------------: | :-----------: |
| forward rotate |     1~100     |
| reverse rotate |    -1~-100    |
| stop rotating  |       0       |

#### 3.13.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-13-Fan.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/codingBox.png), drag ![t109](./media/t109.png) and put it into![](./media/t2.png).

![t110](./media/t110.png)

3. In ![](./media/control.png), drag ![t4](./media/t4.png) block and set delay to `2000`. And put it under ![t109](./media/t109.png).

![t111](./media/t111.png)

4. Duplicate all ![t109](./media/t109.png) but modify power to `-50`.
5. Duplicate all ![t109](./media/t109.png) again but modify power to `0`.

**Complete code:**

![t112](./media/t112.png)

#### 3.13.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You will see the fan forward rotates for 2s and then reverses for another 2s. Then it stops rotating for 2 seconds. These actions repeat.

### 3.14 Servo

#### 3.14.1 Overview

The 9g servo features small size but high performance and precision and is with good torque and accuracy, so it is perfect for small machines. With up to 180 degrees rotation angle, it enables extremely precise rotation and control and can be started fast with low noise.

#### 3.14.2 Schematic Diagram

**Angle range:** 180°(there are 360°, 180° and 90°)

**Drive voltage:** 3.3V / 5V

Usually three wires:

![t113](./media/t113.png)

**GND:** grounded, in brown

**VCC:** connect to +5v (3.3V) power, in red

**S:** signal pin to control PWM signal, in orange

![t114](./media/t114.png)

**Control principle**: The rotation Angle of the servo is controlled by adjusting the duty cycle of the PWM (pulse width modulation) signals. Theoretically, the period of the standard PWM signal is fixed at 20ms (50Hz), so the pulse width should be 1ms ~ 2ms. But in fact, it is 0.5ms ~ 2.5ms, corresponding to the servo angle of  0° ~ 180°. Note that the angle for the same signal varies from servo brands.

#### 3.14.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t115](./media/t115.png) is a block included in coding box library. It controls the rotation angle of the servo in the coding box.

#### 3.14.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-14-Servo.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/codingBox.png), drag ![t115](./media/t115.png) block and put it into ![](./media/t2.png). Modify the angle to 0 degree.

![t116](./media/t116.png)

3. In ![](./media/control.png), drag ![t4](./media/t4.png) block and set to `1000`, and put it under ![t117](./media/t117.png).

![t118](./media/t118.png)

4. Duplicate all ![t117](./media/t117.png) but set degree to `90`.
5. Duplicate all ![t117](./media/t117.png) again but set degree to `180`.

**Complete code:**

![t119](./media/t119.png)

#### 3.14.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The servo rotates to 0 degrees ans stays for 2 seconds (If its initial angle is 0, it will not rotate), and then it rotates to 90 degrees and stays for 2 seconds. At last, it turns to 180 degrees and stays for 2 seconds. These actions repeat.

### 3.15 WS2812 RGB LED

#### 3.15.1 Overview

WS2812 RGB LED is an external control LED integrating control circuit and light emitting circuit. It adopts single-line return-to-zero code communication, and supports 256 gray levels to display full-colors. The integrated chip inside each pixels efficiently stabilizes color output. So it is widely used in lighting, display and decoration.

#### 3.15.2 Schematic Diagram

![t120](./media/t120.png)

From the Schematic Diagram, ws2812 connects and transmits data over a single wire, which is the communication method named single-bus return-to-zero code (single NZR). The data enters in serial through the DIN port, and each pixel receives and processes 24 bits data (R, G, B color channels with 8 bits each). 

For detailed information of transmission mode, please refer the specification of ws2812.

#### 3.15.3 Code Blocks

Blocks in ![](./media/codingBox.png):

1. ![t121](./media/t121.png) is a block included in coding box library. It controls 12 RGB LEDs in the coding box, and the color of each can be controlled.

![image-20250423143447807](./media/image-20250423143447807.png)

2. ![t122](./media/t122.png) is a block included in coding box library. It controls displayed colors of all RGB LEDs in the coding box.

3. ![t123](./media/t123.png) is a block included in coding box library. It turns off all RGB LEDs in the coding box.

The code blocks in ![NeoPixel](./media/NeoPixel.png) also control the display of RGB LED, and there are more ways for it. For details, please visit [Libraries | MicroBlocks Wiki](https://wiki.microblocks.fun/en/libraries#attach-neopixel-led-to-pin).

#### 3.15.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-15-WS2812.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/codingBox.png), drag ![t121](./media/t121.png) and place in ![](./media/t2.png). Set  the first LED to show red, the second LED to show green, the third LED to show blue, the fourth LED to show yellow, the fifth LED to show cyan, the sixth light to show purple, and keep the remaining six ones unchanged.
3. In ![](./media/control.png), drag ![t4](./media/t4.png) and put it under ![t121](./media/t121.png).
4. In ![](./media/codingBox.png), drag ![t123](./media/t123.png) and put it under ![t4](./media/t4.png) and add one more ![t4](./media/t4.png) at last.

**Complete code:**

![t124](./media/t124.png)

#### 3.15.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The first six RGB LEDs respectively light up in red, green, blue, yellow, cyan and purple, while the other six all light up in green. Each RGB LED turns on for 0.5s then off for another 0.5s.

### 3.16 OLED Display

#### 3.16.1 Overview

OLED display is also called organic light-emitting diode or organic dot laser display. This display is self-luminous. It adopts a very thin coating of organic materials and glass substrate which will light up if current passes through. Therefore, it does not require a back-light. Note that it will not light up when just powering on; programing and wiring are also needed.

Besides, it features large viewing Angle, low power consumption, high contrast, thin display, fast response, simple structure, and can work on flexion boards within a wide temperature range.

#### 3.16.2 Parameters

Communication mode: I2C communication

Internal driver chip: SSH1106

Resolution: 128 x 64

#### 3.16.3 Code Blocks

Blocks in ![LEDDisplay](./media/LEDDisplay.png):

1. ![t125](./media/t125.png) is used to control the OLED display of the coding box. Different display patterns can be created by yourself through the mouse.
2. ![t126](./media/t126.png) is used to set the OLED display patterns.
3. ![t127](./media/t127.png) clears all display.
4. ![t128](./media/t128.png) shows a rectangle on the OLED. Just set the values of X and Y.
5. ![t129](./media/t129.png) clears the display of ![t128](./media/t128.png).
6. ![t130](./media/t130-1745396309569-18.png) sets characters to show on OLED.
7. ![t131](./media/t131.png) sets scrolling characters to show on OLED.
8. ![t132](./media/t132.png) stops showing  scrolling characters on OLED.

--------

The code blocks in ![TFT](./media/TFT.png) also control the display of OLED, and there are more ways for it. For details, please visit [OLED Library | MicroBlocks Wiki](https://wiki.microblocks.fun/en/extension_libraries/oled).

-------

Blocks in ![](./media/codingBox.png):

1. ![t174](./media/t174.png) is a block included in coding box library. It controls the values in the characters or variables displayed by the OLED in the coding box. The display position and size can be set.
2. ![t175](./media/t175.png) is a block included in coding box library. It clears the content displayed on the OLED.

#### 3.16.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-16-OLED.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![LEDDisplay](./media/LEDDisplay.png), drag ![t135](./media/t135.png) and place in ![](./media/t2.png). Set the icon to ![t134](./media/t134.png).
3. In ![](./media/control.png), drag ![t4](./media/t4.png) and put it under ![t134](./media/t134.png).
4. `duplicate all` ![t134](./media/t134.png) and put the copy under ![t4](./media/t4.png), and set the icon to ![t133](./media/t133.png).

**Complete code:**

![t136](./media/t136.png)

#### 3.16.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The OLED displays ![t134](./media/t134.png) and ![t133](./media/t133.png) alternately with each for 0.5s.

### 3.17 Traffic Lights

#### 3.17.1 Overview

The traffic light module limits the pedestrian and vehicular thoroughfare. It includes a red, a yellow and a green light, which imply different instructions.

**Red for Stop:** Pedestrians and vehicles stop proceeding.

**Yellow for Caution:** Pedestrians and vehicles are ready for stopping. If the drive is already in process, the speed should be slow.

**Green for Proceed:** Pedestrians and vehicles keep going with the abidance of traffic regulations.

In this project, you can program on ESP32 Coding Box to control a mini traffic light. For instance, set the duration of each lights and the interval time among them. Besides, you may also add a timer to alter light colors to schedule.

#### 3.17.2 Code Flow

![t142](./media/t142.png)

#### 3.17.3 Code Blocks

Blocks in ![](./media/control.png):

1. ![t137](./media/t137.png) repeats the execution for a given number of times. Just input the number of repetitions needed into the white box.

#### 3.17.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-17-Traffic Lights.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. First, turn off all the LEDs, and place the blocks to turn on required LEDs.

![t138](./media/t138.png)

3. The green LED lights up for 5s and goes off.

![t139](./media/t139.png)

4. The yellow LED blinks for three times with an interval of 0.5s.

![t140](./media/t140.png)

5. The red LED lights up for 5s and goes off. Repeat the set times. And then go ahead till all blocks in ![](./media/t2.png) are done.

![t141](./media/t141.png)

#### 3.17.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. And you will see the green LED lights up for 5s and goes off. Immediately, the yellow LED blinks for three times. After that, the red LED lights up for 5s and goes off. These actions are exactly a model of traffic light and will repeat. 

### 3.18 Breathing LED

#### 3.18.1 Overview

PWM breathing LED utilizes on-board programmable PWM to output analog waveform. After powering on, LED brightness can be adjusted through duty cycle of the waveform to eventually realize a breathing light. In this way, ambient light can be simulated by changing LED brightness along with time. Also, breathing LED can form a colorful mini light show to construct a tranquil and warm environment.

#### 3.18.2 Schematic Diagram

PWM controls analog output via digital means, which are able to adjust the duty cycle of the wave (a signal circularly shifting between high level and low level).

digital ports of voltage output are LOW and HIGH, which respectively correspond to 0V and 5V. Generally, we define LOW as 0 and HIGH as 1. will output 500 signals of 0 or 1 within 1s. If they are 500 “1”s, 5V will be output. Oppositely, if they are all 0s, the output will be 0V. Or if they are 010101010101…, the average output will be 2.5V. In other words, output ratio of 0 and 1 affects the voltage value. 

Honestly, it differs from real continuous output, yet the more 0 and 1 signals are output per unit time, the more accurate the control will be.

![t143](./media/t143.png)

#### 3.18.3 Code Blocks

Blocks in ![](./media/variables.png):

1. Create a variable.

  ![t144](./media/t144.png)

2. ![t151](./media/t151.png) is used to assign values to variables. Its selection menu will display a list of all global and local variables.
3. ![t145](./media/t145.png) changes the value of a certain global variable or local variable according to the given value in the input area. The input value can be a positive number or a negative number.
4. ![t194](./media/t194.png)Used to call the value of the corresponding variable name.s

For more details, please visit [Blocks Reference | MicroBlocks Wiki](https://wiki.microblocks.fun/en/reference_manual#variables)

--------

Blocks in ![](./media/pins.png):

1. ![t146](./media/t146.png) generates a pulse width modulation (PWM) signal on the given pin, approximately at a power level of 0-1023. PWM works by quickly turning pins on and off. Power is controlled by changing the duty cycle(the percentage of time that the pins are on in each cycle). 0 means pin off, while 1023 means full power (that is, the pin is on 100% of the time). When the value is 512, the duty cycle is 50%, so the pin is on half of the time and off another half of the time. PWM can be used to control the brightness of leds or the speed of motors. 

For more details, please visit [Blocks Reference | MicroBlocks Wiki](https://wiki.microblocks.fun/en/reference_manual#pins).

#### 3.18.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-18-Breathing LED.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/variables.png), declare a variable named `value`.
3. Drag a ![t137](./media/t137.png) to set to 255 times. Add a ![t145](./media/t145.png) block to increase `value` by 1 after each repetition. Use ![t146](./media/t146.png) to output `value` to pin `io23`, and then add a 10ms delay to slow down the red LED lighting.

![t147](./media/t147.png)

4. Duplicate the code blocks and set `value` to increase by `-1` during each repetition. So the red LED dims.

![t148](./media/t148.png)

#### 3.18.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. The red LED gradually lights on and dims out, and vice versa. It “breathes” evenly.

### 3.19 Button Control LED

#### 3.19.1 Overview

In this project, we control the ON/OFF of the LED via an AD button. The LED will light up if we press the button and it goes off when we press the button again.

#### 3.19.2 Code Flow

![t150](./media/t150.png)

#### 3.19.3 Code Blocks

Blocks in ![](./media/operators.png):

1. ![t149](./media/t149.png) is used to determine whether two values are equal. If yes, it returns true; otherwise, it returns false.

For more details, please visit [Blocks Reference | MicroBlocks Wiki](https://wiki.microblocks.fun/en/reference_manual#operators)

#### 3.19.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-19-Button Control LED.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. In ![](./media/variables.png), declare a variable named `item`.
3. ![t52](./media/t52.png) determines whether the red button is pressed.

![t152](./media/t152.png)

4. Check if `item` = 0. If yes, red LED turns on and set `item` to 1 . If not, red LED turns off and set `item` to 0. At last, add a delay of 300ms.

![t153](./media/t153.png)

#### 3.19.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Press the red button and the red LED lights up; press it again and the LED goes off.

### 3.20  Intrusion Alarm

#### 3.20.1 Overview

Intrusion alarm is a device alerting illegal intrusion into a prevention area. It plays an important role in security. We can see it everywhere: families, stores, warehouses, supermarkets and so on. 

All in all, it protects our personal and property safety.

#### 3.20.2 Code Flow

![t154](./media/t154.png)

#### 3.20.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-20-Intrusion Alarm.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. ![t52](./media/t52.png) determines whether there is a human being. If yes, the red LED is on yet the green LED is off, and the buzzer alarms. If not, the buzzer does not alarm, along with red LED off and green LED on.

![t155](./media/t155.png)

#### 3.20.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. When the sensor detects a motion around, the speaker alarms, the red LED turns on and the green one is off. If no intrusion is detected, the red LED will go off and the green will be on; at the same time, the speaker stays quiet. 

### 3.21 Window Close In Dark

#### 3.21.1 Overview

In this project, we program to make the window automatically close when getting dark. So the photoresistor is required to sense the ambient light. We set a threshold for the resistor. When ambient light value is lower than the threshold, the servo closes the window.

#### 3.21.2 Code Flow

![](./media/t156.png)

#### 3.21.3 Code Blocks

Blocks in ![](./media/operators.png):

1. ![t158](./media/t158.png) is used to compare two values. If the first one is greater than the second one, it returns true.
2. ![t157](./media/t157.png) is also used to compare two values. If the first one is smaller than the second one, it returns true.
3. ![t163](./media/t163.png) determines whether the conditions on both sides are met. If yes, it outputs True; if one of the conditions is not met, it outputs False.

For more details, please visit [Blocks Reference | MicroBlocks Wiki](https://wiki.microblocks.fun/en/reference_manual#operators)

#### 3.21.4 Test Code

You can manually build blocks, or directly open the code file we provide: `3-21-Window Close In Dark.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Check whether the value of the photoresistor is less than 500. If it is, the servo rotates to 180°; if not, the servo rotates to 0°.

![t159](./media/t159.png)

#### 3.21.5 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Cover the photoresistor to lower its analog value under 500 and the servo will rotate to 180°. If the analog value exceeds 500, the servo will rotate to 0°.

### 3.22 Voice Control Light

#### 3.22.1 Overview

Voice-control-light device mainly consists of a sound sensor, a photoresistor and an LED. The photoresistor is adopted to avoid LED lighting up during daytime. The sound sensor measures sound volume to determine whether it is reached the set threshold. If yes, the LED will light up for a few seconds. 

#### 3.22.2 Code Flow

![t160](./media/t160.png)

#### 3.22.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-22-Voice Control Light.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Determine whether the photoresistor value is lower than 500

![t161](./media/t161.png)

3. Determine whether the photoresistor value is greater than 200. If yes, the red LED turns on for 5 seconds and then goes off.

![t162](./media/t162.png)

#### 3.22.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Cover the photoresistor, and make some sounds, and you will see the LED light up for 5 seconds. 

### 3.23 Human Body Piano

#### 3.23.1 Overview

The analog piano mainly includes an ultrasonic sensor to detect the distance of your position. It plays different tones according to distance values. If there is an open space, you may place it on ground to play musics.

#### 3.23.2 Code Flow

![6-23-2-1](./media/6-23-2-1.png)

#### 3.23.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-23-Human Body Piano.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Declare a variable named `distance` and assign the distance values detected by the ultrasonic sensor to it. 

![t164](./media/t164.png)

3. Determine whether the distance value is within 5cm ~ 10cm. If yes, play tone `Do`.
4. Determine whether the distance value is within 10cm ~ 15cm. If yes, play tone `Re`.
5. Determine whether the distance value is within 15cm ~ 20cm. If yes, play tone `Mi`.
6. Determine whether the distance value is within 20cm ~ 25cm. If yes, play tone `Fa`.
7. Determine whether the distance value is within 25cm ~ 30cm. If yes, play tone `Sol`.
8. Determine whether the distance value is within 30cm ~ 35cm. If yes, play tone `La`.
9. Determine whether the distance value is within 35cm ~ 40cm. If yes, play tone `Si`.

![t165](./media/t165.png)

#### 3.23.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Put your hand in front of the ultrasonic sensor and the speaker will emit sound. You can control the tone by moving your hand in front of the sensor.

Tones corresponding to distance:

Do: 5-10cm

Re: 10-15cm

Mi: 15-20cm

Fa: 20-25cm

Sol: 25-30cm

La: 30-35cm

Si: 35-40cm

### 3.24 Button Control Fan

#### 3.24.1 Overview

In this experiment, we program to control the fan by a button.

#### 3.24.2 Code Flow

![t166](./media/t166.png)

#### 3.24.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-24-Button Control Fan.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Press the red button to turn off the fan and delay for 300ms, otherwise press the green button to turn on the fan and delay for 300ms

![t167](./media/t167.png)

#### 3.24.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. When we press the green button, the fan will turn on. When we press the red button, the fan stops working. 

### 3.25 Auto-door

#### 3.25.1 Overview

Many shopping malls open their doors when someone approaches and close them when no one is detected. Herein, we adopt a PIR motion sensor to simulate this kind of auto-door. The door opens when someone is detected and closes when no one is present.

#### 3.25.2 Code Flow

![t168](./media/t168.png)

#### 3.25.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-25-Auto-door.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. When the PIR sensor detects a person, the servo rotates to 180 degrees. It returns to 0° until no one is detected.

![t169](./media/t169.png)

#### 3.25.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Wave your hand over the PIR motion sensor, and the servo will rotate to 180 degree (door open). After a while, it will back to 0 degree (door close) if nothing is detected.

### 3.26 Access Card

#### 3.26.1 Overview

A common access card is a  magnetic card or a key chain. So in this experiment, we make a simple access device through servo, a magnetic card and an RFID module.

#### 3.26.2 Code Flow

![t170](./media/t170.png)

#### 3.26.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-26-Access Card.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Check if it is the correct card ID. If it is, the servo rotates to 180° and stays for 5 seconds and then returns to 0°. If not, the servo will not move. <span style="color:red;">Note that the value of each card is different. You need to replace it with the value of your own one.</span>

![t171](./media/t171.png)

#### 3.26.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Put your IC card at the sensing area of the RFID module, and the servo will rotate to 180 degree for 3s and then come back. If the card code is not correct, the servo will stay still.

### 3.27 Auto-fan

#### 3.27.1 Overview

The weather is getting hotter in summer, so some public places will be equipped with some auto-fans that sense the ambient temperature value. When the temperature reaches a set value, he fan turns on. We add a PIR motion sensor to lower energy consumption. Thus, the fan will turn on only when the temperature reaches the value and someone is sensed nearby. Now let's do it!

#### 2.27.2 Code Flow

![t172](./media/t172.png)

#### 3.27.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-27-Auto-fan.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Determine whether the temperature value is higher than 28, and whether there is a human. If there is someone, turn on the fan; if there is no one, do not turn on the fan.

![t173](./media/t173.png)

#### 3.27.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. When the temperature value is higher than 28 and the PIR motion sensor detects someone, the fan turns on. If one of the two conditions are not satisfied, the fan will not rotate.

### 3.28 Environment Monitoring

#### 3.28.1 Overview

In this project, we use an OLED display to reveal the values of temperature, humidity, air pressure and altitude in the environment. It can be regarded as a mini environmental monitoring device. 

#### 3.28.2 Test Code

You can manually build blocks, or directly open the code file we provide: `3-28-Environment Monitoring.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Before building blocks, ![t175](./media/t175.png) is required to clear all OLED display to prevent initial display content.
2. Add a ![t174](./media/t174.png) to show `Data Suggest` at the position of (X:25, Y:0). Turn the `big` off.
2. Add another ![t174](./media/t174.png) to show `T:` at the position of (X:0, Y:10) at the next line.
2. Show temperature value at the position of (X:20, Y:10) followed a `C` at (X:40, Y:10).
2. Similarly, build blocks to show humidity values and pressure values. Add a delay of 1 second and clear the OLED at last.

**Complete code:**

![t176](./media/t176.png)

#### 3.28.3 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You will see the values of temperature, humidity, air pressure and altitude on the OLED display. These values refresh every second.

![t177](./media/t177.png)

### 3.29 Car Backing Radar

#### 3.29.1 Overview

When a car is in reverse, it will alarm the distance of the obstacles behind the parking space. In this project, we build a mini car backing radar with an ultrasonic sensor for distance detection, a speaker to alarm, and a traffic light module as an indicator.

#### 3.29.2 Code Flow

![t178](./media/t178.png)

#### 3.29.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-29-Car Backing Radar.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Declare a variable named `distance`. Assign the detected value of the ultrasonic sensor to it.
3. Determine whether `distance` > 40. If yes, the speaker stays quiet, the red LED is off while the green one is ON.
4. Determine whether `distance` < 40. If yes, the speaker alarms, the red LED is ON while the green one is off.

**Complete code:**

![t179](./media/t179.png)

#### 3.29.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. When the the detected distance value is greater than 40cm, the green LED is on and the amplifier does not emit sound. If the value is less than 40cm, the red LED will light up and the amplifier will alarm.

### 3.30 RGB Ring Clock

#### 3.30.1 Overview

In this project, we build an informal clock with an RGB ring, whose three colors represent hour, minute and second respectively. Since the ring only boasts 12 beads, each bead is 5 seconds/minutes (60/12=5).

#### 3.30.2 Code Flow

As shown in the flowchart, we use red for hour, green for minutes, blue for seconds. When second = 60, minute adds 1, and when minute = 60, hour adds 1. 

Note that here we adopt 60/5=12 rather than 59/5=11.8, this is because the variable type is integer and the value should be divided by 5. And 60 can be perfectly divided into 12 parts.

![t180](./media/t180.png)

#### 3.30.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-30-RGB Ring Clock.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

**Time:**

2. Create 3 variables named `hour`, `minute`, `second`, and set an initial time.
3. Based on `second`, increase by 1 at a time till it reaches 59, and then zero out the `second`.
4. When `second` reaches 59, `minute` increases by 1. Similarly, zero `minute` out till it reaches 59.
5. When `minute` reaches 59, `hour` increases by 1. There are subtle differences: we reset `hour` to 1 till it reaches 12.

**RGB:**

6. There are only 12 LED beads, yet 60 is the maximum in minutes and seconds. Thus, we divide 60 by 12 to get 5: each LED stands for 5 seconds or 5 minutes. We use red(hour), green(minute), and blue(second) to indicate for three clock hands. For instance, when time is 12:59:50, the 12th LED shows in red, the 11th one is green, and the 10th one is blue.

**Complete code:**

![t181](./media/t181.png)

#### 3.30.4 Test Result

Before uploading code, you need to input an initial time in the following blocks of variables hour, minute, second. Herein, we set to 12:59:50.

![t182](./media/t182.png)

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. You will see the RGB ring shows the time: red for hour, green for minute, blue for second. A minute passes as blue runs a circle. Only one color will be displayed when they are overlapped. Blue will not cover green while green will not cover red. 

<p style="color:red;">Note that this is an informal clock without a clock chip. So its errors begin to accumulate over time.</p>

### 3.31  Joystick Control Servo

#### 3.31.1 Overview

We control the servo via the axis X of the joystick. This model is widely applied to mechanical ON/OFF of lights and doors.

#### 3.31.2 Code Flow

![t183](./media/t183.png)

#### 3.31.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-31-Joystick Control Servo.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. Determine whether the joystick is less than -90. If yes, the servo rotates to 180 degrees.
3. Determine whether the joystick is greater than 90. If yes, the servo rotates to 0 degrees.

**Complete code:**

![t184](./media/t184.png)

#### 3.31.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. Push the joystick to the left and the servo rotates to 180 degree. Push it to the right and the servo rotates to 0 degree.

### 3.32 Ultrasonic Ranger

#### 3.32.1 Overview

In this project, we combine the ultrasonic sensor and the OLED module to build a distance meter, whose detection range is 4-300CM.

#### 3.32.2 Test Code

You can manually build blocks, or directly open the code file we provide: `3-32-Ultrasonic Ranger.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) and ![](./media/t2.png) to the script area, and stack them together.

![t34](./media/t34.png)

2. OLED displays `Distance:` at the position of (X:0, Y:0).
3. OLED displays the distance value detected by the ultrasonic sensor at the position of (X:0, Y:20).
4. Delay 1 second and then clear the OLED display.

**Complete code:**

![t185](./media/t185.png)

#### 3.32.2 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth, and click ![t59](./media/t59.png) to upload the code to the coding box. “Distance:” will be displayed on the first line. What followed is the distance value in “CM” in the second line.

![t186](./media/t186.png)

### 3.33 wifi

#### 3.33.1 Overview

As a powerful microcontroller, ESP32 boasts a built-in Wi-Fi and Bluetooth nodule that is widely used in Internet of Things (IoT). With this function, it can remotely control the data transmission through the wireless network. 

In applications, ESP32 can be used as a client to connect to a Wi-Fi network, or as a hotspot to create its own network. Through these connections, ESP32 receives commands to control external devices, such as turning on/off lights and adjusting temperature. In the code, protocols like HTTP and MQTT are used to communicate with the server to achieve data sending and receiving, so as to remotely control and monitoring.

#### 7.33.2 ESP32 wifi Introduction

ESP32 development board comes with built-in Wi-Fi (2.4G) and Bluetooth (4.2), which enable it to easily connect to Wi-Fi network and communicate with other devices in the network. You can display web pages in your browser via ESP32.

![6-34-3-1](./media/6-34-3-1.png)

- Base station mode (STA / Wi-Fi Client mode): ESP32 is connected to Wi-Fi hotspot (AP).
- AP mode (Soft-AP / Wi-Fi hotspot mode): Wi-Fi device(s) is(are) connected to ESP32.
- AP-STA mode: ESP32 is both Wi-Fi hotspot and a Wi-Fi device connected to another Wi-Fi.
- These modes supports multiple security modes, including WPA, WPA2 and WEP.
- It is able to scan Wi-Fi hotspot (active or passive)
- It support promiscuous mode monitoring IEEE802.11 Wi-Fi packets.

------

For more wifi reference, please visit https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/network/esp_wifi.html

Espressif official: https://www.espressif.com.cn/en/home

![6-34](./media/6-34-3-2.png)

#### 3.33.2 Code Blocks

In ![wifi](./media/wifi.png):

1. ![t195](./media/t195.png) block is used to set the WiFi name and password for the ESP32 connection. After a successful connection, it will print the IP address of the ESP32. For example, if the connected WIFI name is: LiuTest, the password is: 88888888

![t209](./media/t209.png)

2. ![t196](./media/t196.png) block is used to set the URL of the access control page of the browser. You can name it according to your own needs. If multiple coding boxes are occupying the same WiFi, you must customize this name. For example, herein, we just need to type `microblocks.local` in the browser to enter our control page.

If you are interested, you can learn more detailed information in the official website: [WIFI | MicroBlocks Wiki](https://wiki.microblocks.fun/en/network_libraries/wifi)

In ![WebPanel](./media/WebPanel.png):

1. ![t170](./media/t197.png) block is used to reset the Web page to update the data read by the ESP32.
2. ![t198](./media/t198.png) block is used to set the name of the Web page. It is “Micro Blocks Web Panel” by default.
3. ![t199](./media/t199.png) block is used to generate a display tag named “Temperature” on the Web page to show the temperature value. The usage method is as follows:

(1). Click ![t9](./media/t9.png) to open “advanced mode”

![t200](./media/t200.png)

(2). Find the temperature block to “copy callable name”, so then this block name is duplicated.

![t201](./media/t201.png)

(3). Paste this name into “get temperature” of ![t199](./media/t199.png):

![t202](./media/t202.png)

Dynamic demo:

![t203](./media/t203-1752455338187-11.gif)

4. ![t204](./media/t204.png) block is used to add a slider to the Web page. When in use, we first set the name of the slider, and then set the value range of the servo to 0-180. At last, we call to set the name of the servo module.

![t205](./media/t205.gif)

5. ![t206](./media/t206.png) block is used to add a color control label for WS2812 on a Web page. When in use, we set a name for the code block that controls the display of WS2812, and then copy and paste it to the blank behind the “with selector”.
6. ![t207](./media/t207.png) block is used to add a button on the Web page. When in use, we set a name first and then copy and paste it to the blank behind the “with selector”. Each click of the button will execute this block once.
7. ![t208](./media/t208.png) block adds a button on the Web page (unlike the above one, this one can be “dual-controlled”, say, the first click turns on LED, and the second click turns it off).

<span style="color:red;font-size:20px;">Note that we must tick the “advanced mode” before we “copy callable name”.</span>

#### 3.33.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-33-Web Panel.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) to the script area.
2. In ![wifi](./media/wifi.png), drag ![t195](./media/t195.png) and put it under the ![](./media/t1.png), and then set the WIFI name to “LiuTest” and password to “88888888”.
3. In ![wifi](./media/wifi.png), drag ![t196](./media/t196.png) and put it under ![t209](./media/t209.png), and set the Web name to `codingbox.local`.
4. In ![WebPanel](./media/WebPanel.png), drag ![t170](./media/t197.png) and put it under  ![t210](./media/t210.png).
5. In ![WebPanel](./media/WebPanel.png), drag ![t198](./media/t198.png) and put it under ![t170](./media/t197.png), and set the title to `Coding Box Web Panel`.

**Complete code:**

![t211](./media/t211.png)

#### 3.33.4 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth. Click ![t59](./media/t59.png) to upload code. After connecting to wifi, you can see an IP address: ![t212](./media/t212.png). Now connect your control device (mobile phone, tablet, computer) to the same wifi and search `codingbox.local` on the browser to enter the Web page. 

<span style="color:red">Note: 1. Only when the control device (mobile phone, tablet, computer) and the coding box are connected to the same wifi can the Web control page be accessed. 2. The coding box can only connect to wifi with a frequency of 2.4GHz. 3. It comsumes more power when using the wifi function, so an external power supply or AA battery installation is required to ensure a sufficient power. Ortherwise, the box will keep restarting and resetting.</span>

![t213](./media/t213.png)

### 3.34 wifi Real-time Display

#### 3.34.1 Overview

In this project, we display the values of temperature and humidity sensor, pressure sensor, photoresistor, sound sensor, PIR motion sensor and ultrasonic sensor on the web page. 

#### 3.34.2 Test Code

You can manually build blocks, or directly open the code file we provide: `3-34-Web Display Panel.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) to the script area.

2. Drag ![t195](./media/t195.png) and set the WIFI name to “LiuTest” and password to “88888888”.
3. Drag ![t196](./media/t196.png) and set the Web name to “CodingBox.local”.
4. Add ![t170](./media/t197.png) to refresh the data of each sensor on the Web page.
5. Add ![t198](./media/t198.png) and set the title to “Coding Box Web Panel”.
6. At last, drag some ![t199](./media/t199.png) to display the sensor data on the Web page, including temperature, humidity, air pressure, ultrasonic ranging distance, PIR motion and light sensor in sequence.

For example, add a temperature sensor value:

![t203](./media/t203-1752455338187-11.gif)

**Complete code:**

![t214](./media/t214.png)



#### 3.34.3 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth. Click ![t59](./media/t59.png) to upload code. After connecting to wifi, you can see an IP address: ![t212](./media/t212.png). Now connect your control device (mobile phone, tablet, computer) to the same wifi and search `codingbox.local` on the browser to enter the Web page. 

![t215](./media/t215.png)

### 3.35 WiFi Control

#### 3.35.1 Overview

We control LED, buzzer, servo and the fan on the web page button wirelessly. 

#### 3.35.2 Test Code

You can manually build blocks, or directly open the code file we provide: `3-35-Web Control Panel.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) to the script area.
2. Drag ![t195](./media/t195.png) and set the WIFI name to “LiuTest” and password to “88888888”.
3. Drag ![t196](./media/t196.png) and set the Web name to “CodingBox.local”.
4. Add ![t170](./media/t197.png) to refresh the data of each sensor on the Web page.
5. Add ![t198](./media/t198.png) and set the title to “Coding Box Web Panel”.

6. Use ![t206](./media/t206.png) to add a component that controls the display color of WS2812, and modify the blank behind “with selector” to `cbox_setAllNeoPixels`.
7. Use ![t204](./media/t204.png) to add a slider that controls the servo. Remain the name as default and set the range to 0-180, and modify the blank behind “with selector” to `cbox_setServo`.
8. Use ![t207](./media/t207.png) to add a button that controls the fan on. Set name as “Fan ON”, and modify the blank behind “with selector” to `cbox_setFan`. Click ![t219](./media/t219.png) to add a “params” blank.
9. In ![](./media/data.png), drag ![t217](./media/t217.png) and put it into the “params” blank of the ![t218](./media/t218.png), and modify “cat” to “100”.
10. Use ![t207](./media/t207.png) to add a button that controls the fan off. Set name as “Fan OFF”, and modify the blank behind “with selector” to `cbox_stopFan`.
11. Use ![t207](./media/t207.png) to add a button that controls the buzzer. Set name as “Buzzer”, and modify the blank behind “with selector” to `cbox_beep`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to “100”.
12. Use ![t208](./media/t208.png) to add a button that controls the red LED. Set name as “Red LED”, and modify the blank behind “with selector” to `cbox_setLED`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to “red”.
13. Use ![t208](./media/t208.png) to add a button that controls the yellow LED. Set name as “Yellow LED”, and modify the blank behind “with selector” to `cbox_setLED`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to “yellow”.
14. Use ![t208](./media/t208.png) to add a button that controls the green LED. Set name as “Green LED”, and modify the blank behind “with selector” to `cbox_setLED`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to “green”.

**Complete code:**

![t220](./media/t220.png)



#### 3.35.3 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth. Click ![t59](./media/t59.png) to upload code. After connecting to wifi, you can see an IP address: ![t212](./media/t212.png). Now connect your control device (mobile phone, tablet, computer) to the same wifi and search `codingbox.local` on the browser to enter the Web page. 

Slide the slider to control the servo angle. Click the color area below NeoPixels and then click the blank area to set the display color of WS2812. Click the “Fan ON” to turn on the Fan, and click the “Fan OFF” to turn it off. Click “Buzzer” and the buzzer will sound. 

Click “Red LED” to turn on the Red LED, and press again to turn off the red LED. For the “Yellow LED” and “Green LED”, they work in the same way, but the LED colors are different.

![image-20250714134304680](./media/image-20250714134304680.png)

### 3.36 wifi Piano

#### 3.36.1 Overview

In this project, we set seven buttons to control the speaker to play tones of Do, Re, Mi, Fa, So, La, Si.

#### 3.36.2 Test Code

You can manually build blocks, or directly open the code file we provide: `3-36-Web Piano Panel.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) to the script area.
2. Drag ![t195](./media/t195.png) and set the WIFI name to “LiuTest” and password to “88888888”.
3. Drag ![t196](./media/t196.png) and set the Web name to “CodingBox.local”.
4. Add ![t170](./media/t197.png) to refresh the data of each sensor on the Web page.
5. Use ![t198](./media/t198.png) and set the title to “Coding Box Web Piano”.
6. Use ![t207](./media/t207.png) to add a button that controls the speaker and set the label to “Do”.
7. In ![tone](./media/tone.png), drag ![img](./media/t64.png) to “copy callable name”, and paste it to the blank behind the “with selector” of the ![t221](./media/t221.png). Click ![t219](./media/t219.png) to add a “params” blank.

8. In ![](./media/data.png), drag ![t217](./media/t217.png) and click ![t219](./media/t219.png) to add one more blank. Put it into the “params” blank of the![t222](./media/t222.png), and modify “cat” to “100”, “dog” to “300”.

![t223](./media/t223.png)

9. Similarly, set tones of Re, Mi, Fa, Sol, La, Si.

**Complete code:**

![t224](./media/t224.png)

#### 3.36.3 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth. Click ![t59](./media/t59.png) to upload code. After connecting to wifi, you can see an IP address: ![t212](./media/t212.png). Now connect your control device (mobile phone, tablet, computer) to the same wifi and search `codingbox.local` on the browser to enter the Web page. 

Click the corresponding button on the Web page, the speaker will play the related tone.

![t225](./media/t225.png)

### 3.37 Smart Control Panel

#### 3.37.1 Overview

Combined web buttons and wireless control, this control panel in this project is able to control modules and read module values as well. 

#### 3.37.3 Test Code

You can manually build blocks, or directly open the code file we provide: `3-37-intelligent console.ubp`. If you have any questions about how to open code files or upload code, please back to `1.9 Upload Code`.

**Build code blocks:**

1. In ![](./media/control.png), drag ![](./media/t1.png) to the script area.
2. Drag ![t195](./media/t195.png) and set the WIFI name to “LiuTest” and password to “88888888”.
3. Drag ![t196](./media/t196.png) and set the Web name to “CodingBox.local”.
4. Add ![t170](./media/t197.png) to refresh the data of each sensor on the Web page.
5. Add ![t198](./media/t198.png) and set the title to “Coding Box Web Panel”.
6. Use ![t199](./media/t199.png) to display temperature value on the Web page. Modify the blank behind the “with selector” into “cbox_temperature”.
7. Similarly, add humidity, photoresistor, PIR motion and RFID value in sequence.
8. Use ![t206](./media/t206.png) to add a component that controls the display color of WS2812, and modify the blank behind “with selector” to `cbox_setAllNeoPixels`.
9. Use ![t204](./media/t204.png) to add a slider that controls the servo. Remain the name as default and set the range to 0-180, and modify the blank behind “with selector” to `cbox_setServo`.
10. Use ![t207](./media/t207.png) to add a button that controls the fan on. Set name as “Fan ON”, and modify the blank behind “with selector” to `cbox_setFan`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to “100”.
11. Use ![t207](./media/t207.png) to add a button that controls the fan off. Set name as “Fan OFF”, and modify the blank behind “with selector” to `cbox_stopFan`.
12. Use ![t226](./media/t226.png) , a loop block, to replace code block that repeatedly executes, such as LED control.
13. Put a ![t217](./media/t217.png) into the blank of ![t226](./media/t226.png) and click ![t219](./media/t219.png) to add “red”, “yellow” and “green”.

![t227](./media/t227.png)

14. Put ![t208](./media/t208.png) in ![t227](./media/t227.png). Use ![t228](./media/t228.png) to bind the “i” value to “LED”, which is the name of button. And modify the blank behind “with selector” to `cbox_setLED`. Click ![t219](./media/t219.png) to add a “params” blank, and put ![t217](./media/t217.png) in it and set to variable “i”.

![t229](./media/t229.png)

15. Similarly, we set the buttons for OLED display icons. They are “happy”, “heart” and “sad” respectively, of which variable “i” is also available. 

	In ![LEDDisplay](./media/LEDDisplay.png), find ![t126](./media/t126.png) and “copy callable name”, and paste to the blank behind the “with selector”: `led_displayImage`. Click ![t219](./media/t219.png) to add a “params” blank, put ![t217](./media/t217.png) in it, and click ![t219](./media/t219.png) of it twice so we get 3 blanks of list. Input variable “i” in the first one and “1” in the remaining two(The starting position of the icon display).

![t230](./media/t230.png)

**Complete code:**

![t231](./media/t231.png)

#### 3.37.3 Test Result

Connect the coding box to the MicroBlocks via USB or Bluetooth. Click ![t59](./media/t59.png) to upload code. After connecting to wifi, you can see an IP address: ![t212](./media/t212.png). Now connect your control device (mobile phone, tablet, computer) to the same wifi and search `codingbox.local` on the browser to enter the Web page. 

![image-20250714161427169](./media/image-20250714161427169.png)
