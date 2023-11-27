# Game-15

## Overview

The 8-Puzzle Game, also known as Game 15, is a classic sliding puzzle that challenges players to rearrange numbered tiles in a 3x3 grid to reach a target configuration. This C++ application allows you to play and solve the 8-Puzzle, providing a simple interface for moves and displaying the current and winning configurations.

## Features

- Interactive gameplay for solving the 8-Puzzle.
- Winning conditions displayed.
- Current situation shown during the game.
- Valid move checks and error messages for an interactive experience.

## Getting Started

### Prerequisites

Make sure you have a C++ compiler installed on your system.



### Clone the Repository

```bash
git clone https://github.com/your-username/8-Puzzle-Game.git
```

## Run the Application

1. Open the solution in your preferred C++ development environment.
2. Build and run the application.
3. Follow the prompts to make valid moves and solve the puzzle.

## Gameplay

- To make a move, enter the number adjacent to the empty space.
- Follow the prompts to continue making moves until you reach the winning configuration.

  **Initial Configuration:**
   <table>
  <tr>
    <td>8</td>
    <td>7</td>
    <td>6</td>
  </tr>
  <tr>
    <td>5</td>
    <td>4</td>
    <td>3</td>
  </tr>
  <tr>
    <td>2</td>
    <td>1</td>
    <td>_</td>
  </tr>
</table>
  
  **Target Configuration:**
  <table>
  <tr>
    <td>1</td>
    <td>2</td>
    <td>3</td>
  </tr>
  <tr>
    <td>4</td>
    <td>5</td>
    <td>6</td>
  </tr>
  <tr>
    <td>7</td>
    <td>8</td>
    <td>_</td>
  </tr>
</table>


  **Moves:**
  - Slide tile '3' to the empty space by pressing 3.
  
<table>
  <tr>
    <td>8</td>
    <td>7</td>
    <td>6</td>
  </tr>
  <tr>
    <td>5</td>
    <td>4</td>
    <td>_</td>
  </tr>
  <tr>
    <td>2</td>
    <td>1</td>
    <td>3</td>
  </tr>
</table>



## Implementation Details

### Draw Functions:

- **draw_W:** Displays the winning condition.
- **draw_C:** Displays the current situation.

### Move Function:

- **badhao_aage:** Handles user moves, checks validity, and updates the board.

## Notes

- The winning condition is displayed at the beginning.
- Enter the adjacent number to the empty space to make a valid move.

Feel free to explore, enhance, or modify the application to suit your preferences.

Happy gaming!

