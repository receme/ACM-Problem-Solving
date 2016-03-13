#include<iostream>
using namespace std;
bool graph[200][200];
int color[200];
int num_edges, num_vertices;

bool dfs(int v,int c) {
color[v]=c;
bool return_value=true;

for(int i=0; i<num_vertices; i++)
if(graph[v][i]) {
if(color[i]==3) {
if(!dfs(i, 1-c))
return false;
}
else if(color[i]==c) {
return false;
}
}

return return_value;
}


bool colorGraph() {
for(int i=0; i<num_vertices; i++)
color[i] = 3;
for(int i=0; i<num_vertices; i++)
if(color[i] == 3)
if(!dfs(i,0))
return false;
return true;
}


int main(int argc, char* argv[])
{
int vert0, vert1;
while(cin>>num_vertices && num_vertices!=0) {
cin>>num_edges;
//clear graph
for(int i=0; i<num_vertices; i++)
for(int j=0; j<num_vertices; j++)
graph[i][j]=false;
for(int i=0; i<num_edges; i++) {
cin>>vert0>>vert1;
graph[vert0][vert1]=graph[vert1][vert0]=true;
}
if(colorGraph()==false)
cout<<"NOT BICOLORABLE."<<endl;
else
cout<<"BICOLORABLE."<<endl;


}

return 0;
}
