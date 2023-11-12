# Weekly Log
Video Link: https://www.youtube.com/watch?v=nE14feC3eG4


## Week6
### Goal for this week
The goal for this week is to come up with an idea for the final project. We spent a couple of days to brainstorm, and decided to create a wearable animatronic dog tail. Both of us raise dogs, and we found that tail position provides the greatest insight into what a dog is feeling. 
### Concept
Understanding dog tail language will help pet lovers to better understand dogs that how they feel about particular interactions and to identify the happiness of the dog. This project aims to empower people to build a more loving, trusting, and fulfilling relationship with dogs.
### Sketch
<p align="center"><img width="600" height="600" src="https://git.arts.ac.uk/storage/user/502/files/20c66478-6731-481a-ba08-c05da16f59e4"></p>

### Interaction Script
The tail's movement is primarily driven by 4 servo motors attached to the tail. Our build features a remote control system attached to 2 handheld joysticks to allow you to directly manipulate the tail's motion when you want to control it manually. Also, to provide a more immersive experience for interactors, we plan to add an interactive dog to make the interaction more interesting.

<p align="center"><img width="1000" height="220" src="https://git.arts.ac.uk/storage/user/502/files/f81a1098-b644-4a95-b7fd-4412bf5c8525"></p>

### Possible Inputs
Ultrasonic: it is to control the sound ‘woof’

Pressure/Joystick: it is to control 4 modes of expression for the tail movement 

### Possible Outputs
Speaker: it is to sound ‘woof’ when ultrasonic detects people

MicroSD/DFPlayer mini: it is to upload audio file to speaker

Servo motor/DC Motor: it is to control the angle and movement of the tail

Display: it is to play caption/animation

LED stripe: it is to light with the ultrasonic sensor
### Tail components
<p align="center"><img width="1000" height="750" src="https://git.arts.ac.uk/storage/user/502/files/c01282fa-cac2-4430-aab7-3c7f9d035bb5"></p>

We listed all the components we may use.
<img width="1436" alt="截屏2022-11-28 12 38 44" src="https://git.arts.ac.uk/storage/user/502/files/3b30525a-b443-4a8d-b05f-a950d33258d4">

