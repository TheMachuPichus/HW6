#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define PATH "./"

int main(int argc, char* argv[])
 {
   if(argc < 2 )
   {
  	cout << "Enter the file name " << endl;
  	cout << " e.g. sample.txt " << endl;
    return 2;
   }
   string cmd(argv[1]);
   int x;
   cout << "Starting to write to the file " << cmd <<  endl;
   std::fstream fs;
   fs.open( (PATH + cmd).c_str() , std::fstream::out);
  /* for( x = 2 ; x < argc ; x++)
   {
      fs << argv[x];
      fs << " ";
   }
   fs << "\n";*/
   fs << "I watched the movie Star Wars I. \n";
   fs << "I watched the movie Star Trek. \n";
   fs.close();
   cout << "Finished writing to the file" << endl;
   return 0;
}
