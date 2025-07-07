#include <stdio.h>
#include <unistd.h> // Thý vi?n s? d?ng hàm usleep

int main() {
    int i;
    
    for(i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("  ***    ***  \n");
            printf("  ***    ***  \n");
            printf("   ***  ***   \n");
            printf("    *****     \n");
            usleep(500000); // D?ng chýõng tr?nh trong 0.5 giây
            system("clear"); // Xóa màn h?nh (ch? ho?t ð?ng trên Unix/Linux)
        } else {
            printf("    ***  ***  \n");
            printf("   ***    *** \n");
            printf("  ***      ***\n");
            printf("   ***    *** \n");
            usleep(500000); // D?ng chýõng tr?nh trong 0.5 giây
            system("clear"); // Xóa màn h?nh (ch? ho?t ð?ng trên Unix/Linux)
        }
           printf("\n") ;

    }
 
    return 0;
}
