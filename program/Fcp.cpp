#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string userName;
    string password;
    int loginAttemt = 0;
    int choose;
    int price_array [] {100,200,300,400,500,600,700,800,900,1000,1500,3000};
    cout << left;
    string meal_kits;
    string price;

    //welcome message start
    cout << "Welcome to BestMeal" << endl
         << endl;
    //welcome end

    //login start
    cout << "please login below" << endl;

    while (loginAttemt < 3)
    {
        cout << "Please enter your user name : ";
        cin >> userName;

        cout << "Please enter your password : ";
        cin >> password;

        cout << endl;
        if (userName == "admin" && password == "admin")
        {
            cout << "Login successful" << endl;
            break;
        }

        else
        {
            cout << "Invalid login.Please try again" << endl;
            loginAttemt++;
            
        }  

        
    }
    

    if (loginAttemt == 3)
        {
            cout << "Too many login attempts! The program will now terminate.";
            system("pause");
            return 0;
        }

     
    //login end
    cout << endl << endl;

    //Main Menu start
    cout << "Main menu" << endl<< endl;
    
    cout << "1. View available Meal kits." << endl;
    cout << "2. Manage available Meal kits " << endl;
    cout << "3. Search specific Meal kit. " << endl;
    cout << "4. How it works." << endl;
    cout << "5. Contact us" << endl;
    cout << "6. About us" << endl;
    cout << "7. Exit" << endl;
    

    cout << endl << endl << "Enter choice : ";
    cin >> choose;

    cout << endl;

    switch (choose){


    case 1 : 
        { 

          cout << "Meal Kits :  " << endl << endl ;
          cout << "1.Rockefeller Salmon  :  " << price_array[0] << endl;
          cout << "2.Chicken Breast and Garlic Demi Sauce  :  " << price_array[1] << endl;
          cout << "3.Scallops with Lemon-Caper Pasta  :  " << price_array[2] << endl;
          cout << "4.Steak Frites and Marsala Sauce  :  "<< price_array[3] << endl;
          cout << "5.Chicken Breast with Cilantro Butter  :  "<< price_array[4] << endl;
          cout << "6.Wood-Fired BBQ Chicken Pizza  :  " << price_array[5] << endl;
          cout << "7.French Onion-Crusted Pork Chop  :  "<< price_array[6] << endl;
          cout << "8.Garlic-Ginger Shrimp & Coconut Risotto  :  "<< price_array[7] << endl;
          cout << "9.Cheeseburger Stuffed Peppers  :  "<< price_array[8] << endl;
          cout << "10.Spaghetti and Tomato-Mushroom Sauce  :  "<< price_array[9] << endl;
          cout << "11.Sweet & Savory Roasted Butternut Squash Risotto  :  "<< price_array[10] << endl;
          cout << "12.Creamy Truffle Steak Penne with Cheese and Garlic Croutons  :  "<< price_array[11] << endl;
         
         //updated meal kits
          cout << endl << endl;
          cout << "---------------------------------------Updated Meal kits---------------------------------------" <<  endl;

          
            ifstream managing_file("Managing.txt");
            if(!managing_file){
                cout << "Managing file not found" << endl;
                return -9;

            }
            cout << "\t\t\t\t Manage available Meal kits. \n\n";
            cout << setw (68) << "Availble Meal kits" << "Price($)" << endl << endl;
            managing_file.ignore(255,'\n');
            

            //pre-read

            getline(managing_file,meal_kits,',');
            managing_file >>price;
            while (!managing_file.eof())
            {

                cout << setw (68) << meal_kits<< price <<endl;
                //post-read
                getline(managing_file,meal_kits,',');
                
                managing_file >>price;
                
            }
            
            break;
        }
        

    case 2 :   
        { 
        
            cout << "Manage available Meal kits :  " <<  endl;

          
            cout << left;
            string meal_kits;
            string price;

            ifstream managing_file("Managing.txt");
            if(!managing_file){
                cout << "Managing file not found" << endl;
                return -9;

            }
            cout << "\t\t\t Manage meal kit. \n\n";
            cout << setw (68) << "meal kits" << "price ($)" << endl << endl;
            managing_file.ignore(255,'\n');
            

            //pre-read

            getline(managing_file,meal_kits,',');
            managing_file>>price;
            while (!managing_file.eof())
            {

                cout << setw (68) << meal_kits<< price <<endl;
                //post-read
                getline(managing_file,meal_kits,',');
                
                managing_file >>price ;
                
            }
            
            break;
        }
        

    case 3 :   
        { 

          cout << "Search specific Meal kit :  " <<  endl;
            break;
        }

    case 4 :   
        { 

          cout << "1. pick your meals :  ";
          cout << "Select recipes each week that fit your preferences and dietary restrictions.Accept our suggestions or choose your own!" << endl;

          cout << endl << "2. Customize Your Plate :  ";
          cout << "Use our Customize It feature to upgrade, swap, or double up your favorite protein on select recipes." << endl;

          cout << endl << "3. Cook And Enjoy :  " ;
          cout << "Fresh, pre-portioned ingredients delivered right to your door – effortlessly create and plate exciting dishes with our step-by-step recipe cards." << endl ;
        
            break;
        }           

     case 5 :   
        { 

          cout << "Text or Call us : 0112000111 "  << endl;
          cout << endl << "Well it looks like you scored our number. Feel free to give us a text or a call with any questions, comments or concerns.We're here for ya!" << endl ;
            break;
        }               
    
     case 6 :   
        { 

          cout << "Every day, you're out there making things happen. That's why our CEO, Pat Vihtelic, created Home Chef: to provide everything you need to bring more delicious meals and moments to the table, no matter how busy you are. Because at Home Chef, we believe that preparing and enjoying a home-cooked meal should be a simply delicious experience."  << endl;
          cout << endl << "In fact, simplicity is our mantra. From online to doorstep...to your kitchen table, we make planning and preparing a home-cooked meal simple, intuitive and inspirational every step of the way." << endl;
          cout << "In 2013, Pat started Home Chef by partnering with a chef to design delicious, easy-to-follow recipes. Since then, our team has grown to include several chefs, and more than 700 employees across production, marketing, technology, product, design, and customer service. Last year, we delivered over 10 million meals and expanded our delivery to cover more than 97% of the U.S. population. Some days -- okay, most days -- we can't believe how quickly we've grown. But we believe that people continue to love Home Chef for the same reasons it was founded: it saves time, reduces food waste, and most importantly, brings people together for a home-cooked meal." << endl;
             break;
        }           

    
    default:
        {   cout << "Exit" << endl;
            break;
        }
    }
    //Main Menu End

    //start greeting message
    cout << endl << endl<<endl<<endl;
    cout<< "--------------------------------------- Thank You ! ---------------------------------------"<<endl <<endl;
    //end greeting message
    system("pause");
    return 0;
}
