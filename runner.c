int printf(char*, ...);

struct Car {
	char* name;
	char* brand;
	int year;
	int price;
};
struct Car* car(char* s, char* b, int i, int j);

int main() {
    car("Camaro", "Chevy", 1969, 50000);
    return 0;
}
