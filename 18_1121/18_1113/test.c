#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void jolly() {
	printf("For he's a jolly good fellow!\n");
}
void deny() {
	printf("Which no body can deny!\n");
}
int main() {
	jolly();
	jolly();
	jolly();
	deny();
	getchar();
	return 0;
}

void br() {
	printf("Brazil,Russia");
}
void ic() {
	printf("India,China");
}
int main() {
	br(), ic();
	ic();
	br();
	getchar();
	return 0;
}

int main() {
	int toes = 10;
	int n1, n2;
	n1 = toes * 2;
	n2 = toes*toes;
	printf("toes=%d double toes=%d squared toes=%d", toes, n1, n2);
	getchar();
	return 0;
}

int main() {
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f\n", a);
	getchar();
	return 0;
}

int main() {
	float salary = 0;
	printf("\aEnter your desired monthly salary:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year", salary, salary*12.0);
	printf("\rGee!\n");
	system("pause");
	return 0;
}

#define DENSITY 62.4
int main() {
	float weight, volume;
	int size, letters;
	char name[40];
	printf("Hi!What's your first name?\n");
	scanf("%s", &name);
	printf("%s,What's is your weight in pounds?\n",name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first nmae has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	system("pause");
	return 0;
}

int main() {
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello,%s.\n", name);
	system("pause");
	return 0;
}

int main() {
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n",bph2o);
	printf("The printf() function printed %d charaters.\n",rv);
	system("pause");
	return 0;
}

int main() {
	int age;
	float assets;
	char pet[30];
	printf("Enter your age, assets, and your favorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);
	system("pause");
	return 0;
}

