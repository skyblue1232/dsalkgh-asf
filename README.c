# dsalkgh-asf
int main(void) {
	int n, i;
	int op = 3;
n = 0, i = 5;
switch (op) {
	case 1: i++;
	case 2: n++;
	case 3: i++;
	case 4: n++;
		break;
	default: i++;
		n++;
	}
printf("%d %d\n", i, n);
}
