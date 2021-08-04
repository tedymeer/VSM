#include<iostream>
#include<fstream>
#include<string.h>
#include <math.h> 
using namespace std;

struct docComponent{
	string term;
	float tf_idf;
};
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
    
string docs [50] ={"processedDocs/1.txt","processedDocs/2.txt","processedDocs/3.txt","processedDocs/4.txt","processedDocs/5.txt",
"processedDocs/6.txt","processedDocs/7.txt","processedDocs/8.txt","processedDocs/9.txt","processedDocs/10.txt",
"processedDocs/11.txt","processedDocs/12.txt","processedDocs/13.txt","processedDocs/14.txt","processedDocs/15.txt",
"processedDocs/16.txt","processedDocs/17.txt","processedDocs/18.txt","processedDocs/19.txt","processedDocs/20.txt",
"processedDocs/21.txt","processedDocs/22.txt","processedDocs/23.txt","processedDocs/24.txt","processedDocs/25.txt",
"processedDocs/26.txt","processedDocs/27.txt","processedDocs/28.txt","processedDocs/29.txt","processedDocs/30.txt",
"processedDocs/31.txt","processedDocs/32.txt","processedDocs/33.txt","processedDocs/34.txt","processedDocs/35.txt",
"processedDocs/36.txt","processedDocs/37.txt","processedDocs/38.txt","processedDocs/39.txt","processedDocs/40.txt",
"processedDocs/41.txt","processedDocs/42.txt","processedDocs/43.txt","processedDocs/44.txt","processedDocs/45.txt",
"processedDocs/46.txt","processedDocs/47.txt","processedDocs/48.txt","processedDocs/49.txt","processedDocs/50.txt"};
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
void initDocVectors(void)
{

	for(int i=0;i<9546;i++)
	{
	   decVector1[i].term="";
       decVector2[i].term="";
       decVector3[i].term="";
       decVector4[i].term="";
       decVector5[i].term="";
       decVector6[i].term="";
       decVector7[i].term="";
       decVector8[i].term="";
       decVector9[i].term="";
      decVector10[i].term="";
      decVector11[i].term="";
      decVector12[i].term="";
      decVector13[i].term="";
      decVector14[i].term="";
      decVector15[i].term="";
      decVector16[i].term="";
      decVector17[i].term="";
      decVector18[i].term="";
      decVector19[i].term="";
      decVector20[i].term="";
      decVector21[i].term="";
      decVector22[i].term="";
      decVector23[i].term="";
      decVector24[i].term="";
      decVector25[i].term="";
      decVector26[i].term="";
      decVector27[i].term="";
      decVector28[i].term="";
      decVector29[i].term="";
      decVector30[i].term="";
      decVector31[i].term="";
      decVector32[i].term="";
      decVector33[i].term="";
      decVector34[i].term="";
      decVector35[i].term="";
      decVector36[i].term="";
      decVector37[i].term="";
      decVector38[i].term="";
      decVector39[i].term="";
      decVector40[i].term="";
      decVector41[i].term="";
      decVector42[i].term="";
      decVector43[i].term="";
      decVector44[i].term="";
      decVector45[i].term="";
      decVector46[i].term="";
      decVector47[i].term="";
      decVector48[i].term="";
      decVector49[i].term="";
      decVector50[i].term="";
     
      
      ///
        decVector1[i].tf_idf=0;
       decVector2[i].tf_idf=0;
       decVector3[i].tf_idf=0;
       decVector4[i].tf_idf=0;
       decVector5[i].tf_idf=0;
       decVector6[i].tf_idf=0;
       decVector7[i].tf_idf=0;
       decVector8[i].tf_idf=0;
       decVector9[i].tf_idf=0;
      decVector10[i].tf_idf=0;
      decVector11[i].tf_idf=0;
      decVector12[i].tf_idf=0;
      decVector13[i].tf_idf=0;
      decVector14[i].tf_idf=0;
      decVector15[i].tf_idf=0;
      decVector16[i].tf_idf=0;
      decVector17[i].tf_idf=0;
      decVector18[i].tf_idf=0;
      decVector19[i].tf_idf=0;
      decVector20[i].tf_idf=0;
      decVector21[i].tf_idf=0;
      decVector22[i].tf_idf=0;
      decVector23[i].tf_idf=0;
      decVector24[i].tf_idf=0;
      decVector25[i].tf_idf=0;
      decVector26[i].tf_idf=0;
      decVector27[i].tf_idf=0;
      decVector28[i].tf_idf=0;
      decVector29[i].tf_idf=0;
      decVector30[i].tf_idf=0;
      decVector31[i].tf_idf=0;
      decVector32[i].tf_idf=0;
      decVector33[i].tf_idf=0;
      decVector34[i].tf_idf=0;
      decVector35[i].tf_idf=0;
      decVector36[i].tf_idf=0;
      decVector37[i].tf_idf=0;
      decVector38[i].tf_idf=0;
      decVector39[i].tf_idf=0;
      decVector40[i].tf_idf=0;
      decVector41[i].tf_idf=0;
      decVector42[i].tf_idf=0;
      decVector43[i].tf_idf=0;
      decVector44[i].tf_idf=0;
      decVector45[i].tf_idf=0;
      decVector46[i].tf_idf=0;
      decVector47[i].tf_idf=0;
      decVector48[i].tf_idf=0;
      decVector49[i].tf_idf=0;
      decVector50[i].tf_idf=0;
	}
	ifstream file("dictionary.txt");if(file.is_open())
{for(int i = 0; i < 9546; ++i){ file >> decVector1[i].term;}}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector2[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector3[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector4[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector5[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector6[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector7[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector8[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector9[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector10[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector11[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector12[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector13[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector14[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector15[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector16[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector17[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector18[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector19[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector20[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector21[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector22[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector23[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector24[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector25[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector26[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector27[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector28[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector29[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector30[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector31[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector32[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector33[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector34[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector35[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector36[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector37[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector38[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector39[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector40[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector41[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector42[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector43[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector44[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector45[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector46[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector47[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector48[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector49[i].term;}file.clear();file.seekg(0, ios::beg);
for(int i = 0; i < 9546; ++i){ file >> decVector50[i].term;}file.clear();file.seekg(0, ios::beg);
file.close();





for(int i = 0; i < 9546; i++){cout<<"1"<<endl;string w="";float occur=0;w=decVector1[i].term;occur=getWordOccurence(w,"processedDocs/1.txt");decVector1[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector2[i].term;occur=getWordOccurence(w,"processedDocs/2.txt");decVector2[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector3[i].term;occur=getWordOccurence(w,"processedDocs/3.txt");decVector3[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector4[i].term;occur=getWordOccurence(w,"processedDocs/4.txt");decVector4[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector5[i].term;occur=getWordOccurence(w,"processedDocs/5.txt");decVector5[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector6[i].term;occur=getWordOccurence(w,"processedDocs/6.txt");decVector6[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector7[i].term;occur=getWordOccurence(w,"processedDocs/7.txt");decVector7[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector8[i].term;occur=getWordOccurence(w,"processedDocs/8.txt");decVector8[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector9[i].term;occur=getWordOccurence(w,"processedDocs/9.txt");decVector9[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector10[i].term;occur=getWordOccurence(w,"processedDocs/10.txt");decVector10[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector11[i].term;occur=getWordOccurence(w,"processedDocs/11.txt");decVector11[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector12[i].term;occur=getWordOccurence(w,"processedDocs/12.txt");decVector12[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector13[i].term;occur=getWordOccurence(w,"processedDocs/13.txt");decVector13[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector14[i].term;occur=getWordOccurence(w,"processedDocs/14.txt");decVector14[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector15[i].term;occur=getWordOccurence(w,"processedDocs/15.txt");decVector15[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){cout<<"2"<<endl;string w="";float occur=0;w=decVector16[i].term;occur=getWordOccurence(w,"processedDocs/16.txt");decVector16[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector17[i].term;occur=getWordOccurence(w,"processedDocs/17.txt");decVector17[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector18[i].term;occur=getWordOccurence(w,"processedDocs/18.txt");decVector18[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector19[i].term;occur=getWordOccurence(w,"processedDocs/19.txt");decVector19[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector20[i].term;occur=getWordOccurence(w,"processedDocs/20.txt");decVector20[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector21[i].term;occur=getWordOccurence(w,"processedDocs/21.txt");decVector21[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector22[i].term;occur=getWordOccurence(w,"processedDocs/22.txt");decVector22[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector23[i].term;occur=getWordOccurence(w,"processedDocs/23.txt");decVector23[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector24[i].term;occur=getWordOccurence(w,"processedDocs/24.txt");decVector24[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector25[i].term;occur=getWordOccurence(w,"processedDocs/25.txt");decVector25[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector26[i].term;occur=getWordOccurence(w,"processedDocs/26.txt");decVector26[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector27[i].term;occur=getWordOccurence(w,"processedDocs/27.txt");decVector27[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector28[i].term;occur=getWordOccurence(w,"processedDocs/28.txt");decVector28[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector29[i].term;occur=getWordOccurence(w,"processedDocs/29.txt");decVector29[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector30[i].term;occur=getWordOccurence(w,"processedDocs/30.txt");decVector30[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector31[i].term;occur=getWordOccurence(w,"processedDocs/31.txt");decVector31[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector32[i].term;occur=getWordOccurence(w,"processedDocs/32.txt");decVector32[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector33[i].term;occur=getWordOccurence(w,"processedDocs/33.txt");decVector33[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector34[i].term;occur=getWordOccurence(w,"processedDocs/34.txt");decVector34[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector35[i].term;occur=getWordOccurence(w,"processedDocs/35.txt");decVector35[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector36[i].term;occur=getWordOccurence(w,"processedDocs/36.txt");decVector36[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector37[i].term;occur=getWordOccurence(w,"processedDocs/37.txt");decVector37[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector38[i].term;occur=getWordOccurence(w,"processedDocs/38.txt");decVector38[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector39[i].term;occur=getWordOccurence(w,"processedDocs/39.txt");decVector39[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector40[i].term;occur=getWordOccurence(w,"processedDocs/40.txt");decVector40[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector41[i].term;occur=getWordOccurence(w,"processedDocs/41.txt");decVector41[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector42[i].term;occur=getWordOccurence(w,"processedDocs/42.txt");decVector42[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector43[i].term;occur=getWordOccurence(w,"processedDocs/43.txt");decVector43[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector44[i].term;occur=getWordOccurence(w,"processedDocs/44.txt");decVector44[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector45[i].term;occur=getWordOccurence(w,"processedDocs/45.txt");decVector45[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector46[i].term;occur=getWordOccurence(w,"processedDocs/46.txt");decVector46[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector47[i].term;occur=getWordOccurence(w,"processedDocs/47.txt");decVector47[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector48[i].term;occur=getWordOccurence(w,"processedDocs/48.txt");decVector48[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){string w="";float occur=0;w=decVector49[i].term;occur=getWordOccurence(w,"processedDocs/49.txt");decVector49[i].tf_idf=occur*idf(w);}
for(int i = 0; i < 9546; ++i){cout<<"3"<<endl;string w="";float occur=0;w=decVector50[i].term;occur=getWordOccurence(w,"processedDocs/50.txt");decVector50[i].tf_idf=occur*idf(w);}


cout<<"Done"<<endl;


ofstream myfile1 ("DocVectors/vectorD1.txt");if(myfile1.is_open()){for(int i=0;i<9546;i++){cout<<"d1"<<endl;myfile1<<decVector1[i].term <<" "<<decVector1[i].tf_idf<<endl;}}
ofstream myfile2 ("DocVectors/vectorD2.txt");if(myfile2.is_open()){for(int i=0;i<9546;i++){myfile2<<decVector2[i].term <<" "<<decVector2[i].tf_idf<<endl;}}
ofstream myfile3 ("DocVectors/vectorD3.txt");if(myfile3.is_open()){for(int i=0;i<9546;i++){myfile3<<decVector3[i].term <<" "<<decVector3[i].tf_idf<<endl;}}
ofstream myfile4 ("DocVectors/vectorD4.txt");if(myfile4.is_open()){for(int i=0;i<9546;i++){cout<<"d2"<<endl;myfile4<<decVector4[i].term <<" "<<decVector4[i].tf_idf<<endl;}}
ofstream myfile5 ("DocVectors/vectorD5.txt");if(myfile5.is_open()){for(int i=0;i<9546;i++){myfile5<<decVector5[i].term <<" "<<decVector5[i].tf_idf<<endl;}}
ofstream myfile6 ("DocVectors/vectorD6.txt");if(myfile6.is_open()){for(int i=0;i<9546;i++){myfile6<<decVector6[i].term <<" "<<decVector6[i].tf_idf<<endl;}}
ofstream myfile7 ("DocVectors/vectorD7.txt");if(myfile7.is_open()){for(int i=0;i<9546;i++){myfile7<<decVector7[i].term <<" "<<decVector7[i].tf_idf<<endl;}}
ofstream myfile8 ("DocVectors/vectorD8.txt");if(myfile8.is_open()){for(int i=0;i<9546;i++){myfile8<<decVector8[i].term <<" "<<decVector8[i].tf_idf<<endl;}}
ofstream myfile9 ("DocVectors/vectorD9.txt");if(myfile9.is_open()){for(int i=0;i<9546;i++){myfile9<<decVector9[i].term <<" "<<decVector9[i].tf_idf<<endl;}}
ofstream myfile10 ("DocVectors/vectorD10.txt");if(myfile10.is_open()){for(int i=0;i<9546;i++){myfile10<<decVector10[i].term <<" "<<decVector10[i].tf_idf<<endl;}}
ofstream myfile11 ("DocVectors/vectorD11.txt");if(myfile11.is_open()){for(int i=0;i<9546;i++){myfile11<<decVector11[i].term <<" "<<decVector11[i].tf_idf<<endl;}}
ofstream myfile12 ("DocVectors/vectorD12.txt");if(myfile12.is_open()){for(int i=0;i<9546;i++){myfile12<<decVector12[i].term <<" "<<decVector12[i].tf_idf<<endl;}}
ofstream myfile13 ("DocVectors/vectorD13.txt");if(myfile13.is_open()){for(int i=0;i<9546;i++){myfile13<<decVector13[i].term <<" "<<decVector13[i].tf_idf<<endl;}}
ofstream myfile14 ("DocVectors/vectorD14.txt");if(myfile14.is_open()){for(int i=0;i<9546;i++){myfile14<<decVector14[i].term <<" "<<decVector14[i].tf_idf<<endl;}}
ofstream myfile15 ("DocVectors/vectorD15.txt");if(myfile15.is_open()){for(int i=0;i<9546;i++){myfile15<<decVector15[i].term <<" "<<decVector15[i].tf_idf<<endl;}}
ofstream myfile16 ("DocVectors/vectorD16.txt");if(myfile16.is_open()){for(int i=0;i<9546;i++){myfile16<<decVector16[i].term <<" "<<decVector16[i].tf_idf<<endl;}}
ofstream myfile17 ("DocVectors/vectorD17.txt");if(myfile17.is_open()){for(int i=0;i<9546;i++){myfile17<<decVector17[i].term <<" "<<decVector17[i].tf_idf<<endl;}}
ofstream myfile18 ("DocVectors/vectorD18.txt");if(myfile18.is_open()){for(int i=0;i<9546;i++){myfile18<<decVector18[i].term <<" "<<decVector18[i].tf_idf<<endl;}}
ofstream myfile19 ("DocVectors/vectorD19.txt");if(myfile19.is_open()){for(int i=0;i<9546;i++){myfile19<<decVector19[i].term <<" "<<decVector19[i].tf_idf<<endl;}}
ofstream myfile20 ("DocVectors/vectorD20.txt");if(myfile20.is_open()){for(int i=0;i<9546;i++){myfile20<<decVector20[i].term <<" "<<decVector20[i].tf_idf<<endl;}}
ofstream myfile21 ("DocVectors/vectorD21.txt");if(myfile21.is_open()){for(int i=0;i<9546;i++){myfile21<<decVector21[i].term <<" "<<decVector21[i].tf_idf<<endl;}}
ofstream myfile22 ("DocVectors/vectorD22.txt");if(myfile22.is_open()){for(int i=0;i<9546;i++){myfile22<<decVector22[i].term <<" "<<decVector22[i].tf_idf<<endl;}}
ofstream myfile23 ("DocVectors/vectorD23.txt");if(myfile23.is_open()){for(int i=0;i<9546;i++){myfile23<<decVector23[i].term <<" "<<decVector23[i].tf_idf<<endl;}}
ofstream myfile24 ("DocVectors/vectorD24.txt");if(myfile24.is_open()){for(int i=0;i<9546;i++){myfile24<<decVector24[i].term <<" "<<decVector24[i].tf_idf<<endl;}}
ofstream myfile25 ("DocVectors/vectorD25.txt");if(myfile25.is_open()){for(int i=0;i<9546;i++){myfile25<<decVector25[i].term <<" "<<decVector25[i].tf_idf<<endl;}}
ofstream myfile26 ("DocVectors/vectorD26.txt");if(myfile26.is_open()){for(int i=0;i<9546;i++){myfile26<<decVector26[i].term <<" "<<decVector26[i].tf_idf<<endl;}}
ofstream myfile27 ("DocVectors/vectorD27.txt");if(myfile27.is_open()){for(int i=0;i<9546;i++){myfile27<<decVector27[i].term <<" "<<decVector27[i].tf_idf<<endl;}}
ofstream myfile28 ("DocVectors/vectorD28.txt");if(myfile28.is_open()){for(int i=0;i<9546;i++){myfile28<<decVector28[i].term <<" "<<decVector28[i].tf_idf<<endl;}}
ofstream myfile29 ("DocVectors/vectorD29.txt");if(myfile29.is_open()){for(int i=0;i<9546;i++){myfile29<<decVector29[i].term <<" "<<decVector29[i].tf_idf<<endl;}}
ofstream myfile30 ("DocVectors/vectorD30.txt");if(myfile30.is_open()){for(int i=0;i<9546;i++){myfile30<<decVector30[i].term <<" "<<decVector30[i].tf_idf<<endl;}}
ofstream myfile31 ("DocVectors/vectorD31.txt");if(myfile31.is_open()){for(int i=0;i<9546;i++){myfile31<<decVector31[i].term <<" "<<decVector31[i].tf_idf<<endl;}}
ofstream myfile32 ("DocVectors/vectorD32.txt");if(myfile32.is_open()){for(int i=0;i<9546;i++){myfile32<<decVector32[i].term <<" "<<decVector32[i].tf_idf<<endl;}}
ofstream myfile33 ("DocVectors/vectorD33.txt");if(myfile33.is_open()){for(int i=0;i<9546;i++){myfile33<<decVector33[i].term <<" "<<decVector33[i].tf_idf<<endl;}}
ofstream myfile34 ("DocVectors/vectorD34.txt");if(myfile34.is_open()){for(int i=0;i<9546;i++){myfile34<<decVector34[i].term <<" "<<decVector34[i].tf_idf<<endl;}}
ofstream myfile35 ("DocVectors/vectorD35.txt");if(myfile35.is_open()){for(int i=0;i<9546;i++){myfile35<<decVector35[i].term <<" "<<decVector35[i].tf_idf<<endl;}}
ofstream myfile36 ("DocVectors/vectorD36.txt");if(myfile36.is_open()){for(int i=0;i<9546;i++){myfile36<<decVector36[i].term <<" "<<decVector36[i].tf_idf<<endl;}}
ofstream myfile37 ("DocVectors/vectorD37.txt");if(myfile37.is_open()){for(int i=0;i<9546;i++){myfile37<<decVector37[i].term <<" "<<decVector37[i].tf_idf<<endl;}}
ofstream myfile38 ("DocVectors/vectorD38.txt");if(myfile38.is_open()){for(int i=0;i<9546;i++){myfile38<<decVector38[i].term <<" "<<decVector38[i].tf_idf<<endl;}}
ofstream myfile39 ("DocVectors/vectorD39.txt");if(myfile39.is_open()){for(int i=0;i<9546;i++){myfile39<<decVector39[i].term <<" "<<decVector39[i].tf_idf<<endl;}}
ofstream myfile40 ("DocVectors/vectorD40.txt");if(myfile40.is_open()){for(int i=0;i<9546;i++){myfile40<<decVector40[i].term <<" "<<decVector40[i].tf_idf<<endl;}}
ofstream myfile41 ("DocVectors/vectorD41.txt");if(myfile41.is_open()){for(int i=0;i<9546;i++){myfile41<<decVector41[i].term <<" "<<decVector41[i].tf_idf<<endl;}}
ofstream myfile42 ("DocVectors/vectorD42.txt");if(myfile42.is_open()){for(int i=0;i<9546;i++){myfile42<<decVector42[i].term <<" "<<decVector42[i].tf_idf<<endl;}}
ofstream myfile43 ("DocVectors/vectorD43.txt");if(myfile43.is_open()){for(int i=0;i<9546;i++){myfile43<<decVector43[i].term <<" "<<decVector43[i].tf_idf<<endl;}}
ofstream myfile44 ("DocVectors/vectorD44.txt");if(myfile44.is_open()){for(int i=0;i<9546;i++){myfile44<<decVector44[i].term <<" "<<decVector44[i].tf_idf<<endl;}}
ofstream myfile45 ("DocVectors/vectorD45.txt");if(myfile45.is_open()){for(int i=0;i<9546;i++){myfile45<<decVector45[i].term <<" "<<decVector45[i].tf_idf<<endl;}}
ofstream myfile46 ("DocVectors/vectorD46.txt");if(myfile46.is_open()){for(int i=0;i<9546;i++){myfile46<<decVector46[i].term <<" "<<decVector46[i].tf_idf<<endl;}}
ofstream myfile47 ("DocVectors/vectorD47.txt");if(myfile47.is_open()){for(int i=0;i<9546;i++){myfile47<<decVector47[i].term <<" "<<decVector47[i].tf_idf<<endl;}}
ofstream myfile48 ("DocVectors/vectorD48.txt");if(myfile48.is_open()){for(int i=0;i<9546;i++){myfile48<<decVector48[i].term <<" "<<decVector48[i].tf_idf<<endl;}}
ofstream myfile49 ("DocVectors/vectorD49.txt");if(myfile49.is_open()){for(int i=0;i<9546;i++){myfile49<<decVector49[i].term <<" "<<decVector49[i].tf_idf<<endl;}}
ofstream myfile50 ("DocVectors/vectorD50.txt");if(myfile50.is_open()){for(int i=0;i<9546;i++){myfile50<<decVector50[i].term <<" "<<decVector50[i].tf_idf<<endl;}}
	
	
	
myfile1.close();
myfile2.close();
myfile3.close();
myfile4.close();
myfile5.close();
myfile6.close();
myfile7.close();
myfile8.close();
myfile9.close();
myfile10.close();
myfile11.close();
myfile12.close();
myfile13.close();
myfile14.close();
myfile15.close();
myfile16.close();
myfile17.close();
myfile18.close();
myfile19.close();
myfile20.close();
myfile21.close();
myfile22.close();
myfile23.close();
myfile24.close();
myfile25.close();
myfile26.close();
myfile27.close();
myfile28.close();
myfile29.close();
myfile30.close();
myfile31.close();
myfile32.close();
myfile33.close();
myfile34.close();
myfile35.close();
myfile36.close();
myfile37.close();
myfile38.close();
myfile39.close();
myfile40.close();
myfile41.close();
myfile42.close();
myfile43.close();
myfile44.close();
myfile45.close();
myfile46.close();
myfile47.close();
myfile48.close();
myfile49.close();
myfile50.close();
}


int main()
{
	initDocVectors();

    return 0;

}



