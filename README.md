# Mac-Generator
[![CodeFactor](https://www.codefactor.io/repository/github/s3tra/mac-generator/badge)](https://www.codefactor.io/repository/github/s3tra/mac-generator)

A simple C++ utility for generating and setting a valid MAC address on Linux systems. The first two characters of the generated MAC address are ensured to be even for validity. This tool is tested on **Arch Linux**.

## Features
- Generates a random, valid MAC address.
- Sets the generated MAC address on your network interface.
- Ensures compliance with MAC address validity rules.
- Built for Linux, tested on **Arch Linux**.

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/Mac-Generator.git
   cd Mac-Generator
   ```

2. Build and install using `makepkg`:
   ```sh
   makepkg -si
   ```

## Usage

Run the program with root privileges:
```sh
sudo mac-generator
```

## Requirements
- Linux system (tested on Arch Linux)
- C++ compiler
- `makepkg` (for Arch-based distributions)

---

### Notes
- The tool modifies the MAC address of your network interface. Make sure you understand the implications before using it.
- You may need to restart your network service for changes to take effect.
