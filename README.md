## Requirements

To compile and run the code, you need to have the GCC compiler installed on your system.

### Installing GCC

- **Windows:**  
  Download and install [MinGW](http://www.mingw.org/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/).  
  After installation, make sure to add the GCC `bin` folder to your system PATH.

- **Linux (Debian/Ubuntu):**  
  Open the terminal and run:  
  ```bash
  sudo apt update
  sudo apt install build-essential

- **macOS:**
  Install the Xcode Command Line Tools:
  ```bash
  xcode-select --install

- **How to compile**
  In the terminal, navigate to the folder where your .c files are located.
  Run the command below to compile a file, replacing filename.c with the desired file name:
  ```bash
  gcc filename.c -o program_name

 - **For example, to compile weighted_mean.c:**
```bash
  gcc weighted_mean.c -o weighted_mean
```

- **How to run**
  After compiling, execute the program in terminal:

  On Linux/macOS:
  ```bash
  ./program_name


