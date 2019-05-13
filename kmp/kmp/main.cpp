//
//  main.cpp
//  kmp
//
//  Created by Sherry R.Z on 2019-05-12.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
inline void NEXT(const string&T, vector<int>&next){
    next[0] = -1;
    for (int i = 1; i<T.size(); i++){
        int j = next[i - 1];
        while (j >= 0 && T[i - 1] != T[j]) j = next[j];
        if (j >= 0 &&  T[i - 1] == T[j]) next[i] = j + 1;
        else next[i] = 0;
    }
}
inline string::size_type COUNT_KMP(const string&S, const string&T){
    vector<int>next(T.size());
    NEXT(T, next);
    string::size_type index, count = 0;
    for (index = 0; index<S.size(); ++index){
        int pos = 0;
        string::size_type iter = index;
        while (pos<T.size() && iter<S.size()){
            if (S[iter] == T[pos]){ ++iter; ++pos; }
            else{
                if (pos == 0) ++iter;
                else pos = next[pos - 1] + 1;
            }
        }
        if (pos == T.size() && (iter - index) == T.size()) ++count;
    }
    return count;
}

int main(int argc, char*argv[])
{
    string S="abaabcacabaabcacabaabcacabaabcacabaabcac";
    string T="ab";
    //cin >> S;
    //cin >> T;
    string::size_type count = COUNT_KMP(S, T);
    cout << count << endl;
    system("PAUSE");
    return 0;
}
