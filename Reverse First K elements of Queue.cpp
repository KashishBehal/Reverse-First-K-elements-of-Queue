queue<int> modifyQueue(queue<int> q, int k) {
   stack<int>qq;
   int n=q.size();
   for(int i=0;i<k;i++){
       int a=q.front();
       
       qq.push(a);
       q.pop();
   }
   while(!qq.empty()){
       int a=qq.top();
       q.push(a);
       qq.pop();
   }
   for(int j=0;j<n-k;j++){
       int a=q.front();
       q.push(a);
       q.pop();
   }
   return q;
   
}
