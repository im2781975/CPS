{
    visited[node]=1;
    int coloring;
    if(color[node]==1){
        coloring=0;
    }else{
        coloring=1;
    }
    int counter=0;
    for(int i=0;i<m[node].size();i++){
        int child=m[node][i];
        if(node==child){
            counter=1;
            continue;
        }
        if(!visited[child]){
            color[child]=coloring;
            int ans=recur(child,visited,m,color);
            if(ans==1){
                counter=1;
            }
        }else{
            if(color[child]!=coloring){
                counter=1;
            }
        }
    }
    // cout<<node<<" "<<counter<<endl;
    return counter;
}
