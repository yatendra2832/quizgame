#include<iostream>
using namespace std;

void Login();
void SignUp();
void Free_Trial();

void start_game();
void end_game(int score);
void trialstart_game();
void trialend_game(int score);


string Create_Username;
 int Create_Password;
 int Confirm_Password;
 string Enter_Username;
 int  Enter_Password;


int main(){
 string Create_Username;
 int Create_Password;
 int Confirm_Password;
 string Enter_Username;
 int  Enter_Password;
int option;
cout<<"=======================================Welcome To Yadavjiediting Quiz Contest========================================"<<endl;
cout<<"Select one option from below"<<endl;
cout<<"1)SignUp"<<endl;
cout<<"2)Login"<<endl;
cout<<"3)Free_Trial"<<endl;
cin>>option;
cout<<"You have choose the option"<<option<<endl;
if(option==1){
    SignUp();
}
else if(option==2){
    Login();
}
else if(option==3){
    Free_Trial();
}

return 0;
}

void SignUp(){
cout<<"Create Your Account To Play The Quiz"<<endl;
cout<<"-------------------------------------------------------------------"<<endl;
cout<<"|                                                                 |"<<endl;
cout<<"Create_Username:\t";
cin>>Create_Username;
cout<<"|                                                                 |"<<endl;
cout<<"Create_Password:\t";
cin>>Create_Password;
cout<<"|                                                                 |"<<endl;
cout<<"Confirm_Password:\t";
cin>>Confirm_Password;
cout<<"|                                                                 |"<<endl;
cout<<"-------------------------------------------------------------------"<<endl;

if(Create_Password==Confirm_Password){
    cout<<"Account has been created successfully"<<endl;
    cout<<"Now you can Login"<<endl;
    Login();
}
else{
    cout<<"Your Create Password and confirm password doesnot match "<<endl;
    cout<<"Retry Now !!"<<endl;
    SignUp();
}


}
void Login(){
    
cout<<"Login into Your Account To Play The Quiz"<<endl;
cout<<"-------------------------------------------------------------------"<<endl;
cout<<"|                                                                 |"<<endl;
cout<<"|Enter_Username:\t";
cin>>Enter_Username;
cout<<"|                                                                 |"<<endl;
cout<<"|Enter_Password:\t";
cin>>Enter_Password;
cout<<"|                                                                 |"<<endl;
cout<<"-------------------------------------------------------------------"<<endl;

if(Create_Username==Enter_Username&& Create_Password==Enter_Password){
    cout<<"You have successfully Login into your account "<<endl;
    cout<<"Let's Start your Game"<<endl;
    cout<<"\n====================================================================="<<endl;
    start_game();
}
else{
    // end_game(0);
    cout<<"Create your account first then login to play";
}


}




void Free_Trial(){
    cout<<endl;
    cout<<"Let's start your free trial!"<<endl;
trialstart_game();

}


void start_game(){
    char answer;
    int score=0;
    // question 1 start here
    cout<<"Q1)how much is 3+3:"<<endl;
    cout<<"a)4"<<endl;
    cout<<"b)6"<<endl;
    cout<<"c)9"<<endl;
    cout<<"d)33"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='b'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 1 ends here

// question 2start here
    cout<<"Q2)HTML stands for:"<<endl;
    cout<<"a)Hypertext Markup Language"<<endl;
    cout<<"b)Extensibele Markup language"<<endl;
    cout<<"c)high Text Markup Language"<<endl;
    cout<<"d)None of the above"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='a'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 2 ends here

// question 3 start here
    cout<<"Q3)LAN stands for:"<<endl;
    cout<<"a)Low area network"<<endl;
    cout<<"b)Local Area network"<<endl;
    cout<<"c)Load area network"<<endl;
    cout<<"d)none of the above"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='b'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 3 ends here

 // question 4 start here
    cout<<"Q4)Wi-fi stands for:"<<endl;
    cout<<"a)Wireless Fidelity"<<endl;
    cout<<"b)Wired Fidelity"<<endl;
    cout<<"c)Wiring Fidelity"<<endl;
    cout<<"d)NOTA"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='a'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 4 ends here
  
    end_game(score);
}

void end_game(int score){
    cout<<"thanks for playing"<<endl;
    cout<<"your score is "<<score<<endl;
}







void trialstart_game(){
    char answer;
    int score=0;
    // question 1 start here
    cout<<"Q1)how much is 3+3:"<<endl;
    cout<<"a)4"<<endl;
    cout<<"b)6"<<endl;
    cout<<"c)9"<<endl;
    cout<<"d)33"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='b'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 1 ends here

// question 2start here
    cout<<"Q2)HTML stands for:"<<endl;
    cout<<"a)Hypertext Markup Language"<<endl;
    cout<<"b)Extensibele Markup language"<<endl;
    cout<<"c)high Text Markup Language"<<endl;
    cout<<"d)None of the above"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='a'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 2 ends here

// question 3 start here
    cout<<"Q3)LAN stands for:"<<endl;
    cout<<"a)Low area network"<<endl;
    cout<<"b)Local Area network"<<endl;
    cout<<"c)Load area network"<<endl;
    cout<<"d)none of the above"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='b'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 3 ends here

 // question 4 start here
    cout<<"Q4)Wi-fi stands for:"<<endl;
    cout<<"a)Wireless Fidelity"<<endl;
    cout<<"b)Wired Fidelity"<<endl;
    cout<<"c)Wiring Fidelity"<<endl;
    cout<<"d)NOTA"<<endl;
    cout<<"Please Enter 'a','b','c','d' and press enter:"<<endl;
    cin>>answer;

    if (answer=='a'){
        cout<<"congrats you choose right answer!"<<endl;
        score++;
           cout<<"your current score is "<<score<<endl;
    }
    else{
        cout<<"\nSorry you choose wrong answer!"<<endl;
    }

    // Question 4 ends here
  
    end_game(score);
}

void trialend_game(int score){
    cout<<"Thanks for trial now you can create your account and enjoy the game"<<endl;
    cout<<"Your score is "<<score<<endl;
}
