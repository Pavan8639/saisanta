#include<iostream>
using namespace std;
//static int reindeer;
// int N_REINDEER;
class Main{
	public:
	void Santa(int reindeer, int N_REINDEER,int elves){
		cout<<"hooo! I am here Welcome all of you"<<endl;
		
		
		while(N_REINDEER!=9)	
		{
		
			sem_wait();
		sem_mutex();
	}
		if (reindeer == N_REINDEER)
		{
			printf("Santa Claus: preparing sleigh\n");
			for (int r = 0; r < N_REINDEER; r++){ 
			}
				//sem_post();
		//	printf("Santa Claus: make all kids in the world happy\n");
			reindeer = 0;
		}
		if (elves == 3)
		{
			printf("Santa Claus: helping elves\n");
		}
	
	else{
		
		sem_post_mutex();
}
	
	}
	void sem_wait()
	{
		cout<<"All Reindeers are not get back so let santa to sleep"<<endl;
	}
    void sem_mutex()
    {
    	cout<<"someone has locked"<<endl;
	}
	void sem_post_mutex()
	{
		cout<<"eleves are not in the group of 3"<<endl;
	}
	void Reeindeer(int date,int s,int n){
		while(date!=24&&s==1){
			date++;
			s++;
		}
		
			sem_wait();
			switch(n)
			{
				case 1:
				   cout<<"1st reindeer only arrives tosanta"<<endl;
				   break;
				case 2:
				   cout<<"2nd reindeer arrives to santa"<<endl;
				   break;
			    case 3:
			       cout<<"3rd reindeer arrives to santa"<<endl;
			    case 4:
			       cout<<" 4th reindeer arrives to santa"<<endl;
			       break;
			    case 9:
			        cout<<"9th reindeer is last one to wake up santa"<<endl;
			        break;
			        default:
			        	cout<<"All reindeers has not arrived so santa will sleep "<<endl;
					
			}
		
		
		
		
		
	}
	void wait_others()
	{
		cout<<"elf has to make group until wait for some time"<<endl;
	}
	void question()
	{
		cout<<"santa has to answer the questions "<<endl;
	}
		void elf(int pro_ELF_count)
		{

			
	
		pro_ELF_count++;
	if(pro_ELF_count<3){
		
	wait_others();
	}
		else if(pro_ELF_count=3)
		{
			cout<<"group of 3 is solved rest are in wait"<<endl;
			question();
			pro_ELF_count-=3;
		}
		else {
			cout<<"see santa"<<endl;
		}
	for(int i=0;i< pro_ELF_count;i++)
	{
		cout<<"solve the problem and get back to the work"<<endl;
	}
			
		
	}
};
int main()
{
	int i,j,date1,s1,n1,prob;
	cout<<"welcome to the year of 2020 christmas"<<endl;
	cout<<"Let us Wake UP Santa by entering 2 numbers  "<<endl;
	cout<<"1.No of Reindeers are back"<<endl<<"2.No of Elves has problems"<<endl;
	cin>>i>>j;
	Main m;
	m.Santa(i,9,j);
	cout<<"Enter date to know the vacation region of reindeer"<<endl<<"2.enter a number to south or north"<<endl<<" 3.no of reindeers arrival";
	cin>>i>>s1>>n1;
	m.Reeindeer(date1,s1,n1);
	cout<<"to Encounter the problems let us enter no of probs"<<endl;
	cin>>prob;
	m.elf(prob);
}
