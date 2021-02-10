# trashpad

<img src="https://i.redd.it/ri45sdepm4j21.jpg" width="45%"></img> 

A 17 key handwired macropad almost entirely from upcycled parts.

Microcontroller is Teensy LC.

Case is made from the numpad of a dead Corsair K70 mechanical keyboard. Corsair, in their infinite wisdom, made the numpad easily detachable with the simple application of Dremel and force. Underside is taken from the plastic from the K70 as well.

All keycaps were the K70 ones, sanded and handpainted.

Switches are recovered Cherry Reds from the Corsair.

Handwired with assorted diodes I dug out of a RadioShack components box I've had lying around.  They're not uniform or pretty, but they work just fine.

Project cost: About $13.

Usage:  
1. Clone [qmk_firmware](https://github.com/qmk/qmk_firmware).  
2. Clone this project.
3. Copy the trashpad directory to qmk_firmware/keyboards/handwired/.
4. Build firmware as normal ( qmk build -kb handwired/trashpad -km ... )
5. Reset trashpad.
