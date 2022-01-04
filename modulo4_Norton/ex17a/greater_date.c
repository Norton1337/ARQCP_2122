unsigned int greater_date(unsigned int date1, unsigned int date2){

	unsigned getYears = 0;
	for (unsigned i=8; i<=23; i++)
		getYears =  getYears | (1 << i);
	
	if( (getYears & date1) > (getYears & date2))
		return date1;
	else if( (getYears & date2) > (getYears & date1))
		return date2;
	
	unsigned getMonths = 0;
	for (unsigned i=24; i<=31; i++)
		getMonths |= 1 << i;
   
	if( (getMonths & date1) > (getMonths & date2))
		return date1;
	else if( (getMonths & date2) > (getMonths & date1))
		return date2;
		
	unsigned getDays = 0;
	for (unsigned i=0; i<=7; i++)
		getDays |= 1 << i;
   
	if( (getDays & date1) > (getDays & date2))
		return date1;
	else
		return date2;

   
}
