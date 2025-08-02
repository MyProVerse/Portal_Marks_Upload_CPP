#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	
	//ALI ZAMAN 
	
            cout<<"\n\t\t\t\tSTUDENT LOGIN PORTAL\n\n"<<endl;	
 	
	
    char option ='\0';
    
     
     do{
     	 
         int choice=0;
     	                         //MENU
     	
     	 cout<<"\t1-Register   2-Login      3-Calculate Result     4-Print Result      5-Print All \n"<<endl;
     	cin>>choice;
     	
     	if(choice==1){
     		
     		
     		ofstream fout1;
     		fout1.open("register.txt");
     		
     		//task7 option-menu1	
     		if(!fout1.is_open()){
     			
     			cout<<"file not found!"<<endl;
			 }
     		else
			 {
			 
     		
     		char reg[20]={'\0'};
     		char pswd[20]={'\0'};
     		int sr_no=1;
     		
     			int num_of_reg=0;
     		cout<<"please enter number of registeration you want to register: ";
     		cin>>num_of_reg;
     		
     		for(int i=0;i<num_of_reg;i++){
     			
     		//task1 input console from user to get registered
     		
     			cout<<"register: "<<i+1<<endl;
     			
     			cout<<"plesse enter your registeration number "<<endl;
     			cin>>reg;
     			
     			cout<<"please enter your password: "<<endl;
     			cin>>pswd;
     			
     			cout<<endl;
     			
     			fout1<<sr_no++<<" "<<reg<<" "<<pswd<<endl;
     			
			 }
		
			     		
     	
		 }
		 fout1.close();
		 
		 	ifstream fin1;
     		ofstream fout2;
     		ofstream fout3;
     		
     		fin1.open("register.txt");
     		fout2.open("reg.txt");
     		fout3.open("pswd.txt");		
     		
     		
     		//task7 option-menu1
     		if(!fout2.is_open()){
     			cout<<"file not found!"<<endl;
			 }
			 
			 
			 //task7 option-menu1
			 if(!fout3.is_open()){
			 	cout<<"file not found!"<<endl;
			 }
     		
     		//task7 option-menu1
     		if(!fin1.is_open()){
     			
     			cout<<"file not found!"<<endl;
			 }
			 
			 else 
			 {
			 	int sr_num_read=0;
     		char reg_read[50]={'\0'};
     		char pswd_read[20]={'\0'};
     		
     		
			 	//task7 option-menu1
			 	while(!fin1.eof()){
			 		
			 		fin1>>sr_num_read;
			 		fin1.ignore();
			 		fin1.getline(reg_read,50,' ');
			 		fin1.getline(pswd_read,20);
			 		cout<<sr_num_read<<" "<<reg_read<<" "<<pswd_read<<endl;
			 		
			 		//task2 to maintain registeration# and password separately with their serial numbers respectively (reg.txt && pswd.txt)
			 		
			 		fout2<<sr_num_read<<" "<<reg_read<<endl;
			 		fout3<<sr_num_read<<" "<<pswd_read<<endl;
			 		
				 }
				 	 cout<<"\nYour  data has been registered and maintained with two separate files successfully"<<endl;
     		 
     		         cout<<"\n\t\tNow you could login\n "<<endl;
			 }
     		fin1.close();
     		fout2.close();
     		fout3.close();
     	
		 }
     	if(choice==2){
     		
     		ifstream fin2;
            ifstream fin3;
            
    	fin2.open("reg.txt");
    	fin3.open("pswd.txt");
	  
    	
    	
	    char reg_no1[100] = {'\0'};
         cin.ignore();
         cout<<"please enter registeration number: "<<endl;
         cin.getline(reg_no1,100);
         
         char pswd1[20]={'\0'};
         cout<<"please enter pasword: "<<endl;
        cin.getline(pswd1,20);
        
        //task7 option-menu2
        if(!fin2.is_open()){
        	cout<<"file not found!"<<endl;
        	
		}
		
		//task7   option-menu2
		if(!fin3.is_open()){
		}
		else
		{
		  int sr_num_reg1=0;
    	int sr_num_pswd1=0;
    	
		char pswd_read1[20]={'\0'};
    	char reg_read1[100] = {'\0'};
    	
    	
    	//task7  option-menu2
    	//reading of two combined files
		while (!fin2.eof()&&!fin3.eof())
		{ 
		     //reading of serial number and registeration#
			fin2>>sr_num_reg1;
			fin2 >> reg_read1;
			
			//reading of serial number and password 
             fin3>>sr_num_pswd1;
             fin3>>pswd_read1;
           
           //task3 checking  registeration from registered data
           if(strcmp(reg_read1,reg_no1)==0){
           	cout<<"\n\tRegisteration Accepted"<<endl;
           	
		   }
		   else
		   {
		   	//task4 checking  unavailability of registeration from registered data
		   	cout<<"Incorrect Registeration!"<<endl;
		   }
		   
	//task3 checking unavailabilty of password from registered data 	
	if( sr_num_reg1==sr_num_pswd1 && strcmp(pswd_read1,pswd1)==0 && strcmp(reg_read1,reg_no1 )==0){
		
		cout<<"\tPassword  Accepted"<<endl;
		cout<<"\n\t\t\tAccess Granted\a"<<endl;
		 
		break;
		
	}
	else 
	{
		//task4 checking  unavaiability of password from registered data
          cout<<"Incorrect Password"<<endl;
		  cout<<"Access Denied\n"<<endl;
		 
		  
		
	}
}
}
fin2.close();
fin3.close();
}

     	if(choice==3){
 
	
	 		ifstream fin4;
            ifstream fin5;
            ofstream fout4;
            
    	fin4.open("reg.txt");
    	fin5.open("pswd.txt");
    	
    	//task6 creating of result file (result.txt)	
    	fout4.open("result.txt",ios::app);
	   
    	
    	
	    char reg_no2[100] = {'\0'};
         cin.ignore();
         cout<<"please enter registeration number: "<<endl;
         cin.getline(reg_no2,100);
         
         char pswd2[20]={'\0'};
         cout<<"please enter pasword: "<<endl;
        cin.getline(pswd2,20);
        
        //task7 option-menu3
        if(!fin4.is_open()){
        	cout<<"file not found!"<<endl;
        	
		}
		//task7 option-menu3
		if(!fin5.is_open()){
		}
		else
		{
			 int sr_num_reg2=0;
    	int sr_num_pswd2=0;
		
		
		char pswd_read2[20]={'\0'};
    	char reg_read2[100] = {'\0'};
    	
		 //task7 option-menu3
		 //reading of two combined files
		while (!fin4.eof()&&!fin5.eof())
		{ 
		     //reading of serial number and registeration#
			fin4>>sr_num_reg2;
			fin4 >> reg_read2;
			
			//reading of serial number and password 
             fin5>>sr_num_pswd2;
             fin5>>pswd_read2;
           
           //task3 checking of registeration from registered data
           if(strcmp(reg_read2,reg_no2)==0){
           	cout<<"\n\nRegisteration Accepted"<<endl;
           	
		   }
		   else
		   {
		//task4 checking  unavailability of regieration from registered data
	
		   	cout<<" Incorrect Registeration!"<<endl;
		   }
	
	
	if( sr_num_reg2==sr_num_pswd2 && strcmp(pswd_read2,pswd2)==0 && strcmp(reg_read2,reg_no2 )==0){
		
		cout<<"Password Accepted\n"<<endl;
		cout<<"\n\t\tAccess Granted\a"<<endl;
		
		
		float percnt=0;
		float marks=0;
		
		cout<<"Please enter your marks of Programming fundamentals "<<endl;
		cin>>marks;
		
		marks=marks*100;
		percnt=marks/100;
		
		
		fout4<<sr_num_reg2<<" "<<reg_read2<<" "<<percnt<<"%"<<endl;
		
		break;
		
	}
	else 
	{
		//task3 checking unavailabilty of password from registered data 
          cout<<"Incorrect Password"<<endl;
		  cout<<"access denied"<<endl;
	}
}


	}
	fin4.close();
	fin5.close();
	fout4.close();
		 }
		 
		 
		 	if(choice==4){
		 		
		 		
     	ifstream fin6;
     	fin6.open("result.txt");
     	
     	//task7 option-menu4
     	if(!fin6.is_open()){
     		cout<<"file not found!"<<endl;
		 }
		 else
		 {
		 	int sr_num_reg3=0;
		 	char result_read[50]={'\0'};
		 	float percentage=0;
		 	char per_sign='\0';
		 	
		 	//task7 option-menu4
		 	while(!fin6.eof()){
		 		
		 		fin6>>sr_num_reg3;	
		 		fin6>>result_read;
		 		fin6>>percentage;
		 		fin6>>per_sign;
		 		
		 		 
			 }
			 cout<<"Sr.   Reg# \tPercentage % "<<endl;
			 cout<<sr_num_reg3<<"     "<<result_read<<"\t"<<percentage<<per_sign<<endl;
			
		 }
     	fin6.close();
		 }
		 
		 
		 	if(choice==5){
		 		
		 			ifstream fin7;
     	fin7.open("result.txt");
     	
     	
     	 cout<<"Sr.   Reg# \tPercentage %"<<endl;
     	 
     	if(!fin7.is_open()){
     		cout<<"file not found!"<<endl;
		 }
		 else
		 {
		 	int sr_num_reg4=0;
		 	char reg_read4[50]={'\0'};
		 	float percentage1=0;
		 	char per_sign1='\0';
		 	
		 	while(!fin7.eof()){
		 		
		 		fin7>>sr_num_reg4;
		 		fin7>>reg_read4;
		 		fin7>>percentage1;
		 		fin7>>per_sign1;
		 		
		 		cout<<sr_num_reg4<<"     "<<reg_read4<<"\t"<<percentage1<<per_sign1<<endl;
		 		 
			 }
			
			 
			
		 }
     	fin7.close();
     		
		 }
     	
     	
     	cout<<"\nPlease enter N to exit or enter Y key to continue"<<endl;
     	cin>>option;
	 }while(!(option=='n'||option=='N'));
     
     

	system("pause");
	return 0;
	
}
