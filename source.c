#include <stdio.h>
#include <windows.h>


// MATH PROGRAM, asks one math problem
// if the user solves it, user gets asked next question
// in the end, the result of the test is printed to the user

void exitMessage(void) {
	printf("\n\n\t\tThank you for participating in this survey.");
	Sleep(1000);
	printf("\n\t\t    You can now safely exit this program.");
}

int main() {
	
	int num1 = 10;
	int num2 = 20;
	int num3 = 15;
	int num4 = 30;
	int ans1;
	int ans2;
	int score = 0;

	printf("\nTell me, what is %d + %d?\n", num1, num2);
	scanf("%d", &ans1);
	Sleep(700);
	if (ans1 == (num1 + num2)){
		printf("\nAnswer has been registered.\n\n\n");
		score++;
	} else {
		printf("\nAnswer has been registered.\n\n\n");
	}
	
	
	printf("\nTell me, what is %d + %d?\n", num3, num4);
	scanf("%d", &ans2);
	Sleep(700);
	if (ans2 == (num3 + num4)){
		printf("\nAnswer has been registered.\n\n\n");
		score++;
	} else {
		printf("\nAnswer has been registered.\n\n\n");
	}

	printf("\n\n\nAre you ready to see your score on this exam?\n");
	Sleep(700);
	printf("\nScore is being calculated...\n");
	Sleep(700);
	printf("\nScore has been successfully calculated.\n");
	Sleep(700);
	printf("Printing score...\n\n");
	Sleep(700);
	printf("%d/2", score);

	Sleep(1500);

	if (score == 1)
		printf("\n\nGood enough.\n");
	if (score == 2)
		printf("\n\nGood work!\n");
	if (score == 0)
		printf("\n\nYou need to practice mathematics.\n");

	Sleep(700); 
	// Declarations of variables
	int ans3;
	int ans4;
	int nextScore = 0;
	int ans5;

	printf("\n\nEnter 1, if you wish to answer two extra exam questions.\n");
	printf("Else, just close this windows now.\n");
	scanf("%d", &ans3);
	Sleep(700);
	if (ans3 == 1) {
		printf("I understand you wish to answer the two extra questions, interesting.\n");
	} else
		exitMessage();
	
	if (ans3 == 1) {
		Sleep(800);
		printf("Question 1 of 2, will now be displayed.\n");
		Sleep(800);
		printf("What is %d/%d? (integer data type)\n", num1, num3);
		scanf("%d", &ans4);
		if (ans4 == (num1 / num3)) {
			Sleep(800);
			printf("Answer registered.\n");
			nextScore++;
		} else {
			Sleep(800);
			printf("Answer registered.\n");
		}
		Sleep(800);
		printf("Question 2 of 2, will now be displayed.\n");
		Sleep(800);
		printf("What is %d*%d?\n", num2, num4);
		scanf("%d", &ans5);
		if (ans5 == (num2 * num4)) {
			Sleep(800);
			printf("Answer registered.\n");
			nextScore++;
		} else {
			Sleep(800);
			printf("Answer registered.\n");
		}
		Sleep(800);
		if (nextScore == 2) {
			Sleep(800);
			printf("Good job!\n");
		}
		if (nextScore == 1) {
			Sleep(800);
			printf("Good enough.\n");
		}
		if (nextScore == 0) {
			Sleep(800);
			printf("You need to practice mathematics.\n");
		}
		Sleep(1600);
		exitMessage();
	}



	return(0);

}
