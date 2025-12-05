#include<iostream>
using namespace std;
class movie{
    public:
            string title;
            string genre;
            int releaseyear;

            void display()
            {
                cout<<"movie is:"<<title<<endl;
                cout<<"genre is:"<<genre<<endl;
                cout<<"releaseyear is:"<<releaseyear<<endl;
                cout<<endl;
                
            }

};
int main()
{
    movie r[3];
    r[0].title = "Jurassic World Rebirth";
    r[0].genre = "Action";
    r[0].releaseyear = 2025;

    r[1].title = "Avengers 5";
    r[1].genre = "Superhero";
    r[1].releaseyear = 2026;

    r[2].title = "kabir singh";
    r[2].genre = "romantic";
    r[2].releaseyear = 2027;

   for(int i=0;i<3;i++) 
   {
    r[i].display();
   }
return 0;
}