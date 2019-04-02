#ifndef PROJECTNAME_PATH_POINT_H_
#define PROJECTNAME_PATH_POINT_H_

class Point {
 public:
  
  Point();
  
  Point(double x, double y);

  ~Point();
  

  void ToString(std::ostream *out) const;
  double Distance(const Point &other) const;
  
  
  
 double GetX() const;
 double GetY() const;
  

private:

  double x_, y_;
};

#endif  // PROJECTNAME_PATH_POINT_H_
