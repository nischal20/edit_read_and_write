
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("Template.XML");
   ofstream myfile1;
   myfile1.open ("example.txt");
  if (myfile.is_open())
  {int j=1;
    while ( getline (myfile,line) )
    {
        string st=line;
        int len= st.length();

      int i=0;
        while(i<len){
            int longInc=3;
            int latInc=3;
            cout<<st[i];
             myfile1 <<st[i];
            if(st[i]=='L' && st[i+1]=='a' && st[i+2]=='t' &&
                st[i+3]=='i' && st[i+4]=='t' && st[i+5]=='u' &&
                st[i+6]=='d' && st[i+7]=='e' && st[i+8]=='=' && st[i+9]=='"'    )

            {
            longInc=3*j;latInc=j*3;j++;cout<<endl<<"value of increasing j:"<<j<<" longInc: "<<3*j<<endl;
//                int a=st[i+10]-'0';int a1=st[i+11]-'0';int a3=st[i+13]-'0';
//            float b3=(float)a3;int a4=st[i+14]-'0';float b4=(float)a4;
//            float val=a*10+a1+b3/10+b4/100+.04;
//
//            cout<<val<<"      ";
            int a4=st[i+14]-'0';
            a4=a4+latInc;
            cout<<"value of increasing the latitude : "<<latInc;
            st[i+14]=(char)(a4+'0');

             }
              //Longitude="-78.61591"
             if(st[i]=='L' && st[i+1]=='o' && st[i+2]=='n' &&
                st[i+3]=='g' && st[i+4]=='i' && st[i+5]=='t' &&
                st[i+6]=='u' && st[i+7]=='d' && st[i+8]=='e' && st[i+9]=='='&& st[i+10]=='"'    )

            {
            int a4=st[i+16]-'0';
            a4=a4+longInc;
            st[i+16]=(char)(a4+'0');


             }i++;
       }cout<<endl;
        myfile1 <<endl;

    }
    myfile.close();
    myfile1.close();
  }

  else cout << "Unable to open file";

  return 0;
}
