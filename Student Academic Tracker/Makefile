
OBJS = main.o Student.o Course.o Storage.o View.o Control.o Monitor.o GPAMonitor.o FWMonitor.o CourseList.o


A4:	$(OBJS) StuServer.o
	g++ -o A4 $(OBJS) StuServer.o

main.o:		main.cc Control.h
	g++ -c main.cc

Storage.o:	Storage.cc Storage.h Student.h defs.h 
	g++ -c Storage.cc

Student.o:	Student.cc Student.h Course.h defs.h CourseList.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h CourseList.h
	g++ -c Course.cc

View.o:		View.cc View.h Storage.h
	g++ -c View.cc

Control.o:	Control.cc Control.h View.h Storage.h Student.h Course.h Monitor.h GPAMonitor.h FWMonitor.h
	g++ -c Control.cc

CourseList.o:	CourseList.cc CourseList.h List.h Course.h
	g++ -c CourseList.cc

Monitor.o:   Monitor.cc Monitor.h Student.h
	g++ -c Monitor.cc

GPAMonitor.o:  GPAMonitor.cc GPAMonitor.h Monitor.h Student.h
	g++ -c GPAMonitor.cc

FWMonitor.o:   FWMonitor.cc FWMonitor.h Monitor.h Student.h
	g++ -c FWMonitor.cc
	

clean:
	rm -f $(OBJS) A4
