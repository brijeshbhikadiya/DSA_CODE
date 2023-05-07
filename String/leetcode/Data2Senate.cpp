class Solution {
public:
    string predictPartyVictory(string senate) {
        
        queue<int> qr,qd;   //make a queue of both party.

        int n=senate.length();

        for(int i=0;i<n;i++)
            (senate[i]=='R')?qr.push(i):qd.push(i); //traverse whole string and put the value into the related queue.

        while(!qr.empty() && !qd.empty())  
        {
            int r_id=qr.front();  //store both front element and pop 
            int d_id=qd.front();

            qr.pop();
            qd.pop();

            (r_id<d_id)?qr.push(r_id+n):qd.push(d_id+n);  //becuause of it is a round table thus,if R party is band D so it push in last and  if D party isband R so it push in last   
        }

        return(qr.size()>qd.size()?"Radiant":"Dire");  
        

    }
};