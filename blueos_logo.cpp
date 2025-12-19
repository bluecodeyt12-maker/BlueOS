#include <iostream>
#include <string>

// ANSI color codes
#define BLUE "\033[94m"      // Strong blue color
#define BLACK "\033[40m"     // Black background
#define WHITE "\033[97m"     // White text for contrast
#define RESET "\033[0m"      // Reset to default

void displayBlueOSLogo() {
    // Set background to black
    std::cout << BLACK;
    std::cout << std::string(80, ' ') << std::endl; // Clear line
    
    // BlueOS ASCII Art Logo with Computer
    std::cout << BLUE << BLACK << R"(
    ███████╗ ██████╗  █████╗ ███████╗
    ██╔══██╗██╔════╝ ██╔══██╗██╔════╝
    ███████╔╝██║  ███╗███████║█████╗  
    ██╔══██║██║   ██║██╔══██║██╔══╝  
    ██║  ██║╚██████╔╝██║  ██║███████╗
    ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝
                                      
              WELCOME TO BlueOS      
                                      
        ┌─────────────────────────┐   
        │   ╔════════════════╗    │   
        │   ║ ┏━━━━━━━━━━━┓ ║    │   
        │   ║ ┃ BlueOS    ┃ ║    │   
        │   ║ ┃ System    ┃ ║    │   
        │   ║ ┗━━━━━━━━━━━┛ ║    │   
        │   ╚════════════════╝    │   
        │                         │   
        │  ⚙  Processing...  ⚙   │   
        │                         │   
        └─────────────────────────┘   
                                      
           ◇ ◆ ◇ ◆ ◇ ◆ ◇ ◆ ◇ ◆      
                                      
    Advanced Operating System Core    
)" << RESET;

    std::cout << BLACK << std::string(80, ' ') << RESET << std::endl;
}

void displaySystemInfo() {
    std::cout << BLUE << BLACK;
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║         BlueOS System Information      ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
    std::cout << WHITE << BLACK;
    std::cout << "✓ System Status: ONLINE\n";
    std::cout << "✓ Color Mode: Blue Theme (ANSI)\n";
    std::cout << "✓ Background: Black\n";
    std::cout << "✓ Version: 1.0.0\n";
    std::cout << RESET << std::endl;
}

int main() {
    // Clear screen (works on Linux/Mac, limited support on Windows)
    system("clear || cls");
    
    // Display the BlueOS logo
    displayBlueOSLogo();
    
    // Display system information
    displaySystemInfo();
    
    std::cout << BLUE << "\n[BlueOS] Ready for input..." << RESET << std::endl;
    
    return 0;
}
