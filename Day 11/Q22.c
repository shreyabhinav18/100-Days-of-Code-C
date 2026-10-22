#include <stdio.h>

int main() {
    float cp, sp, profit, loss, profitPercent, lossPercent;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        profitPercent = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", profitPercent);
    }
    else if (cp > sp) {
        loss = cp - sp;
        lossPercent = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", lossPercent);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
