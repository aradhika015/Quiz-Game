#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *file;
struct score
{
char name[30]; 
int result;
};
struct score s;
int n, ans, count, right, wrong;
char ch, key;
printf("\n\t# Welcome to the QUIZ GAME #"); 

start:
printf("\n\n 1.Instructions 2. Start Quiz\n 3. Show Scoreboard\n\n");
scanf("%d", &n);
switch (n)
{
case 1:
printf("\n\nThis quiz consists of 10 questions.\nFor every right answer you are given with +1 points and for wrong answer you will get no points.\nNow you all ready to start the quiz. \nBEST OF LUCK FOR IT ");
printf("\n*****************");
goto start;
break;

case 2:
file = fopen("Quiz score.txt", "a"); 

// Opening file to store data
do
{
count = 0;
right = 0;
wrong = 0;
q1:
printf("\n[1] Who was the first President of India?\
\n (1) Pandit Nehru\n (2) Dr. Rajendra prasad\n (3) Rabindranath Tagore\n (4) Sarvepalli Radhakrishnan \n");
printf("\n\tYour Answer (1,2,3 or 4): ");

scanf("%d", &ans);
if (ans == 2)
{
printf("\n\tCorrect!\n");
right++; 

// Measuring number of correct answers
}
else if (ans == 1 || ans == 3 || ans == 4)
{
printf("\n\tWrong!\n\tRight answer: (2)\n");
wrong++; 

// Measuring number of incorrect answers
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q1;
}
count++; 

// Measuring number of questions
q2:
printf("\n[2] Which cricket player has highest runs in ODI Cricket 2019?\
\n (1) Virat Kohli\n (2) K. L. Rahul\n (3) Rohit Sharma\n (4) David Warner\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q2;
}
count++;
q3:
printf("\n[3] Which is the hottest planet in our solar system?\
\n (1) Venus\n (2) Mars\n (3) Mercury\n (4) Sun\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 1)
{
printf("\n\tCorrect!\n");
right++;
}

else if (ans == 2 || ans == 3 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q3;
}
count++;
q4:
printf("\n[4] Which is the longest river on Earth?\
\n (1) Ganga river\n (2) Nile river\n (3) Amazon river\n (4) None of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{
printf("\nCorrect!\n");
right++;
}
else if (ans == 1 || ans == 3 || ans == 4)
{
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q4;
}
count++;
q5:
printf("\n[5] What is the National Bird of India?\
\n (1) Parrot\n (2) Ostrich\n (3) Kingfisher\n (4) Peacock\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else

{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q5;
}
count++;
q6:
printf("\n[6] Who invented C programming language?\
\n (1) Charles Babbage\n (2) Grahambel\n (3) Steve Jobs\n (4) Dennis Ritchie\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q6;
}
count++;
q7:
printf("\n[7] Fill the proper preposition:\
\n\tNo, thanks. I was ....... the cinema yesterday.\
\n (1) under\n (2) into\n (3) at\n (4) to\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\n\tWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q7;
}
count++;
q8:
printf("\n[8] Name the atmospheric layer closest to the ground.\
\n (1) Troposphere\n (2) Mesosphere\n (3) Thermosphere\n (4) Stratosphere\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 1)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 4 || ans == 2 || ans == 3)
{
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q8;
}
count++;
q9:
printf("\n[9] Which is the National Game of England?\
\n (1) Baseball\n (2) Tennis\n (3) Cricket\n (4) Rugby Football");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{
printf("\nWrong!\nRight answer: (3)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q9;
}
count++;
q10:
printf("\n[10] What is the Capital of Maharashtra?\
\n (1) Pune\n (2) Mumbai\n (3) Nagpur\n (4) None of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 4 || ans == 3)
{
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q10;
}
count++;
printf("\n\tNumber of questions attempted: %d\n\tCorrect answers: %d\
\n\tWrong answers: %d",
count, right, wrong);
printf("\n\nEnter your name: ");
getchar();
fgets(s.name,29,stdin);
s.result = right;
fprintf(file, "%s %d\n", s.name, s.result);

// Storing name and score of user in file
printf("***************************************");
printf("\n\nReplay(y/n) ");
scanf("%c", &key);
} 
while (key == 'y');
fclose(file);
goto start;
case 3:
file = fopen("Quiz score.txt", "r"); 

// Opening file to read data


printf("\n\t# Scoreboard #\n");
while(fscanf(file, "%s %d", s.name, &s.result) != EOF)
printf(" Name: %s, Score: %d\n", s.name, s.result);
printf("***************************************");
fclose(file);
goto start;
return 0;
default:
printf("You entered invalid key");
}
}