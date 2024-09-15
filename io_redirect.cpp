#include <iostream>
#include <fcntl.h>
#include <unistd.h>

int main() {
    std::cout << "Before redirect" << std::endl;
    int saved_stdout = dup(STDOUT_FILENO);

    int my_file_fd = open("example.txt", O_RDWR | O_CREAT, 0644);
    if (my_file_fd == -1) {
        perror("open");
        return 1;
    }
    
    dup2(my_file_fd, STDOUT_FILENO);

    std::cout << "text";
    std::cout.flush();

    dup2(saved_stdout, STDOUT_FILENO);
    close(saved_stdout);
    close(my_file_fd);

    std::cout << "After redirect" << std::endl;

    return 0;
}