#ifndef _UTIL_DIMUON__H_
#define _UTIL_DIMUON__H_
class SQDimuon;

namespace UtilDimuon {
  void GetX1X2(const SQDimuon* dim, double& x1, double& x2);
  void GetX1X2(const SQDimuon* dim,  float& x1,  float& x2);
  double GetX1(const SQDimuon* dim);
  double GetX2(const SQDimuon* dim);
}

#endif /* _UTIL_DIMUON__H_ */
