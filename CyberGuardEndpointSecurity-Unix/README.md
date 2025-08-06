# CyberGuard Endpoint Security

## Overview
CyberGuard Endpoint Security is a comprehensive security solution designed to protect systems from various threats, including viruses, unauthorized access, and intrusions. This project includes modules for antivirus protection, firewall management, and intrusion detection.

## Project Structure
The project is organized into several directories, each serving a specific purpose:

- **include/**: Contains header files that declare functions and data structures for each module.
- **lib/**: Contains compiled libraries for the antivirus, firewall, IDS, and utility functions.
- **src/**: Contains the source code for each module, including the main application entry point.
- **build/**: Contains build instructions and files for compiling the project.
- **resources/**: Contains resources such as icons and images used in the application.

## Modules
1. **Antivirus Module**: Provides functionality to detect and remove malware.
   - Header: `include/antivirus.h`
   - Source: `src/antivirus.c`
   - Library: `lib/antivirus.a`

2. **Firewall Module**: Manages network traffic and protects against unauthorized access.
   - Header: `include/firewall.h`
   - Source: `src/firewall.c`
   - Library: `lib/firewall.a`

3. **Intrusion Detection System (IDS) Module**: Monitors network traffic for suspicious activity.
   - Header: `include/ids.h`
   - Source: `src/ids.c`
   - Library: `lib/ids.a`

4. **Utility Functions**: Provides common functions used across modules.
   - Header: `include/utils.h`
   - Source: `src/utils.c`
   - Library: `lib/utils.a`

5. **Unix-Specific Utilities**: Contains functions specific to Unix-based systems.
   - Header: `include/unix_utils.h`
   - Source: `src/unix_utils.c`

## Build Instructions
To build the project, navigate to the `build/` directory and use the provided Makefile. The Makefile contains instructions for compiling the source code and linking the necessary libraries.

## Resources
The `resources/icons/images/` directory contains string resources for icons used in the application, stored in `strings.txt`.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.