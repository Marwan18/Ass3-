#include <iostream>

using namespace std;
////////////////// Function that revere array of char///////////////
void recers (char* ptr, int x, int y){
    char temp[1];
    int pjw =0 ;
    if ((y-x) <= 1)
    {
        pjw = 2;
    }
    else
    {
        recers(ptr, x+1,y-1);
    }

    if (pjw = 2)
    {
        temp[0] = ptr [x];
        ptr [x] = ptr [y];
        ptr [y] = temp[0];
    }
}
////////////////// Function that revere array of string ///////////////

void string_recers(string* arrd){
    for (int i = 0; i < 3; i++){
        string sizeos = arrd [i];
        int mkas = sizeos.size();
        recers(& arrd[i][0], 0, mkas-1);
    }
}
/////////////////////////// Main /////////////////////////////////////
int main()
{

    string ab [3]={"ank","djf","hgui"};
    cout << "\nBefore REV\n" << "-----------\n"<< ab [0]<<endl<<ab[1]<<endl<<ab[2]<<endl;

    string_recers(& ab[0]);
    cout << "\nAfter REV\n" << "-----------\n"<< ab [0]<<endl<<ab[1]<<endl<<ab[2]<<endl<<endl;

    char arr [6]={'A','B','C','D','E','F'};
    cout << "Array before \n";
    for (int i = 0;i < 6 ;i++ ){
        cout<< arr [i];
    }
    recers(& arr[0],0 ,5 );
    cout << "\n\nArray after \n";
    for (int i = 0;i < 6 ;i++ ){
        cout<< arr [i];
    }
    char arry [5]={'A','B','C','D','E'};
    cout << "\nArray before \n";
    for (int i = 0;i < 5 ;i++ ){
        cout<< arry [i];
    }
    recers(& arry[0],0 ,4 );
    cout << "\n\nArray after \n";
    for (int i = 0;i < 5 ;i++ ){
        cout<< arry [i];
    }

    return 0;
}
