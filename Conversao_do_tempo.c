#include <stdio.h>

int main(){
	int h=0, min=0, seg, resto, resto2;
	printf("Digite os segundos: ");
	scanf("%d", &seg);
	if(seg > 60){
		min = seg/60;
		if(seg %60 == 0){
			if(min % 60 == 0){
				h = min/60;
				printf("%d:%d:%d\n", h, min, seg);
			}
			else {
				h = min/60;
				printf("%d:%d:%d\n", h, min, seg);
			}
		}
		else {
			if(min % 60 == 0){
				resto = seg % 60;
				h = min/60;
				printf("%d:%d:%d\n", h, resto2, resto);
			}
			else {
				resto2 = min % 60;
				resto = seg % 60;
				h = min/60;
				printf("%d:%d:%d\n", h, resto2, resto);
			}
			
		}
	}
	else {
		printf("%d:%d:%d\n", h, min, seg);
	}
	
	return 0;
}
