#include <stdio.h>
#include <math.h>

int main(){
	int n;
	puts("試行回数");
	scanf("%d",&n);
	double X[n];
	for(int i=0;i<n;i++) scanf("%lf",&X[i]);
	double X_ = 0;
	for(int i=0;i<n;i++) X_ += X[i];
	X_ /= n;
	double U_2 = 0;
	double S_2 = 0;
	for(int i=0;i<n;i++) U_2 += (X[i] - X_) * (X[i] - X_);
	S_2 = U_2;
	U_2 /= n-1;
	S_2 /= n;
	double SE;
	SE = sqrt(U_2/n);
	printf("X_は%llf U_2は%llf S_2は%llf SEは%llf",X_,U_2,S_2,SE);
}
