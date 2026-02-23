#include <iostream>
using namespace std;

class StudentGrades
{
private:
    float grade[5];
    int count = 0;
    string name;

public:
    bool addGrade(float g)
    {
        if (count >= 5)
		{
			cout<<"Out of List Grade cant add"<<endl;
		 	return false;
		}        // no more space
        if (g < 0 || g > 100)
		{
			cout<<"Invalid Grade"<<endl;
		 	return false;  // invalid grade
		}
        grade[count] = g;
        count++;
        return true;
    }

    float getAverage()
    {
        if (count == 0) return 0;

        float sum = 0.0;
        for (int i = 0; i < count; i++)
        {
            sum += grade[i];
        }
        return sum / count;
    }

    void printReport()
    {
    	cout << "Enter name: ";
        cin >> name;
    	cout<<"=============="<<endl;
    	cout<<"Student Report:"<<endl;
    	cout<<"=============="<<endl;
        cout << "Name: " << name << endl;
        for(int i=0; i<count; i++)
        {
        	cout<< "Grade: "<<grade[i]<<endl;
        }
        cout << "Average: " << getAverage() << endl;
    }
};

int main()
{
    StudentGrades g1;

    g1.addGrade(85);
    g1.addGrade(90);
    g1.addGrade(78);
    g1.addGrade(92);
    g1.addGrade(120);
    g1.addGrade(88);

    g1.printReport();

    return 0;
}
