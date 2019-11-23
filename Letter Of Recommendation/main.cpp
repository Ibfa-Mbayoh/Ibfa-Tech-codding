#include <iostream>

using namespace std;

int main()
{
    string Place, TownOrCity, District, Date, Title, CompanyName, Branch, Name, Reason, RecommenderName, RecommenderAddress;
    int RecommenderContactNo;
    cout << "INPUT SENDER'S ADDRESS" << endl;
    cout<< "FullName: " ;
    getline(cin, Name);
    cout<< "Place: " ;
    getline(cin, Place);
    cout<< "Town/City: " ;
    getline(cin, TownOrCity);
    cout<< "District: " ;
    getline(cin, District);
    cout<< "Date: " ;
    getline(cin, Date);
    cout<< " INPUT RECIEVER'S ADDRESS" << endl;
    cout<< "Title: " ;
    getline(cin, Title);
    cout<< "Company Name: " ;
    getline(cin, CompanyName);
    cout<< "Branch: " ;
    getline(cin, Branch);
    cout << "Please State Your Reason: " ;
    getline(cin, Reason);
    cout << "Recommender's Name: " ;
    getline(cin, RecommenderName);
    cout << "Recommender's Address: " ;
    getline(cin, RecommenderAddress);
    cout << "Recommender's Contact No: ";
    cin>> RecommenderContactNo;
    cout << "          WELCOME " <<Name << " THIS IS YOUR RECOMMENDATION LETTER" <<endl;
    cout<<"                                                                            "<<Place << endl;
    cout<<"                                                                            "<< TownOrCity << endl;
    cout<<"                                                                            "<<District << endl;
    cout<<"                                                                            "<<Date<<"." << endl;
    cout<<Title <<endl;
    cout<<CompanyName <<endl;
    cout<< Branch <<endl;
    cout << "Dear Sir/Madam," << endl;
    cout << "                                       LETTER OF RECOMMENDATION" << endl;
    cout << "I am delighted to recommend " << Name << " for a " << Reason << " in your Organization " << CompanyName<< ". I have known" << endl;
    cout << Name << " from the time memorial living in the same town and area. " << endl;
    cout << Name << " showed exceptional performance as a young man by then. I am with grate confidence and trust in him, and with that I can " ;
    cout << "assure you grantee of paying you back, so I " << RecommenderName << " I stand to recommend " << Name << " in your noble office with no fare of regret." << endl;
    cout << "With great regard I will be so please if you grant him/her this wish as he/she is about to start a building project, I who do this recommendation." << endl;
    cout << "I lived at " << RecommenderAddress << " for more description, and please this is my contact No. " << RecommenderContactNo <<"." << endl ;
    cout << "Thanks for your understanding." << endl;
    cout << "                                                                                                             Yours faithfully," << endl;
    cout << "                                                                                                             _________________" << endl;
     cout << "                                                                                                            "<<RecommenderName << endl;
    return 0;
}
