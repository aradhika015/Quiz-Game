#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{system("color 90");
FILE *file;
struct score
{
char name[30];
int result;
};
struct score s;
int n, ans, count, right, wrong;
char ch, key;
printf("\n\n");
printf("\t\t\t\t\t\t\t\t\t                    T     |      |   Y      T  \n");
printf("\t\t\t\t\t\t\t\t\t                    |        <0>   __|      |\n");
printf("\t\t\t\t\t\t\t\t\t                    |             /         |\n\n\n");
printf("\t\t\t\t\t\t\t\t# ____________________ Welcome to the KUIZ GAME __________________  #\n\n\a");
printf("\n\t\t\t\t\t\t\t\t\t\t\t      GAIN THE KNOWLEDGE  XD \n\n\t\t \t\t\t\t\t\t\t\t\t      BE A QUIZ MASTER...!!!!!\n\a");
start:
printf("\n\n 1.Instructions \n\a 2. Start Quiz\n\a 3. Show Scoreboard\n\n\a");
scanf("%d", &n);
switch(n)
{
    case 1:
        Beep(900,600);
        Sleep(100);
printf("\n\n* Here are some tips you might wanna know before playing .\n\a");
printf("* This quiz consists of 16 challenging questions. \n* For every right answer you are given with +1 points and for wrong answer you will get no points.\n");
printf("* There will be 4 options available to you.\n");
printf("* No negative marking for wrong answers.\n");
printf("* Now you all ready to start the quiz. \n\n\n                  (:(:(:___BEST OF LUCK _____:):):) \n\n");
printf("\t\t\t           (> o < )");
goto start;
break;

case 2:
    Beep(900,600);
    Sleep(100);
file = fopen("Quiz score.txt", "a");

// Opening file to store data
do
{
count = 0;
right = 0;
wrong = 0;
q1:
printf("\n[1] The probability of an event is 3/7. Then odd against the event is?\
\n (1) 4:3\n (2) 7:3\n (3) 3:7\n (4) 3:4\n");
printf("\n\tYour Answer (1,2,3 or 4): ");

scanf("%d", &ans);
if (ans == 1)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\t|\n-----------Correct!----------|\t\n");
right++;

// Measuring number of correct answers
}
else if (ans == 2 || ans == 3 || ans == 4)
{system("color C0");
    Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\n\tRight answer: (1)\n");
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
printf("\n[2] If one card is drawn out of 52 playing cards,the probability that it is a card of heart is?\
\n (1) 1/26\n (2) 1/13\n (3) 1/52\n (4) 1/4\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 3 || ans == 4)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q2;
}
count++;
q3:
printf("\n[3] The radius of a circle is increasing at the rate of 0.4cm/s. the rate of increasing of its circumference is?\
\n (1) 0.4*3.14cm/s\n (2) 0.8*3.14cm/s\n (3) 0.8*3.14cm/s\n (4) none of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}

else if (ans == 1 || ans == 3 || ans == 4)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q3;
}
count++;
q4:
printf("\n[4] What will happen if a p-n junction is reverse biased?\
\n (1) no current flows\n (2) no depletion region is increased\n (3) depletion layer is reduced\n (4) the height of potential barrier is reduced\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\nCorrect!\n");
right++;
}
else if (ans == 1 || ans == 3 || ans == 4)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
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
printf("\n[5] What is a transistor made up of?\
\n (1) chip\n (2) insulator\n (3) semiconductor\n (4) metal\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 3)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 4)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\nRight answer: (3)\n");
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
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\nRight answer: (4)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q6;
}
count++;
q7:
printf("\n[7] Time period of a simple pendulum is 2sec.If its length is increased by 4 timed,the its period becomes...\
\n\
\n (1) 8sec\n (2) 12sec\n (3) 16sec\n (4) 4sec\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\n\tWrong!\nRight answer: (4)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q7;
}
count++;
q8:
printf("\n[8] The photoelectric emission could be explained by the......\
\n (1) Wave nature of light\n (2) Particle nature of light\n (3) Dual nature of light\n (4) Quantum nature\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 4 || ans == 1 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q8;
}
count++;
q9:
printf("\n[9] The radiation emitted by hot bodies are called.....\
\n (1) X- rays\n (2) Black body radiations\n (3) Gamma radiations\n (4) Visible light");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 3 || ans == 4)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q9;
}
count++;
q10:
printf("\n[10] Which among the following elements are generally found in free state?\
\n (1) Group 11 elements\n (2) Group 12 elements\n (3) Group 13 elements\n (4) None of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 1)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 2 || ans == 4 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q10;
}
count++;
q11:
printf("\n[11] Hydrogen bomb is based on the principle of?\
\n (1) Nuclear fission\n (2) Nuclear fusion\n (3) Natural radioactivity\n (4) Artificial radioactivity\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 4 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q11;
}
count++;
q12:
printf("\n[12]Which of the following has lowest melting point ?\
\n(1)Zinc \n (2) Silver \n (3) Lead \n (4)Tin\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (4)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q12;
}
count++;
q13:
printf("\n[13]What metal is used for making filaments of electric bulbs ?\
\n (1) Iron \n (2) Tungsten \n (3)Silver \n (4) Nickel \n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 2)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 4 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (2)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q13;
}
count++;
q14:
printf("\n[14] What is the size of int data type(in bytes)?\
\n (1)4 \n (2)8 \n (3) 2\n (4) 1\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 1)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 2 || ans == 4 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (1)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q14;
}
count++;
q15:
printf("\n[15] Which of the following are not standard files in C?\
\n (1)stdio.h \n (2)stdlib.h \n (3) conio.h \n (4) all of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (4)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q15;
}
count++;
q16:
printf("\n[16] Which of the following return type cannot be used for a function in c?\
\n (1) char\n (2) int\n (3) void\n (4) none of these\n");
printf("\n\tYour Answer (1,2,3 or 4): ");
scanf("%d", &ans);
if (ans == 4)
{system("color A0");
Beep(1500,50);
        Sleep(50);
        Beep(1200,100);
        Sleep(100);
        Beep(1000,200);
        Sleep(1000);
printf("\n\tCorrect!\n");
right++;
}
else if (ans == 1 || ans == 2 || ans == 3)
{system("color C0");
Beep(500,400);
        Sleep(50);
        Beep(480,1200);
        Sleep(100);
printf("\nWrong!\nRight answer: (4)\n");
wrong++;
}
else
{
printf("\nYou entered invalid answer. Enter the answer again:\n");
goto q16;
}

printf("\n\tNumber of questions attempted: %d\n\tCorrect answers: %d\
\n\tWrong answers: %d",
count, right, wrong);
printf("\n\nEnter your name: ");
getchar();
fgets(s.name,29,stdin);
s.result = right;
fprintf(file, "%s %d\n", s.name, s.result);

// Storing name and score of user in file
printf("*");
printf("\n\nReplay(y/n) ");
scanf("%c", &key);
}
while (key == 'y');
fclose(file);
goto start;
case 3:
    Beep(900,900);
        Sleep(100);
file = fopen("Quiz score.txt", "r");

// Opening file to read data


printf("\n\t# Scoreboard #\n");
while(fscanf(file, "%s %d", s.name, &s.result) != EOF)
printf(" Name: %s, Score: %d\n", s.name, s.result);
printf("*");
fclose(file);
goto start;
return 0;
default:
{printf("You entered invalid key");
}
}
}