int fact(int num,int res){
	res=res*num;
	if(num-1!=0)
	{
		return fact((num-1),res); 
	}
}
