//---------------------------------------(Mud weight(ppg),  depth(feet))--> pressure(Psi)-------------------------------------
template<class T,class U>
float get_pressure(T emw,U d)
{
	return (0.052 * d * emw);
}

//---------------------------------------(depth(feet) )--> Temprature(degree F)------------------------------------------------
template<class T>
float get_temprature(T d)
{
	return((0.015 * d) + 85);
}

//---------------------------------------(Pressur(psi) , Depth(feet))--> EMW(ppg)---------------------------------------------
template<class T,class U>
float get_emw(T p, U d)
{
	return(p / (0.052 * d));
}

//---------------------------------------(emw(ppg)--> buoyancy factor)---------------------------------------------------------
template<class T>
float get_bf(T emw)
{
	return ((65.4 - emw) / 65.4);
}