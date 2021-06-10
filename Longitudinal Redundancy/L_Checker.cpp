//
// Created by camanem on 9/6/21.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include "L_Checker.h"

using namespace std;

L_Checker::L_Checker() {

}

std::string L_Checker::getString(char x) {
    std::string s(1, x);
    return s;
}

void L_Checker::Init() {
    int n;
    cout<<"Enter 0 for ODD\nENTER 1 for EVEN\n";
    cin>>n;

    int res;
    string line;
    string val[4];
    string ress="";
    ifstream f ("datal.txt");
    int i=0;
    while(getline(f, line))
    {

        cout<<line;
        val[i]=line;
        i++;
        cout<<"\n";
    }
    for(int i=0; i<8; i++)
    {
        res=0;
        for(int j=0; j<4; j++)
        {
            int x;
            string s = getString(val[j][i]);
            stringstream geek(s);
            geek >> x;
            res=res+x;
        }
        if(n==1)
        {
            if(res%2==0)
            {
                ress.append("0");
            }
            else
            {
                ress.append("1");
            }
        }
        else
        {
            if(res%2==0)
            {
                ress.append("1");
            }
            else
            {
                ress.append("0");
            }
        }
    }
    cout<<"\n"<<ress;
}