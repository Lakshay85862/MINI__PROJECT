#include<iostream>
#include<fstream>
#include<iomanip> 

void mainMenu();

using namespace std;

class Management{
    public:

    Management(){
        mainMenu();
    }
};

class Details{
    public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information(){
        cout << "\n ENTER THE CUSTOMER ID:";
        cin >> cId;
        cout << "\n ENTER YOUR NAME:";
        cin >> name;
        cout << "\n ENTER THE AGE:";
        cin >> age;
        cout << "\n ADDRESS :";
        cin >> add;
        cout << "\n GENDER :";
        cin >> gender;
        cout << "YOUR DETAILS ARE  SAVED WITH US \n" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"DUBAI","CANADA","UK","USA","AUSTRALIA","EUROPE"};

        for(int a=0;a<6;a++)
        {
            cout << (a+1) << ", FLIGHT TO " << flightN[a] << endl;

        }
        cout << "\nWELCOME TO THE AIRLINES" << endl;
        cout << "PRESS THE NUMBER OF THE COUNTRY OF WHICH YOU WANT TO BOOK THE FLIGHT :";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "_________________________WELCOME TO DUBAI EMIRATES_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. DUB - 498" << endl;
                cout << "\t 08-01-2022  8:00am   10hrs   Rs.14000 " << endl;
                cout << "2. DUB - 798" << endl;
                cout << "\t 09-01-2022  8:00am   11hrs   Rs.10000 " << endl;
                cout << "3. DUB - 998" << endl;
                cout << "\t 10-01-2022  9:00am   12hrs   Rs.9000 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 14000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB-498" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 10000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB-798" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 9000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB-998" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            case 2:
            {
                 cout << "_________________________WELCOME TO CANADIAN AIRLINES_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. CA - 198" << endl;
                cout << "\t 09-01-2022  2:00am   20hrs   Rs.34000 " << endl;
                cout << "2. CA - 158" << endl;
                cout << "\t 11-01-2022  8:00am   23hrs   Rs.29000 " << endl;
                cout << "3. CA - 208" << endl;
                cout << "\t 14-01-2022  12:00am   23hrs   Rs.40000 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 34000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CA-198" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 29000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CA-158" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 40000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CA-208" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            case 3:
            {
                 cout << "_________________________WELCOME TO UK AIRWAYS_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. UK - 798" << endl;
                cout << "\t 12-01-2022  6:00am   14hrs   Rs.25000 " << endl;
                cout << "2. UK - 900" << endl;
                cout << "\t 11-01-2022  8:00am   16hrs   Rs.20000 " << endl;
                cout << "3. UK - 678" << endl;
                cout << "\t 12-01-2022  9:00am   15hrs   Rs.30000 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 25000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-798" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 20000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-900" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 30000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-678" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            case 4:
            {
                 cout << "_________________________WELCOME TO AMERICAN AIRLINES_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. US - 348" << endl;
                cout << "\t 10-01-2022  8:00am   32hrs   Rs.47000 " << endl;
                cout << "2. US-678" << endl;
                cout << "\t 11-01-2022  6:00am   33hrs   Rs.49000 " << endl;
                cout << "3. US - 448" << endl;
                cout << "\t 12-01-2022  4:00am   30hrs   Rs.49500 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 27000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-348" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 29000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-678" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 29500;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-448" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            case 5:
            {
                 cout << "_________________________WELCOME TO AUSTRALIAN AIRWAYS_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. AUS - 798" << endl;
                cout << "\t 12-01-2022  6:00am   14hrs   Rs.25000 " << endl;
                cout << "2. AUS - 900" << endl;
                cout << "\t 11-01-2022  8:00am   16hrs   Rs.20000 " << endl;
                cout << "3. AUS - 678" << endl;
                cout << "\t 12-01-2022  9:00am   15hrs   Rs.30000 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 25000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-798" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 20000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-900" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 30000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-678" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            case 6:
            {
                cout << "_________________________WELCOME TO EUROPEAN AIRWAYS_________________________\n" << endl;

                cout << "YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!" << endl;

                cout << "FOLLOWING ARE THE FLIGHTS \n" << endl;

                cout << "1. EU - 898" << endl;
                cout << "\t 12-01-2022  7:00am   18hrs   Rs.35000 " << endl;
                cout << "2. EU - 800" << endl;
                cout << "\t 11-01-2022  8:00am   26hrs   Rs.30000 " << endl;
                cout << "3. EU - 678" << endl;
                cout << "\t 12-01-2022  10:00am   15hrs   Rs.40000 " << endl;

                cout << "\n SELECT THE FOLLOWING FLIGHTS YOU WANNA BOOK:";
                cin >> choice1;

                if (choice1 == 1){
                    charges = 35000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EU-898" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==2){
                    charges = 30000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EU-800" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else if(choice1==3){
                    charges = 40000;
                    cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EU-678" << endl;
                    cout << "YOU CAN GO BACK TO MAIN MENU AND TAKE THE TICKET" << endl;
                }
                else{
                    cout << "INVALID INPUT , SHIFTING  TO THE PREVIOUS MENU"<< endl;
                    flights();
                }
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }
                else {
                    mainMenu();
                }
            }
            default :
            {
                cout << "INVALID INPUT , SHIFTING YOU TO MAIN MENU " << endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket: public registration , Details
{
    public:

        void Bill(){
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"________________XYZ Airlines_______________" << endl;
                outf<<"_________________Ticket____________________" <<endl;
                outf<<"____________________________________________"<<endl;

                outf << "Customer ID:" << Details::cId <<endl;
                outf << "Customer Name:" << Details::name <<endl;
                outf << "Customer Gender:" << Details::gender <<endl;
                outf<<"\tDescription" << endl <<endl;

                if(registration::choice==1){
                    destination ="DUBAI";
                }
                else if(registration::choice==2){
                    destination ="CANADA";
                }
                else if(registration::choice==3){
                    destination ="UK";
                }
                else if(registration::choice==4){
                    destination ="USA";
                }
                else if(registration::choice==5){
                    destination ="AUSTRALIA";
                }
                else if(registration::choice==6){
                    destination ="EUROPE";
                }

                outf <<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t" <<registration::charges << endl;
            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs){
                   cout <<"File error!"<<endl;     
                }
                while(ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout << "\t                    HAPPY AIRLINES\n" << endl;
    cout << "\t___________________________MAIN MENU_____________________________" << endl;
    cout <<"\t______________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t PRESS 1 TO ADD THE CUSTOMER DETAILS         \t|" << endl;
    cout << "\t|\t PRESS 2 FOR FLIGHT REGISTRATION             \t|" << endl;
    cout << "\t|\t PRESS 3 FOR TICKET AND CHARGES              \t|" << endl;
    cout << "\t|\t PRESS 4 TO EXIT                             \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout <<"\t______________________________________________________________" << endl;
   
    cout << "ENTER YOUR CHOICE : ";
    cin >> lchoice;
    
    Details d;
    registration r;
    ticket t;

    switch(lchoice){
        case 1:
        {
            cout <<"______________CUSTOMERS______________\n" << endl;
            d.information();
            cout <<"PRESS ANY KEY TO GO BACK TO MAIN MENU";
            cin >> back;

            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<< "___________BOOK A FLIGHT USING THIS SYSTEM_________\n" << endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout <<"_____________GET YOUR TICKET______________\n"<< endl;
            t.Bill();

            cout << "YOUR TICKET IS PRINTED , YOU CAN COLLECT IT \n"<<endl;
            cout << "PRESS 1 TO DISPLAY YOUR TICKET";

            cin >> back;
            if (back == 1){
                t.dispBill();
                cout << "PRESS ANY KEY TO GO BACK TO MAIN MENU";
                cin >> back;
                if (back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
    }
    case 4:
    {
        cout << "\n\n\t________________THANK YOU___________________"<< endl;
        break;
    }
    default :
    {
        cout << "INVALID INPUT , PLEASE TRY AGAIN !! \n" << endl;
        mainMenu();
        break;
    }

}
}
int main()
{
    Management Mobj;
    return 0;
}