The picture below shows the final components we will use.
![black sketch component](https://git.arts.ac.uk/storage/user/502/files/8c007cbc-18de-4e8f-9b7a-2d3f7d446bae)

Tail aluminum tip - The part at the end of the tail.

Spinous process - The processes sit at the base of every part of every vertebra and is connected to the spinal cord in the middle of the tail. There are 22 processes in the tail model.

Upper spinal cord segment - For the upper spinal cord, we used a 1.5mm throttle cable.  

Lower spinal cord segment - For the lower spinal cord, we used a 1.5mm throttle cable to insert a flexible silicone tube 5/32"(4mm) ID x 1/4"(6mm) OD, and 4 3mm OD extension springs.

Base Plate - This plate has 4 holes to hold the extension springs, and one centre hole for the flexible silicone tube.

Servo holder - it holds the servo motors.

Pulley - Use a fishing line to connect between the pulley and the servo motor to make the tail move from side to side. 

Fishing line - 0.7mm fishing line made of monofilament



## Week7
### Goal for this week
The goal for this week is to prototype the tail, and test which inputs and outputs we can use for our project.
### Prototyping Process
We 3d printed segmented sections to build our tail giving it a stronger and more defined form. It had many issues with the 3D printing. Our base plate has a cambered surface, but the 3D printer had difficulty to print models with cambered surface, after a couple failed attempts, we redesigned the base plate model. Another issue was that the size of the holes for the vertebrae is smaller than we need, we don’t have enough time to reprint them, so we remade the holes with electric drill to fit the spinal cord.

<p align="center"><img width="900" src="https://git.arts.ac.uk/storage/user/502/files/7801b0ee-6113-4f27-9a64-21790163197a"></p>
<p align="center"><img width="900"src="https://git.arts.ac.uk/storage/user/502/files/29cc481f-1326-48a1-be16-28ad1279dc15"></p>
<p align="center"><img width="900" src="https://git.arts.ac.uk/storage/user/502/files/78c17b6d-28c1-45be-9a23-f895356dace2"></p>
<p align="center"><img width="900" src="https://git.arts.ac.uk/storage/user/502/files/019cecef-b41c-4d8e-bd1b-8f1d70b19b33"></p>


### Input 1: Ultrasonic
The ultrasonic sensor is to control the sound ‘woof’, when people standing in the interaction area, the ultrasonic sensor will trigger the speaker to ‘woof’.

![IMG_8709](https://git.arts.ac.uk/storage/user/502/files/9f713b3b-1b19-4a0b-a70e-62b2a9d84243)

### Input 2: Joystick *2
The joystick is to control 4 modes of the dog tail movement: left to right, up to down. 

### Output 1: Speaker
The speaker is to sound ‘woof’ when ultrasonic detects people.

### Output 2: DFPlayer
The DFPlayer is to store the .mp3 file, and play the audio file with the speaker.

### Output 3: LED Stripe
The LED stripe light in pink and blue mode.

### Output 4: Servo motor(HiTEC HS311) *4
The servo motor is to control the angle and movement of the tail.

We choose DC motors at the beginning, but after running some tests with DC motors, we found that DC motors can’t rotate different angles like servo motors. 
We tested with Tower Pro servo motors, but Tower Pro servo motors don’t have enough power to drive the tail. Since we 3d printed segmented sections to cover our tail, 
then we need to add stronger servos as well as additional or more powerful batteries to power them. We asked Matt for advice, he suggested us to try with HiTEC HS311 servo motors, 
which may control our tail properly. We need four motors to drive 4 fishing line to control the tail.

The picture below shows the circuit of 4 servo motors.
![IMG_8720](https://git.arts.ac.uk/storage/user/502/files/e10e8d6c-b450-45f3-beea-1ab062a941f5)


## Week8
### Goal for this week
This week, our goal is to run some tests with my final inputs and outputs and to solder the final circuit.
### Schematic
The picture below is a schematic of the motor circuit (4 HiTEC HS311 Servo motors + 2 joysticks). 
<img width="849" alt="截屏2022-12-01 17 12 41" src="https://git.arts.ac.uk/storage/user/502/files/f07d3314-5bea-4d4c-8fc2-56862eaee27a">

One issue we ran into was that the 9 voltage battery could not handle 4 servo motors, so we change it into power source, it went well.

#### Servo motor code
<img width="720" alt="截屏2022-12-01 17 41 18" src="https://git.arts.ac.uk/storage/user/502/files/d91e0848-cced-478a-9ddb-216978c8105c">

The picture below is a schematic of the audio circuit (MP3 + DFPlayer + speaker), the distance sensing circuit(ultrasonic sensor), and the LED stripe.

![schematic 2](https://git.arts.ac.uk/storage/user/502/files/84875917-1fce-4c44-a5f0-9cef34d73ea0)

For our purpose, we need to play the MP3 file while people standing in the specific area, but the problem is that once the ultrasonic sensor has been triggered the DFPayers starts to play in a loop. I found that’s because I keep telling to “play()” again, then I started the playing when it sees an echo off something less than 30cm away and stop when there’s no echo within 30cm.
#### Ultrasonic sensor code
<img width="751" alt="ultrasonic" src="https://git.arts.ac.uk/storage/user/502/files/d3b378d3-052e-4c6b-b34e-9e7c124f39ea">

### Soldering 
We were nervous about the soldering process, since we have never soldered before. We spent a ton of time on soldering. Before soldering, we tested our circuit on a breadboard, four servo motors work well together. However, when we soldered on the strip board, only two motors can move. We checked the wire on the strip board, and found a wire was loose. We soldered the circuit once again, it went well.

![IMG_8795](https://git.arts.ac.uk/storage/user/502/files/d02fcc68-0242-4e58-9279-7b79c02f07d2)



## Week9
### Goal for this week
This week, our goal is to assemble the components, and house the circuit.
### Putting it together
Our project is a wearable tail, we bought a cotton back support to assemble with the tail. However, we faced some issues, since the back support is made with cotton, 
which is not solid enough to hold the tail weight. To make the tail stable on the back support, we laser cut acrylic boards and used screws to set the arcrylic boards together with the back support, it went well finally.

![lasercut](https://git.arts.ac.uk/storage/user/502/files/a6817a18-d9a1-4b62-a5ec-ff0acaf934f4)

![IMG_8747](https://git.arts.ac.uk/storage/user/502/files/9b66bb0e-4699-4daf-a305-1146ed2545f8)

We tested the tail for several times, and found that the tail movement was stiff, and couldn’t achieve our purpose--four modes of movement. To make the tail move in a close-to-natural way, we add one more joystick, one is to control up to down movement, another is to control left to right movement.

![motor hitech](https://git.arts.ac.uk/storage/user/502/files/b67b360a-cd37-40cc-822d-fb6598220206)

### Circuit Housing 
To house the ultrasonic circuit, we made a transparent acrylic box and we also had the opportunity to 3D print a balloon dog for the ultrasonic trigger part. The picture below shows the ultrasonic part.
![IMG_8816](https://git.arts.ac.uk/storage/user/502/files/d4ed8f4a-7832-405f-968e-290ebb16763d)

### Outcome

<p align="center"><img width="1000" height="700" src="https://git.arts.ac.uk/storage/user/502/files/5055d686-25af-4f1c-91b5-9f3af26794c8"</p>

<p align="center"><img width="1000" height="600" src="https://git.arts.ac.uk/storage/user/502/files/a1ceef4b-f44e-44c3-bf6a-259bb1b0ccbb"</p>
<p align="center"><img width="1000" height="550" src="https://git.arts.ac.uk/storage/user/502/files/a78bae28-1443-40ac-b974-88fcdb241ca3"</p>



