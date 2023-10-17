class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
         vector<int>row;
        vector<int>column;
        //firstly making all diagonal elements 1
        for(int i=0;i<N;i++)
        {
            graph[i][i]=1;
        }
        // first loop for selection of a row and column same index x
        for(int i=0;i<N;i++)
        {
            //column x having 1 at positions is stored in vector column
            for(int j=0;j<N;j++)
            {
               if(graph[j][i]==1)
               {
                   column.push_back(j);
               }
            }
            // row x having 1 at postions is stored in vector row
            for(int k=0;k<N;k++)
            {
                    if(graph[i][k]==1)
                    {
                         row.push_back(k);
                    }
                    
            }
            // for making it transitive using vector column and row making cartesian product and making
            // cartesian product value as 1
            // graph[column][row]=1
            for(int g=0;g<column.size();g++)
            {
                for(int h =0;h<row.size();h++)
                {
                    graph[column[g]][row[h]]=1;
                }
            }
            // clearing vectors row and column for next iteration
            row.clear();
            column.clear();
            
        }
        return graph;
    }
};
