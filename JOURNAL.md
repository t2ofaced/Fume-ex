---
title: "Fume-ex"
author: "t2ofaced"
description: "A fume extractor that can be controlled from phone"
created_at: "2026-10-05"
---

# October 05: Planning and schematic

I am making a smart fume extractor it is smart because i can control it with my phone is that really useful? Not really but atleast it is smart.

So here is the plan

![image](https://twisted.hackclub-assets.com/563edc7f-b61f-4675-9d24-29c78954f484-400501/image.png)

I think i need filter, a case, a 12V fan and a final pcb

After some research i made this plan

![image](https://twisted.hackclub-assets.com/f82e550e-c544-4758-a1cc-1a948e274d93-18937/image.png)

This is our 12V main input to 5V converter

![image](https://twisted.hackclub-assets.com/63e935c2-76c7-4d13-b3cb-521880027cc3-7241/image.png)

This is the 3.3V LDO because the ESP 12E needs 3.3V. And yes we are using an ESP since we want a smart fume extractor not a ordinary one

![image](https://twisted.hackclub-assets.com/95244ae2-233b-4c2c-856c-8f0ed275ec2b-26383/image.png)

Here is our brain the ESP 12E

![image](https://twisted.hackclub-assets.com/a3b5f6ff-8637-4c60-9749-cecc48c3827b-52747/image.png)

And this is the complete schematic it is unorganised right now, hehe i will clean it up later.

**Total time spent: 2 hours 47 minutes**

# October 18: PCB layout and starting the case

I added footprints for all the components, i mostlyy used 0805 for the capacitors and resistors as they are easier to solder by hand and i have zer0 soldering experince

![image](https://twisted.hackclub-assets.com/d1f0e2e4-7a9f-4e02-bf55-91a9b5bad1ff-1093864/image.png)

Initial component placement

![image](https://twisted.hackclub-assets.com/6f85dcf0-f5a1-4a7d-98df-92fbd75bb4e6-557620/image.png)

![image](https://twisted.hackclub-assets.com/e89653c2-99c3-45b1-a7a9-69b5d34e28c8-104970/image.png)

![image](https://twisted.hackclub-assets.com/64672260-4df0-4833-bb25-8abec67f0076-93018/image.png)

![image](https://twisted.hackclub-assets.com/2cfffea3-b05f-4dfb-b31a-09a2e2b2237d-398890/image.png)

![image](https://twisted.hackclub-assets.com/b5124a1f-0dbf-4d3e-9fed-296aad39a39a-204807/image.png)

![image](https://twisted.hackclub-assets.com/c9924c68-1f36-4595-b637-dd4a1c6ffaf7-260598/image.png)

Final  component placement and the routed PCB, i also added vias because the top and bottom layers are poured with the GND net and by placing vias these two layer connect together and make a better returning path

![image](https://twisted.hackclub-assets.com/835c1de9-cb42-4e6b-aaa5-9df5f2b7ec51-123769/image.png)

Top side of the PCB in my project this is going to be the bottom side

![image](https://twisted.hackclub-assets.com/98ac76d8-f4f1-40fc-878b-5cd4e2db139a-71203/image.png)

Bottom side of the PCB in my project this is going to be the top side like this is the side user will see

Then i exported the 3D model of the PCB and the gerber files 

![image](https://twisted.hackclub-assets.com/42b61508-3172-4258-9a04-a7da4a9a72f4-195621/image.png)

After that i uploaded the 3D file of my PCB to onshape and started working on the case 

![image](https://twisted.hackclub-assets.com/5ff07cbb-8339-4075-883e-3860c88c8030-195621/image.png)

![image](https://twisted.hackclub-assets.com/d131518d-704e-4dae-9e9d-65e54e812220-320296/image.png)

![image](https://twisted.hackclub-assets.com/bc10769e-6542-4fc0-806d-a793761b6cfe-516754/image.png)

![image](https://twisted.hackclub-assets.com/4efef3c1-4438-4470-b8d7-ec13ad497fff-281142/image.png)

![image](https://twisted.hackclub-assets.com/0dda2360-ee46-4350-a37f-678d6d5af8fc-324730/image.png)

The case is not finished yet i will be working on it next session

**Total time spent: 6 hours 57 minutes**

# October 27: Finished the case and uploaded to GitHub

<img width="701" height="683" alt="image" src="https://github.com/user-attachments/assets/f1254b1b-52da-46e8-bf2f-81775882e106" />

![image](https://twisted.hackclub-assets.com/50deae6c-82d4-4894-83e7-088d44267a34-334032/image.png)

i polished the 3D model and made the grills for the incoming and outgoing air 

![image](https://twisted.hackclub-assets.com/4f345d5a-0b89-4cf2-a249-f304020a0a62-240575/image.png)

then i imported the models into Slicer to make sure they are printable and they are printable

after that i uploaded all the files to the gitHub

![image](https://twisted.hackclub-assets.com/6eead736-8d7c-4b60-84b8-fff2ae933d03-96227/image.png)

**Total time spent: 4 hours 8 minutes**

