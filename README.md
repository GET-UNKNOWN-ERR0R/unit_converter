# Unit Converter

A simple unit converter written in C++ that can convert between various units such as length, weight, and temperature.

## Features

- **Length Conversion**: Convert between meters and kilometers.
- **Weight Conversion**: Convert between kilograms and pounds.
- **Temperature Conversion**: Convert between Celsius and Fahrenheit.

## Requirements

- Linux/Mac/Windows (with WSL for Windows)
- C++ compiler (g++)
- Internet connection for fetching dependencies (if any)

## Usage

### Running with `run.sh`

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/GET-UNKNOWN-ERR0R/unit_converter.git
    cd unit_converter
    ```

2. **Make the `run.sh` script executable**:

    ```sh
    chmod +x run.sh
    ```

3. **Run the Program Using `run.sh`**:

    ```sh
    ./run.sh
    ```

    The script will compile the C++ code and execute the program. Follow the on-screen menu to perform unit conversions.

### Running Manually

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/GET-UNKNOWN-ERR0R/unit_converter.git
    cd unit_converter
    ```

2. **Compile the Code**:

    If you have a C++ compiler (`g++`) installed, you can manually compile the code with:

    ```sh
    g++ -o unit_converter src/main.cpp
    ```

3. **Run the Program**:

    Once compiled, run the program with:

    ```sh
    ./unit_converter
    ```

4. **Choose a Conversion**:

    After running the program, you can choose the type of conversion (length, weight, or temperature) by selecting the corresponding option from the menu.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
