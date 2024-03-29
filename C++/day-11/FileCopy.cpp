 #include<fstream>
 #include<iostream>
 #include<string>
 using namespace std;
      int main( int argc, char *argv[])
  {       


	  if(argc<3){
	  cout<<"\nenter source file and destination file name::"<<endl;
	  return -1;
	  }


	  ifstream fin(argv[1]);
	  ofstream fout(argv[2]);


	  if(!fin){
	  
	   cout<<"\nunable to open file in read mode"<<endl;
	   return -1;

	  }
     
	   if(!fout){
	   
	   cout<<"\n unable to open file in write mode"<<endl;
	   return -1;
	   }



	   char ch;
	   while(fin)
	   {
	   fin.get(ch);
	   fout<<ch;

	   
	   }

	   fout.close();
	   fin.close();
	   return 0;



}
