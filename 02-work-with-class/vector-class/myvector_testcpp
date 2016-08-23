#include "myvector.h"


using namespace std;
using namespace VECTOR::vector;

const double PI = 3.14159265758;

/*randwalk:Drunkard Walk problem*/
int main(int argc, char const *argv[])
{
	srand(time(0));//seed random-number generator
	
	Vector step;
	Vector result(0.0,0.0);
	unsigned long steps = 0;//step counter
	double target_dis;
	double step_dis;
	double direction;

	cout << "Enter target distance(q to quit):";
	while(cin >> target_dis)
	{
		cout << "Enter step length:";
		if(!(cin >> step_dis))
			break;
		while(result.magval < target_dis)
		{
			direction = rand() % 360;
			step.set(step_dis, direction, 'p');
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps, the subject 
			has the following location: \n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval()/steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Enter target distance(q to quit):";
		
	}
	cout << "Bye!\n";



	return 0;
}