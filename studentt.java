class student
{  
	void name_roll(String array,String roll)
	
	    { 
	     System.out.print("name="+array);
	     System.out.println("::roll="+roll);
		 System.out.println();

     	}
		
	public static void main(String[] args) 
	{    
	          int i;
		student y=new student();
		String array[]={ 
                                                 "shahnawaz",
						   "shahbaz",
							  "luppo",
		                 };
         String roll[]={
		                 "16-DCS-060",
							 "16-Dcs-055",
							 "16-DCS-054",
						 };
		for(i=0;i<3;i++)
		{
           y.name_roll(array[i],roll[i]);
		}


	}
}
