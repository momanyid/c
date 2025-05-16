#include<stdio.h>

void toLower(char name[], int size) {
	for(int i=0; i<size; i++) {
		if(name[i] >= 'A' && name[i] <= 'Z') {
			name[i] = name[i] + 32;
		}
	}
}

void toUpper(char name[], int size) {
	for(int i =0; i<size; i++) {
		if(name[i] >='a' && name[i] <='z') {
			name[i] = name[i] - 32;
		}
	}
}

void printStr(char name[], int size){
	for(int i=0; i<size; i++){
		printf("%c", name[i]);
	}
	printf("\n");
}

int main() {

	
	char name[5] = {'D', 'a', 'v', 'i', 'd'};
	int size = sizeof(name)/sizeof(name[0]);

	printStr(name, size);

	toLower(name, size);
	printStr(name, size);

	toUpper(name, size);
	printStr(name, size);
}
