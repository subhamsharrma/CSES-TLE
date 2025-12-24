#include <iostream>
#include <windows.h>
#include <string>

int main() {
    // Wildcard pattern: *resume*.pdf 
    // This finds files like "My_Resume.pdf", "resume_v2.pdf", or "2024-resume-final.pdf"
    std::string directory = "D:\\discourses\\*resume*.pdf";
    
    WIN32_FIND_DATAA findData;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    int resumeCount = 0;

    // Start searching for files matching the pattern
    hFind = FindFirstFileA(directory.c_str(), &findData);

    if (hFind == INVALID_HANDLE_VALUE) {
        DWORD error = GetLastError();
        if (error == ERROR_FILE_NOT_FOUND) {
            std::cout << "No PDFs with 'resume' in the name were found." << std::endl;
        } else {
            std::cerr << "Error accessing path. Error code: " << error << std::endl;
        }
        return 1;
    }

    std::cout << "List of Resume PDFs found:" << std::endl;
    std::cout << "---------------------------" << std::endl;

    do {
        // Exclude directories (though the extension filter usually handles this)
        if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            resumeCount++;
            std::cout << "[" << resumeCount << "] " << findData.cFileName << std::endl;
        }
    } while (FindNextFileA(hFind, &findData) != 0);

    FindClose(hFind);

    std::cout << "-------------------- -------" << std::endl;
    std::cout << "Total Resume PDFs: " << resumeCount << std::endl;

    return 0;
}