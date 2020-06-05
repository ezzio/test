#include<stdio.h>
#include<malloc.h>

struct Node{
	int vertex;
	int weight;
	int node;
};
void geuser(FILE *fin){
	
	int n,m,i;
	fscanf(fin,"%d%d",&n,&m);
	struct Node p[n];
	for(i = 0;i<n;i++){
		fscanf(fin,"%d%d%d",&p[i].vertex,&p[i].weight,&p[i].node);
		
	}
	for(i = 0;i<n;i++){
		printf("%d  %d  %d \n", p[i].vertex,p[i].weight,p[i].node);
	}
}
int main(){
	FILE *fin;
	FILE *fout;
	fin = fopen("C:/Users/User/Documents/test.txt", "r");
	geuser(fin);
}
