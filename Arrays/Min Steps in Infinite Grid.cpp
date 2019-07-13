int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int gd=0;
    int a,b;
    
    int n =A.size();
    
    for(int i=0;i<n-1;i++){
        
        int m1 =max(abs(A[i]),abs(A[i+1]));
        int m2 =max(abs(B[i]),abs(B[i+1]));
        int m = max(m1,m2);
        // cout<<m1<<" "<<m2<<"\n";
        
        vector<int> A1(2,0);
        vector<int> B1(2,0);
        
        A1[0]=A[i];
        A1[1]=A[i+1];
        B1[0]=B[i];
        B1[1]=B[i+1];

        A1[0]+=m;
        A1[1]+=m;
        B1[0]+=m;
        B1[1]+=m;
        
        // cout<<A1[0]<<" "<<A1[1]<<"\n";
        // cout<<B1[0]<<" "<<A1[1]<<"\n";
        
        a=abs(A1[0]-A1[1]);
        b=abs(B1[0]-B1[1]);
        
        int p = min(a,b);
        gd+=p;
        
        // cout<<gd<<"\n";
        
        if(A1[0]<A1[1]){
            a=A1[0]+p;
        }else{
            a=A1[0]-p;
        }
        if(B1[0]<B1[1]){
            b=B1[0]+p;
        }else{
            b=B1[0]-p;
        }

        a=abs(a-A1[1]);
        b=abs(b-B1[1]);
        int q = max(a,b);
        gd+=q;
        
        
    }
    return gd;
    
}
