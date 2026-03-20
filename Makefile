# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -g

# 빌드 타겟 이름
TARGET = movie

# 목적 파일들
OBJS = Movie.o main.o

# 실행 파일 생성
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

Movie.o: Movie.h Movie.cpp
	$(CXX) $(CXXFLAGS) -c Movie.cpp

main.o: Movie.h main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# 정리용
clean:
	rm -f $(OBJS) $(TARGET)