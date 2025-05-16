#include<stdio.h>

void toUpper(char name[]) {
	for(int i=0; name[i] != '\0'; i++) {
		if(name[i] >= 'a' && name[i] <= 'z')  name[i] = name[i] - 32;
	}
}

void toLower(char name[]) {
	int i=0;
	while(name[i]!='\0'){
		if(name[i] >= 'A' && name[i] <= 'Z') name[i] = name[i] +32;
		i++;
	}
}

void printStr(char name[]) {
	for (int i=0; name[i]!='\0'; i++) {
		printf("%c", name[i]);
	}
	printf("\n");
}

int main() {
	char name[] = {'M', 'o', 'm', 'A', 'n', 'Y', 'i', '\0'};
	char fullName[] = "DavId Momanyi";

	printf("Fullname original: ");
	printStr(fullName);
	
	toUpper(fullName);
	printf("Fullname upper: ");
	printStr(fullName);
	
	toLower(fullName);
	printf("Fullname lower: ");
	printStr(fullName);	


	printStr(name);

	toLower(name);
	printStr(name);

	toUpper(name);
	printStr(name);

	return 0;
}
