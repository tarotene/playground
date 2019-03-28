#ifndef DEFINED_MYODS
#define DEFINED_MYODS

#include <assert.h>

namespace myODS
{   

template <typename T>
class array
{
  private:
    T *a;

  public:
    int length;

    // int型の引数lenをint型のメンバ変数lengthに代入する.
    // T型の組み込み配列型(*len)に対応するサイズで動的にメモリを確保し，T型のポインタ型メンバ変数aに代入する．
    // 以上をデフォルトコンストラクタとして定義する.
    array(int len)
    {
        length = len;
        a = new T[length];
    }

    // int型の引数iが0以上length未満でないとエラーを出す．
    // int型引数iに対し，メンバ変数a[i]を返す．
    // 以上をT型の添字演算子(?)[]として定義する．
    T &operator[](int i)
    {
        assert(i >= 0 && i < length);
        return a[i];
    }

    // T型のメンバ変数aに既に値が格納されていれば削除する．
    // T型配列の参照型変数bのメンバ変数aを自身のメンバ変数aに代入する．
    // 代入元のT型配列の参照型変数bを削除する．
    // 上記をint型メンバ変数lengthについても行う．
    // 当該クラスオブジェクトの実体を返す．
    array<T>& operator=(array<T> &b) {
        if (a != NULL) delete[] a;
        a = b.a;
        b.a = NULL;
        length = b.length;
        return *this;
    }
};

} // namespace myODS

#endif