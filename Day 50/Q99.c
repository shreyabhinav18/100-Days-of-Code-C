#include <stdio.h>

int main() {
    int day, month, year;

    // 1. Read the date in the specific format
    printf("Enter date (dd/mm/yyyy): ");
    // %d/%d/%d automatically extracts the numbers and skips the slashes
    scanf("%d/%d/%d", &day, &month, &year);

    // 2. Array storing the names of the months
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // 3. Validate the month (optional but good practice)
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    // 4. Print in the new format: dd-Mmm-yyyy
    // %02d ensures the day always has 2 digits (e.g., 4 becomes 04)
    // months[month - 1] gets the string (e.g., month 4 -> index 3 -> "Apr")
    // %04d ensures the year has 4 digits
    printf("Formatted Date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
