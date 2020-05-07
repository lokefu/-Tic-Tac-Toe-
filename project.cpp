#include <iostream>
#include <ctime>
using namespace std;

int main() {
    char array[9]={'1','2','3','4','5','6','7','8','9'};
    
    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
    bool Continue=true;
    int input,count=0;
    
    while (Continue==true){
        while(count<10){
            srand(time(NULL));
            cout<<"Please input an integer from 1 to 9:";
            cin >> input;
            cout<<endl;
            if (input==1 || input==2|| input==3 || input==4 || input==5 || input==6 || input==7 || input==8 || input==9){
                if (array[input-1]!='X' && array[input-1]!='O'){
                    array[input-1]='X';
                    count=count+1;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                else{
                    cout<<"Position has been occupied. Choose again!"<<endl;
                }
            }
            else {
                cout <<"invalid move, choose again!"<<endl;
            }
            while (count==1){
                    int random=rand()%8+1;
                    if(array[random]!='O' && array[random]!='X'){
                    array[random]='O';
                    count+=1;
                    cout << "computer' move:"<<endl;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                    else {
                        srand(time(NULL));
                }
            }
            while (count==3){
                    int random=rand()%8+1;
                    if(array[random]!='O' && array[random]!='X'){
                    array[random]='O';
                    count+=1;
                    cout << "computer' move:"<<endl;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                    else {
                        srand(time(NULL));
                }
            }
            while (count==5){
                    int random=rand()%8+1;
                    if(array[random]!='O' && array[random]!='X'){
                    array[random]='O';
                    count+=1;
                    cout << "computer' move:"<<endl;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                    else {
                        srand(time(NULL));
                }
            }
            while (count==7){
                    int random=rand()%8+1;
                    if(array[random]!='O' && array[random]!='X'){
                    array[random]='O';
                    count+=1;
                    cout << "computer' move:"<<endl;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                    else {
                        srand(time(NULL));
                }
            }
            while (count==9){
                    int random=rand()%8+1;
                    if(array[random]!='O' && array[random]!='X'){
                    array[random]='O';
                    count+=1;
                    cout << "computer' move:"<<endl;
                    cout  << array[0] << ' ' << array[1] << ' ' << array[2]<<endl;
                    cout  << array[3] << ' ' << array[4] << ' ' << array[5]<<endl;
                    cout  << array[6] << ' ' << array[7] << ' ' << array[8]<<endl;
                }
                    else {
                        srand(time(NULL));
                }
            }
        }
    }
}
