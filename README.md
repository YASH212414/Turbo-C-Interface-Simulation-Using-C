# Turbo-C-Interface-Simulation-Using-C

Description:
This project is a demonstration of system programming concepts implemented in C, where a graphical user interface simulates the Turbo C++ environment. The application utilizes text-based graphics to create a menu-driven interface that enables user interaction similar to the original Turbo C++ IDE.

Platform - turbo c++

/// Project Note ///

For this project, I wrote the code in C but saved the files with a .cpp extension, which is typically associated with C++ in Turbo C++. This was done to take advantage of Turbo C++'s enhanced user interface, editor features, and debugging tools, while still utilizing the C programming language. This approach improved the overall development experience and increased efficiency without altering the core functionality of the C code.


ASCII Values and Key Bindings

In this project, I have utilized specific ASCII values corresponding to keyboard keys for various functionalities. Below is a list of the key bindings and their respective ASCII values:

Escape: 27

Up Arrow: 72

Down Arrow: 80

Right Arrow: 77

Left Arrow: 75

Alt + F: 33 (File window)

Alt + E: 18 (Edit window)

Alt + S: 31 (Search window)

Alt + R: 19 (Run window)

Alt + C: 46 (Compile)

Alt + D: 32 (Debug)

Alt + P: 25 (Project)

Alt + O: 24 (Options)

Alt + W: 17 (Windows)

Alt + H: 35 (Help)


These values were determined through a custom scanf code, which I wrote myself. This code captures the ASCII values of specific key combinations and can be found in the code folder of this project, saved under the file name scanf.c.

To trigger the corresponding windows, press the following key combinations:

File Window: Alt + F

Edit Window: Alt + E

Search Window: Alt + S

Run Window: Alt + R

Compile: Alt + C

Debug: Alt + D

Project: Alt + P

Options: Alt + O

Windows: Alt + W

Help: Alt + H


This implementation allows for efficient navigation and interaction within the program, improving user experience and functionality.


Key Features:

Menu Navigation: The program includes a horizontal menu bar with options such as "File," "Edit," "Search," and more. Users can navigate through these options using arrow keys, highlighting the selected item dynamically.

Functional Submenus: Upon selecting the "File" option, a submenu appears, offering functionalities like "New," "Save," and "Quit." The program allows further navigation within these submenus, enhancing user experience.

Visual Elements: The interface utilizes various text colors and backgrounds to distinguish between active and inactive menu items, providing clear visual feedback.

Interactive User Input: Users can enter their choices via keyboard input, facilitating an interactive session where selections and commands are processed in real-time.

Window Management: The application effectively manages different windows for the main menu, submenus, and informational displays, demonstrating concepts of window handling and layout design in console applications.

This project not only reinforces the principles of system programming but also illustrates the practical application of C in creating user interfaces. It serves as an excellent portfolio piece for showcasing programming skills and understanding of user interaction within a system-level context.
