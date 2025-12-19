#include <iostream>
#include <string>

// ANSI color codes for terminal output
#define RESET "\033[0m"
#define BLACK_BG "\033[40m"
#define BRIGHT_BLUE "\033[94m"
#define BRIGHT_CYAN "\033[96m"

void displayBlueOSLogo() {
    // Clear screen
    system("clear || cls");
    
    // Set black background and bright blue text
    std::cout << BLACK_BG << BRIGHT_BLUE;
    
    // ASCII art for computer/BlueOS logo
    std::string logo = R"(
    ╔════════════════════════════════════════╗
    ║                                        ║
    ║         ███████╗██╗     ██╗   ██╗███████╗╗
    ║         ██╔════╝██║     ██║   ██║██╔════╝║
    ║         █████╗  ██║     ██║   ██║█████╗  ║
    ║         ██╔══╝  ██║     ██║   ██║██╔══╝  ║
    ║         ██║     ███████╗╚██████╔╝███████╗║
    ║         ╚═╝     ╚══════╝ ╚═════╝ ╚══════╝║
    ║                                        ║
    ║              ╔═════════════╗           ║
    ║              ║ ╔═════════╗ ║           ║
    ║              ║ ║ BlueOS  ║ ║           ║
    ║              ║ ║ v1.0.0  ║ ║           ║
    ║              ║ ╚═════════╝ ║           ║
    ║              ║             ║           ║
    ║              ║ ┌─────────┐ ║           ║
    ║              ║ │ Console │ ║           ║
    ║              ║ └─────────┘ ║           ║
    ║              ╚═════════════╝           ║
    ║                                        ║
    ║          Advanced Operating System    ║
    ║              by BlueCode               ║
    ║                                        ║
    ╚════════════════════════════════════════╝
    )";
    
    std::cout << logo << std::endl;
    
    // Display system information
    std::cout << BRIGHT_CYAN << "\n  System Information:" << RESET << std::endl;
    std::cout << BLACK_BG << BRIGHT_BLUE << "  • Operating System: BlueOS" << RESET << std::endl;
    std::cout << BLACK_BG << BRIGHT_BLUE << "  • Version: 1.0.0" << RESET << std::endl;
    std::cout << BLACK_BG << BRIGHT_BLUE << "  • Build: Advanced Computing Platform" << RESET << std::endl;
    std::cout << BLACK_BG << BRIGHT_BLUE << "  • Status: Ready for Operation" << RESET << std::endl;
    
    // Reset formatting
    std::cout << RESET << std::endl;
}

int main() {
    // Ensure UTF-8 support for special characters
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif
    
    displayBlueOSLogo();
    
    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.get();
    
    return 0;
}
