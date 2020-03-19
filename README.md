Red Box Maze Project
===

Goal of the Project
---

The goal of this project is to make a robot find its path from start till end 
through the puzzled like maze environment which is formed using static elements. The robot in
this project also makes use of range sensor to get to finish line.

Key Challenges and how overcomed
---

The major challenge which I faced was motion control. My robot had issues finding its path
whenever there was a obstacle in it's way. This was overcomed after our professor updated
by adding a new method to Multi-agent/multi-user envionment called enviro.

How to Install the Images and Code in Docker Environment
---

Images are stateless set of files in filesystem. After you have installed Docker platform you can follow the below steps for installing the code to your desktop locally and running it from there

- you can open your command prompt and navigate to respective location where you
want to save and type the following: 

```bash
git clone https://github.com/Pranal002/EEP520-Project.git
```

- after you've completed this, open your Docker quickstart terminal toolbox and perform the following 
to download and pull the respective images for our enviro platform:

```bash
docker run -p80:80 -p8765:8765 -v /c/Users/You/Code/enviro:/source -it klavins/enviro:v1.6 bash
```

How to Run/Use this Red Box Maze Project
---

Now that we have our images downloaded, follow the below steps after completing the above mentioned in the above section.

- In order to set the enviro platform, type and enter : 

```bash
esm start
```

- Now if you go to your local host "http://192.168.99.100/" you will be able to see a gray box
- So after this, change your directory to where you've downloaded from command prompt and enter : 

```bash
esm init
```

- Finally, you can compile the enviro server as follows:

```bash
make
enviro
```

**Note:** Even after compiling, if you don't see the robot moving through the maze, then it means that the agent in the config json file is not present. To avoid this, just copy them from where you downloaded in Github (https://github.com/Pranal002/EEP520-Project.git). 

- As an informational message you would get a notification telling that its listening to the port. At this time, refresh your local host site and you'll be able to see a robot finding its end point through the red colored maze !!

Acknowedgement for all sources used
---

The major Acknowedgement for this Project is Prof. Eric Klavins Enviro platform. This platform acts as a multi-agent, multi-user, and etc simulator. Enviro server has various methods such as motion control for omni directional agent, oriented agents, sensors, collisions and etc. All the techniques and methods used in enviro was detailedly described to us during our regular class sessions every week, thus resulting in working with our project.

**Note:** Since I'm familiar with only Windows, the above described steps to install/run/use the project is for windows users only. Thanks !!