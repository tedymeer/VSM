#include<iostream>
#include<fstream>
#include<string.h>
#include <math.h>
#include<bits/stdc++.h>
#include<stdlib.h> 

using namespace std;
struct Res{
	float value;
	int docno;
};
struct docComponent{
	string term;
	float tf_idf;
};
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
 	 struct docComponent queryVector[9546];
	
	 struct docComponent decVector1[9546];
     struct docComponent decVector2[9546];
     struct docComponent decVector3[9546];
     struct docComponent decVector4[9546];
     struct docComponent decVector5[9546];
     struct docComponent decVector6[9546];
     struct docComponent decVector7[9546];
     struct docComponent decVector8[9546];
     struct docComponent decVector9[9546];
     struct docComponent decVector10[9546];
     struct docComponent decVector11[9546];
     struct docComponent decVector12[9546];
     struct docComponent decVector13[9546];
     struct docComponent decVector14[9546];
     struct docComponent decVector15[9546];
     struct docComponent decVector16[9546];
     struct docComponent decVector17[9546];
     struct docComponent decVector18[9546];
     struct docComponent decVector19[9546];
     struct docComponent decVector20[9546];
     struct docComponent decVector21[9546];
     struct docComponent decVector22[9546];
     struct docComponent decVector23[9546];
     struct docComponent decVector24[9546];
     struct docComponent decVector25[9546];
     struct docComponent decVector26[9546];
     struct docComponent decVector27[9546];
     struct docComponent decVector28[9546];
     struct docComponent decVector29[9546];
     struct docComponent decVector30[9546];
     struct docComponent decVector31[9546];
     struct docComponent decVector32[9546];
     struct docComponent decVector33[9546];
     struct docComponent decVector34[9546];
     struct docComponent decVector35[9546];
     struct docComponent decVector36[9546];
     struct docComponent decVector37[9546];
     struct docComponent decVector38[9546];
     struct docComponent decVector39[9546];
     struct docComponent decVector40[9546];
     struct docComponent decVector41[9546];
     struct docComponent decVector42[9546];
     struct docComponent decVector43[9546];
     struct docComponent decVector44[9546];
     struct docComponent decVector45[9546];
     struct docComponent decVector46[9546];
     struct docComponent decVector47[9546];
     struct docComponent decVector48[9546];
     struct docComponent decVector49[9546];
     struct docComponent decVector50[9546];
     
