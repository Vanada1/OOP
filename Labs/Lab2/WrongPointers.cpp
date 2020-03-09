#include "WrongPointers.h"
#include "Flight.h"
#include "Movie.h"

//2.2.4.4
void WrongPointers()
{
	Movie movie;
	Flight flight;
	/*Movie* wrongMoviePointer = &flight;
	Flight* wrongFlightPointer = &movie;*/
	Movie* moviePointer = &movie;
	Flight* flightPointer = &flight;
}