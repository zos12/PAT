#include<cstdio>
const int maxn = 10010;
int school[maxn] = {0};
int main(){
	int n;
	int schoolId, score;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d",&schoolId, &score);
		school[schoolId] += score;
	}
	int MAX = -1, k = 0;
	for(int i = 1; i <= n; i++){
		if(school[i] > MAX){
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d", k, MAX);
	return 0;
}