Staff_Management_System.o: Staff_Management_System.cpp
  g++ -c Staff_Management_System.cpp

Staff_Management_System:Staff_Management_System.o
	g++ Staff_Management_System.o -o Staff_Management_System
