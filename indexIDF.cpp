#include<iostream>
#include<fstream>
#include<string.h>
#include <math.h> 

#include<bits/stdc++.h>

#include<stdlib.h>
using namespace std;
 
bool isPresent(string term,string doc)
{
ifstream infile(doc.c_str());
bool tag=false;
string Word;
//Searches word by word;
do 
{
	getline(infile,Word);

//check if word matches;
if(Word==term)
{
   tag=true;
   return tag;
}
} while(!infile.eof());

	return tag;
}
float idf(string term)
{
float count=0;

if(isPresent(term,"processedDocs/1.txt")){count++;}
if(isPresent(term,"processedDocs/2.txt")){count++;}
if(isPresent(term,"processedDocs/3.txt")){count++;}
if(isPresent(term,"processedDocs/4.txt")){count++;}
if(isPresent(term,"processedDocs/5.txt")){count++;}
if(isPresent(term,"processedDocs/6.txt")){count++;}
if(isPresent(term,"processedDocs/7.txt")){count++;}
if(isPresent(term,"processedDocs/8.txt")){count++;}
if(isPresent(term,"processedDocs/9.txt")){count++;}
if(isPresent(term,"processedDocs/10.txt")){count++;}
if(isPresent(term,"processedDocs/11.txt")){count++;}
if(isPresent(term,"processedDocs/12.txt")){count++;}
if(isPresent(term,"processedDocs/13.txt")){count++;}
if(isPresent(term,"processedDocs/14.txt")){count++;}
if(isPresent(term,"processedDocs/15.txt")){count++;}
if(isPresent(term,"processedDocs/16.txt")){count++;}
if(isPresent(term,"processedDocs/17.txt")){count++;}
if(isPresent(term,"processedDocs/18.txt")){count++;}
if(isPresent(term,"processedDocs/19.txt")){count++;}
if(isPresent(term,"processedDocs/20.txt")){count++;}
if(isPresent(term,"processedDocs/21.txt")){count++;}
if(isPresent(term,"processedDocs/22.txt")){count++;}
if(isPresent(term,"processedDocs/23.txt")){count++;}
if(isPresent(term,"processedDocs/24.txt")){count++;}
if(isPresent(term,"processedDocs/25.txt")){count++;}
if(isPresent(term,"processedDocs/26.txt")){count++;}
if(isPresent(term,"processedDocs/27.txt")){count++;}
if(isPresent(term,"processedDocs/28.txt")){count++;}
if(isPresent(term,"processedDocs/29.txt")){count++;}
if(isPresent(term,"processedDocs/30.txt")){count++;}
if(isPresent(term,"processedDocs/31.txt")){count++;}
if(isPresent(term,"processedDocs/32.txt")){count++;}
if(isPresent(term,"processedDocs/33.txt")){count++;}
if(isPresent(term,"processedDocs/34.txt")){count++;}
if(isPresent(term,"processedDocs/35.txt")){count++;}
if(isPresent(term,"processedDocs/36.txt")){count++;}
if(isPresent(term,"processedDocs/37.txt")){count++;}
if(isPresent(term,"processedDocs/38.txt")){count++;}
if(isPresent(term,"processedDocs/39.txt")){count++;}
if(isPresent(term,"processedDocs/40.txt")){count++;}
if(isPresent(term,"processedDocs/41.txt")){count++;}
if(isPresent(term,"processedDocs/42.txt")){count++;}
if(isPresent(term,"processedDocs/43.txt")){count++;}
if(isPresent(term,"processedDocs/44.txt")){count++;}
if(isPresent(term,"processedDocs/45.txt")){count++;}
if(isPresent(term,"processedDocs/46.txt")){count++;}
if(isPresent(term,"processedDocs/47.txt")){count++;}
if(isPresent(term,"processedDocs/48.txt")){count++;}
if(isPresent(term,"processedDocs/49.txt")){count++;}
if(isPresent(term,"processedDocs/50.txt")){count++;}


return log(count)/50;

}

float getWordOccurence(string word,string docName)
{
	
	ifstream fin(docName.c_str()); //opening text file
    
     float count=0;
     string ch,c;

	 c=word;

     while(fin)
     {
      fin>>ch;
      if(ch==c)
       count++;
     }

     fin.close(); //closing file
	
	return count;
}
int main(void)
{
		int i=0;
	string term="";

	
  string MYSTRING;
  ifstream infile;
  infile.open("dictionary.txt");
ofstream myfile ("IDFDictionary.txt");
  while (!infile.eof()) 
  {
    getline(infile, MYSTRING);
    stringstream ssin(MYSTRING);
    while (ssin.good()){
    ssin >> term;
    
    float IDF=idf(term);
    
	
	myfile<<term<<" "<<IDF<<endl;

	}
	if(i==9545)break;
    
    i++;
    }
myfile.close();
  }


