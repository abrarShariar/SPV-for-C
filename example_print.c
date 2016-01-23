/*
    UPDATE:
    SPVprints() use to print string/char array
    SPVprintc() use to print char

    Use SPVprinti() to print int
*/

#include "spv.h"
void main(){

//SPV string
    SPV testString;
    SPVconstruct(0,&testString);

    SPVpush_back(&testString,"Place a long text line here. STL style Vector implemented in SPV !!!");
    SPVprints(&testString);                       //print string using SPVprints()

    testString.spv[0]="HELLO WORLD";
    testString.spv[1]="C++";
    testString.spv[2]="This is an example";
    int i;
    for(i=0;i<3;i++){
        printf("%s\n",testString.spv[i]);         //print string using C-style printf()
    }


//SPV character
/*
    SPV testChar;
    SPVconstruct(0,&testChar);

    SPVpush_back(&testChar,'C');
    SPVpush_back(&testChar,'O');
    SPVpush_back(&testChar,'D');
    SPVpush_back(&testChar,'E');

    SPVprintc(&testChar);
*/

}
