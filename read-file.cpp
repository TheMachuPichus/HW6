#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define PATH "./"

int main(int argc, char* argv[])
 {
   if(argc!=2)
   {
  	cout << "Enter the file name " << endl;
  	cout << " e.g. sample.txt" << endl;
    return 2;
   }
   string cmd(argv[1]);
   cout << "Starting to read the file " << cmd <<  endl;
   std::fstream fs;
   fs.open( PATH + cmd, std::fstream::in);
   string line;
   while(getline(fs,line)) cout << line << endl;
   fs.close();
   cout << "Finished reading the file" << endl;
   return 0;
}
