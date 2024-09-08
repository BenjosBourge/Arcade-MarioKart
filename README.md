--Mario Kart - School Project--


This is a school project initially developed on Linux, featuring a Mario Kart-inspired game. It was part of a larger framework where multiple games, each created by a different student, could be dynamically loaded via shared libraries. However, for this version, I’ve stripped it down to only include my game (Mario Kart) and ported it to Windows.

The original project had a multiplayer mode, but this version is single-player.
Due to project restrictions, the game was built using a limited number of pixels, colors, and libraries for rendering.
While it's not true 3D, I'm proud of the rendering technique I implemented during my studies.

I chose to keep this project as a memento of my school days. While it’s not a perfect replication of Mario Kart and far from polished, I enjoyed working on the pseudo-3D effect, so I preserved the code largely as it was, aside from porting to Windows and removing multiplayer.

The code is well, a bit messy. I haven’t cleaned it up, so feel free to explore it at your own risk!


Controls:
- Accelerate: Z
- Brake: I
- Steer: Q and D
- Use item: O

The Doc was made by the students.

Special thanks to Xavier Mitault for the cmake improvements !

## Build

### Linux

- ArchLinux Requirements: `openal` `cmake` `make` `g++`

```bash
mkdir build
cd build
cmake ..
make
```
