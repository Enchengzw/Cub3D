# Cub3D: My First RayCaster with miniLibX

## **About this project**
`cub3D` is a 3D graphical project inspired by the legendary **Wolfenstein 3D**, the first FPS game. 
This project focuses on implementing raycasting to render a 3D perspective inside a maze and is a fun exploration of C programming and mathematical applications.

## **Allowed Functions**
- **Standard Library Functions:** 
  - `open`, `close`, `read`, `write`
  - `printf`, `malloc`, `free`
  - `perror`, `strerror`, `exit`
  - `gettimeofday`
- **Math Library:** All functions from `math.h` (`-lm`).
- **Graphics Library:** All functions from `MiniLibX` or from `MLX42`.


## **Features**
- **Raycasting:** Render a 3D maze view from a 2D map using raycasting principles.
- **Textures and Colors:** 
  - Assign unique textures for walls facing different directions (North, South, East, West).
  - Set distinct colors for the floor and ceiling.
- **Player Movement:** 
  - Use `W`, `A`, `S`, `D` to navigate the maze.
  - Use left/right arrow keys to look around.
- **User Interaction:**
  - Exit the program with `ESC` key or by clicking the window's close button.
- **Error Handling:** Detect and report invalid configurations or map files.

## **File Format**
The program accepts a `.cub` file describing the scene. Example:

```plaintext
NO ./path_to_north_texture
SO ./path_to_south_texture
WE ./path_to_west_texture
EA ./path_to_east_texture
F 220,100,0
C 225,30,0

1111111111111111111111111
1000000000110000000000001
1011000001110000000000001
1001000000000000000000001
1111111110110000011100001
1000000000110000011101111
1100000011010101110000001
1000000000000000110000001
1111011111111101111101111
1111111111111111111111111
