#include <stdio.h>

int main() {
    printf("Available schools:\n1. School of business\n2. School of engineering\n3. School of humanities\n");
    printf("Enter your choice: ");

    int school;
    scanf("%d", &school);

    switch (school) {
        case 1:
            printf("1. School of business\n");
            printf("Available departments:\n1. BBA\n2. Marketing\n3. Finance\n");
            printf("Enter your department: ");

            int dept1;
            scanf("%d", &dept1);

            switch (dept1) {
                case 1:
                    printf("For BBA:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                case 2:
                    printf("For Marketing:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                case 3:
                    printf("For Finance:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
                    break;
            }
            break;

        case 2:
            printf("2. School of engineering\n");
            printf("Available departments:\n1. EEE\n2. CSE\n3. Civil\n");
            printf("Enter your department: ");

            int dept2;
            scanf("%d", &dept2);

            switch (dept2) {
                case 1:
                    printf("For EEE:\nCGPA: 5; Group: science\n");
                    break;
                case 2:
                    printf("For CSE:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                case 3:
                    printf("For Civil:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
                    break;
            }
            break;

        case 3:
            printf("3. School of humanities\n");
            printf("Available departments:\n1. BBA\n2. Marketing\n3. Finance\n");
            printf("Enter your department: ");

            int dept3;
            scanf("%d", &dept3);

            switch (dept3) {
                case 1:
                    printf("For BBA:\nCGPA: 4.8; Group: science/commerce/arts\n");
                    break;
                case 2:
                    printf("For Marketing:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                case 3:
                    printf("For Finance:\nCGPA: 4.8; Group: science/commerce\n");
                    break;
                default:
                    printf("Invalid department choice.\n");
                    break;
            }
            break;

        default:
            printf("Invalid school choice.\n");
            break;
    }

    return 0;
}