void LoadDocVector(string doc)
{
	int i=0;
	string term="";
	float tfidf =0;
	
  string MYSTRING;
  ifstream infile;
  infile.open(doc.c_str());

  while (!infile.eof()) 
  {
    getline(infile, MYSTRING);
    stringstream ssin(MYSTRING);
    while (ssin.good()){
    ssin >> term >> tfidf;
    
    if(doc=="DocVectors/vectorD1.txt"){decVector1[i].term=term;decVector1[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD2.txt"){decVector2[i].term=term;decVector2[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD3.txt"){decVector3[i].term=term;decVector3[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD4.txt"){decVector4[i].term=term;decVector4[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD5.txt"){decVector5[i].term=term;decVector5[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD6.txt"){decVector6[i].term=term;decVector6[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD7.txt"){decVector7[i].term=term;decVector7[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD8.txt"){decVector8[i].term=term;decVector8[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD9.txt"){decVector9[i].term=term;decVector9[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD10.txt"){decVector10[i].term=term;decVector10[i].tf_idf=tfidf;}
    
    
    if(doc=="DocVectors/vectorD11.txt"){decVector11[i].term=term;decVector11[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD12.txt"){decVector12[i].term=term;decVector12[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD13.txt"){decVector13[i].term=term;decVector13[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD14.txt"){decVector14[i].term=term;decVector14[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD15.txt"){decVector15[i].term=term;decVector15[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD16.txt"){decVector16[i].term=term;decVector16[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD17.txt"){decVector17[i].term=term;decVector17[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD18.txt"){decVector18[i].term=term;decVector18[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD19.txt"){decVector19[i].term=term;decVector19[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD20.txt"){decVector20[i].term=term;decVector20[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD21.txt"){decVector21[i].term=term;decVector21[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD22.txt"){decVector22[i].term=term;decVector22[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD23.txt"){decVector23[i].term=term;decVector23[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD24.txt"){decVector24[i].term=term;decVector24[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD25.txt"){decVector25[i].term=term;decVector25[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD26.txt"){decVector26[i].term=term;decVector26[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD27.txt"){decVector27[i].term=term;decVector27[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD28.txt"){decVector28[i].term=term;decVector28[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD29.txt"){decVector29[i].term=term;decVector29[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD30.txt"){decVector30[i].term=term;decVector30[i].tf_idf=tfidf;}
    
    
    if(doc=="DocVectors/vectorD31.txt"){decVector31[i].term=term;decVector31[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD32.txt"){decVector32[i].term=term;decVector32[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD33.txt"){decVector33[i].term=term;decVector33[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD34.txt"){decVector34[i].term=term;decVector34[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD35.txt"){decVector35[i].term=term;decVector35[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD36.txt"){decVector36[i].term=term;decVector36[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD37.txt"){decVector37[i].term=term;decVector37[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD38.txt"){decVector38[i].term=term;decVector38[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD39.txt"){decVector39[i].term=term;decVector39[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD40.txt"){decVector40[i].term=term;decVector40[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD41.txt"){decVector41[i].term=term;decVector41[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD42.txt"){decVector42[i].term=term;decVector42[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD43.txt"){decVector43[i].term=term;decVector43[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD44.txt"){decVector44[i].term=term;decVector44[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD45.txt"){decVector45[i].term=term;decVector45[i].tf_idf=tfidf;}
    
    if(doc=="DocVectors/vectorD46.txt"){decVector46[i].term=term;decVector46[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD47.txt"){decVector47[i].term=term;decVector47[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD48.txt"){decVector48[i].term=term;decVector48[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD49.txt"){decVector49[i].term=term;decVector49[i].tf_idf=tfidf;}
    if(doc=="DocVectors/vectorD50.txt"){decVector50[i].term=term;decVector50[i].tf_idf=tfidf;}
    }
    if(i==9545)break;
    
    i++;
  }

}
float IDF(string t)
{
	int i=0;
	string term="";
	float idf =0;
	
  string MYSTRING;
  ifstream infile;
  infile.open("IDFDictionary.txt");

  while (!infile.eof()) 
  {
    getline(infile, MYSTRING);
    stringstream ssin(MYSTRING);
    while (ssin.good()){
    ssin >> term >> idf;
    }
    if(t==term){
    	return idf;
	};
    if(i==9545){
    	return idf;
	}
    
    i++;
  }

}
float sim(struct docComponent *queryVector,struct docComponent *docVector){
float sum=0;
	for(int i=0;queryVector[i].term!="";i++)
	{
		string t=queryVector[i].term;
		for(int j=0;j<9546;j++)
		{
			if(t==docVector[j].term)
			{
				sum=sum+queryVector[i].tf_idf*docVector[j].tf_idf;
			}
		}
	}
	return sum;
}

int main(void)
{system("color F1");
		LoadDocVector("DocVectors/vectorD1.txt");
		LoadDocVector("DocVectors/vectorD2.txt");
		LoadDocVector("DocVectors/vectorD3.txt");
		LoadDocVector("DocVectors/vectorD4.txt");
		LoadDocVector("DocVectors/vectorD5.txt");
		LoadDocVector("DocVectors/vectorD6.txt");
		LoadDocVector("DocVectors/vectorD7.txt");
		LoadDocVector("DocVectors/vectorD8.txt");
		LoadDocVector("DocVectors/vectorD9.txt");
		LoadDocVector("DocVectors/vectorD10.txt");
		LoadDocVector("DocVectors/vectorD11.txt");
		LoadDocVector("DocVectors/vectorD12.txt");
		LoadDocVector("DocVectors/vectorD13.txt");
		LoadDocVector("DocVectors/vectorD14.txt");
		LoadDocVector("DocVectors/vectorD15.txt");
		LoadDocVector("DocVectors/vectorD16.txt");
		LoadDocVector("DocVectors/vectorD17.txt");
		LoadDocVector("DocVectors/vectorD18.txt");
		LoadDocVector("DocVectors/vectorD19.txt");
		LoadDocVector("DocVectors/vectorD20.txt");
		LoadDocVector("DocVectors/vectorD21.txt");
		LoadDocVector("DocVectors/vectorD22.txt");
		LoadDocVector("DocVectors/vectorD23.txt");
		LoadDocVector("DocVectors/vectorD24.txt");
		LoadDocVector("DocVectors/vectorD25.txt");
		LoadDocVector("DocVectors/vectorD26.txt");
		LoadDocVector("DocVectors/vectorD27txt");
		LoadDocVector("DocVectors/vectorD28txt");
		LoadDocVector("DocVectors/vectorD29.txt");
		LoadDocVector("DocVectors/vectorD30.txt");
		LoadDocVector("DocVectors/vectorD31.txt");
		LoadDocVector("DocVectors/vectorD32.txt");
		LoadDocVector("DocVectors/vectorD33.txt");
		LoadDocVector("DocVectors/vectorD34.txt");
		LoadDocVector("DocVectors/vectorD35.txt");
		LoadDocVector("DocVectors/vectorD36.txt");
		LoadDocVector("DocVectors/vectorD37.txt");
		LoadDocVector("DocVectors/vectorD38.txt");
		LoadDocVector("DocVectors/vectorD39.txt");
		LoadDocVector("DocVectors/vectorD40.txt");
		LoadDocVector("DocVectors/vectorD41.txt");
		LoadDocVector("DocVectors/vectorD42.txt");
		LoadDocVector("DocVectors/vectorD43.txt");
		LoadDocVector("DocVectors/vectorD44.txt");
		LoadDocVector("DocVectors/vectorD45.txt");
		LoadDocVector("DocVectors/vectorD46.txt");
		LoadDocVector("DocVectors/vectorD47.txt");
		LoadDocVector("DocVectors/vectorD48.txt");
		LoadDocVector("DocVectors/vectorD49.txt");
		LoadDocVector("DocVectors/vectorD50.txt");
	
	
	while(1){
		
		system("cls");
		
		
	string query="";
	cout << "Enter your Query : ";
    getline(cin, query);
	
	stringstream ss(query);
	
	for(int i=0;i<10;i++)
	{
	   queryVector[i].term="";
       queryVector[i].tf_idf=0;
       
	}
   for(int i=0;i<10;i++)
	{
	   ss>>queryVector[i].term;
	}
	
	for(int i=0;queryVector[i].term!="";i++)
	{
		float counter=1;
		string word=queryVector[i].term;
		for(int j=i+1;j<10;j++)
		{
			if(queryVector[j].term==word)
			{
				counter++;
			}
		}
		queryVector[i].tf_idf=counter*IDF(word);
	}
	////
	struct Res result[50];
	
	
result[0].docno=1;
result[1].docno=2;
result[2].docno=3;
result[3].docno=4;
result[4].docno=5;
result[5].docno=6;
result[6].docno=7;
result[7].docno=8;
result[8].docno=9;
result[9].docno=10;
result[10].docno=11;
result[11].docno=12;
result[12].docno=13;
result[13].docno=14;
result[14].docno=15;
result[15].docno=16;
result[16].docno=17;
result[17].docno=18;
result[18].docno=19;
result[19].docno=20;
result[20].docno=21;
result[21].docno=22;
result[22].docno=23;
result[23].docno=24;
result[24].docno=25;
result[25].docno=26;
result[26].docno=27;
result[27].docno=28;
result[28].docno=29;
result[29].docno=30;
result[30].docno=31;
result[31].docno=32;
result[32].docno=33;
result[33].docno=34;
result[34].docno=35;
result[35].docno=36;
result[36].docno=37;
result[37].docno=38;
result[38].docno=39;
result[39].docno=40;
result[40].docno=41;
result[41].docno=42;
result[42].docno=43;
result[43].docno=44;
result[44].docno=45;
result[45].docno=46;
result[46].docno=47;
result[47].docno=48;
result[48].docno=49;
result[49].docno=50;

	result[0].value=sim(queryVector,decVector1);
    result[1].value=sim(queryVector,decVector2);
	result[2].value=sim(queryVector,decVector3);
	result[3].value=sim(queryVector,decVector4);
	result[4].value=sim(queryVector,decVector5);
	result[5].value=sim(queryVector,decVector6);
	result[6].value=sim(queryVector,decVector7);
	result[7].value=sim(queryVector,decVector8);
	result[8].value=sim(queryVector,decVector9);
	result[9].value=sim(queryVector,decVector10);
	result[10].value=sim(queryVector,decVector11);
	result[11].value=sim(queryVector,decVector12);
	result[12].value=sim(queryVector,decVector13);
	result[13].value=sim(queryVector,decVector14);
	result[14].value=sim(queryVector,decVector15);
	result[15].value=sim(queryVector,decVector16);
	result[16].value=sim(queryVector,decVector17);
	result[17].value=sim(queryVector,decVector18);
	result[18].value=sim(queryVector,decVector19);
	result[19].value=sim(queryVector,decVector20);
	result[20].value=sim(queryVector,decVector21);
	result[21].value=sim(queryVector,decVector22);
	result[22].value=sim(queryVector,decVector23);
	result[23].value=sim(queryVector,decVector24);
	result[24].value=sim(queryVector,decVector25);
	result[25].value=sim(queryVector,decVector26);
	result[26].value=sim(queryVector,decVector27);
	result[27].value=sim(queryVector,decVector28);
	result[28].value=sim(queryVector,decVector29);
	result[29].value=sim(queryVector,decVector30);
	result[30].value=sim(queryVector,decVector31);
	result[31].value=sim(queryVector,decVector32);
	result[32].value=sim(queryVector,decVector33);
	result[33].value=sim(queryVector,decVector34);
	result[34].value=sim(queryVector,decVector35);
	result[35].value=sim(queryVector,decVector36);
	result[36].value=sim(queryVector,decVector37);
	result[37].value=sim(queryVector,decVector38);
	result[38].value=sim(queryVector,decVector39);
	result[39].value=sim(queryVector,decVector40);
	result[40].value=sim(queryVector,decVector41);
	result[41].value=sim(queryVector,decVector42);
	result[42].value=sim(queryVector,decVector43);
	result[43].value=sim(queryVector,decVector44);
	result[44].value=sim(queryVector,decVector45);
	result[45].value=sim(queryVector,decVector46);
	result[46].value=sim(queryVector,decVector47);
	result[47].value=sim(queryVector,decVector48);
	result[48].value=sim(queryVector,decVector49);
	result[49].value=sim(queryVector,decVector50);
	
	////
	int n=50;
for (int i = 0; i < n-1; i++)
   {
     bool swapped = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (result[j].value < result[j+1].value)
        {
        	struct Res temp;
           
		   temp.value=result[j].value;
		   temp.docno=result[j].docno;
		   
		   result[j].value=result[j+1].value;
           result[j].docno=result[j+1].docno;
           
		   result[j+1].value=temp.value;
           result[j+1].docno=temp.docno;
           
		   swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
	
	
//	for(int i=0;i<50;i++)
//	{
//		cout<<result[i].docno<<" "<<result[i].value<<endl;
//	}
	if(query=="0")break;
	////
	int N;
	struct Res fres[50];
	for(int i=0;result[i].value!=0;i++)
	{
		fres[i].docno=result[i].docno;
		fres[i].value=result[i].value;
		N=i;
	}
	
for (int i = 0; i < N-1; i++)
   {
     bool swapped = false;
     for (int j = 0; j < N-i-1; j++)
     {
        if (fres[j].docno > fres[j+1].docno)
        {
        	struct Res temp;
           
		   temp.value=fres[j].value;
		   temp.docno=fres[j].docno;
		   
		   fres[j].value=fres[j+1].value;
           fres[j].docno=fres[j+1].docno;
           
		   fres[j+1].value=temp.value;
           fres[j+1].docno=temp.docno;
           
		   swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }/////////
	for(int i=0;i<N;i++)
	{
		cout<<fres[i].docno<<" ";
	}
	////
	cout<<endl;
	system("pause");
}
	return 0;
}
