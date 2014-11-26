typedef float Affine[3][3];
typedef float Point[2];
namespace MyGraphics
{
	class MyShape
	{
	public:
		//Vẽ hình chữ nhật
		static __declspec(dllexport) void MyRectangle(float x0, float y0, float x1, float y1);
		//Vẽ hình tròn
		static __declspec(dllexport) void MyCircle(float xc, float yc, float r);
		//Dịch chuyển đối tượng
		static __declspec(dllexport) void MyTranslate(float x, float y, float z);
		//Quay đối tượng
		static __declspec(dllexport) void MyRotate(float gocQuay, float x, float y, float z);
		//Phép biến đổi tỉ lệ
		static __declspec(dllexport) void MyScale(float x, float y, float z);
		static __declspec(dllexport) void MyLine(float x0, float y0, float x1, float y1);
		static __declspec(dllexport) void Translate_x(float &x0, float dx);
		static __declspec(dllexport) void Translate_y(float &y0, float dy);
		static __declspec(dllexport) void MyRectangle_Filled(float x0, float y0, float x1, float y1);
		static __declspec(dllexport) void PointToAffine(Point A, Affine &B);
		static __declspec(dllexport) void Multiply(Affine A, Affine B, Affine &C, int m, int n);
		static __declspec(dllexport) void RotatePoint_O(Affine &T, float fi);
		static __declspec(dllexport) void TinhTien(Affine &T, float x, float y);
		static __declspec(dllexport) void Nghieng(Affine &T, float h, float g);
		static __declspec(dllexport) void CoDan(Affine &T, float Sx, float Sy);
	private:
		static int Round(double a);
		
	};
}