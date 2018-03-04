/* Programe to search for the line number from the source code*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

unsigned int FindFunctionDefn( const char* strFunctionName, const char* strSourceCode){
int save;
string fn=strFunctionName;
fn=fn+"()";
string sn=fn+";";
int len=strlen(strSourceCode);
char ch[len],*point;
string arr[50];
int j=1;

for(int i=0;*(strSourceCode+i)!='\0';i++){
	ch[i]=*(strSourceCode+i);
}
point=strtok(ch,"\\\n");
while(point != NULL){
	arr[j]=point;
	point=strtok(NULL,"\\\n");
	j++;
}

for (int f=1; f<j;f++){
	if (strstr(arr[f].c_str(),fn.c_str())){
		if(!strstr(arr[f].c_str(),sn.c_str())){
			save=f;
		}
	}
}
return save;
}

int main(int argc, char* argv[])
{
	char strFunctionName[]= "func2";
	char str[]= "int func1(){ return 0; }\\n int func2(){ return 1; }\\n int main(int argc, char*argv[]){ return func2(); }\\n ";
	int line=FindFunctionDefn(strFunctionName,str);
	cout<<line;
	return 0;
}
