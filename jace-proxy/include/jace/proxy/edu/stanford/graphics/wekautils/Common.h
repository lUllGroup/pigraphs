#ifndef JACE_PROXY_EDU_STANFORD_GRAPHICS_WEKAUTILS_COMMON_H
#define JACE_PROXY_EDU_STANFORD_GRAPHICS_WEKAUTILS_COMMON_H

#include "jace/OsDep.h"
#include "jace/Namespace.h"
#include "jace/proxy/JObject.h"
#include "jace/JArray.h"
#include "jace/JFieldProxy.h"
#include "jace/JMethod.h"
#include "jace/JField.h"
#include "jace/JClassImpl.h"

/**
 * The super class for this class.
 */
#include "jace/proxy/java/lang/Object.h"
/**
 * Forward declarations for the classes that this class uses.
 */
BEGIN_NAMESPACE_3(jace, proxy, types)
class JDouble;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_3(jace, proxy, types)
class JBoolean;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_3(jace, proxy, types)
class JVoid;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_3(jace, proxy, types)
class JInt;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_4(jace, proxy, java, lang)
class String;
END_NAMESPACE_4(jace, proxy, java, lang)

BEGIN_NAMESPACE_4(jace, proxy, java, lang)
class Exception;
END_NAMESPACE_4(jace, proxy, java, lang)


BEGIN_NAMESPACE_6(jace, proxy, edu, stanford, graphics, wekautils)

/**
 * The Jace C++ proxy class for edu.stanford.graphics.wekautils.Common.
 * Please do not edit this class, as any changes you make will be overwritten.
 * For more information, please refer to the Jace Developer's Guide.
 */
class Common: public virtual ::jace::proxy::java::lang::Object
{
  public:
  class Factory
  {
  public:
    /**
     * Creates a new Common.
     */
    JACE_PROXY_API static Common create();
  };
  
  public: 
  /**
   * Creates a new null reference.
   * 
   * All subclasses of JObject should provide this constructor
   * for their own subclasses.
   */
  JACE_PROXY_API explicit Common();
  /**
   * Copy an existing reference.
   */
  JACE_PROXY_API Common(const Common&);
  /**
   * CSVtoARFF
   */
  JACE_PROXY_API static void CSVtoARFF(::jace::proxy::java::lang::String p0, ::jace::proxy::java::lang::String p1);
  JACE_PROXY_API virtual const JClass& getJavaJniClass() const throw (::jace::JNIException);
  JACE_PROXY_API static const JClass& staticGetJavaJniClass() throw (::jace::JNIException);
  JACE_PROXY_API explicit Common(jvalue);
  JACE_PROXY_API explicit Common(jobject);
private:
  /**
   * The following methods are required to integrate this class
   * with the Jace framework.
   */
  template <typename T> friend T (::jace::java_cast)(const ::jace::proxy::JObject&);
  template <typename T> friend T (::jace::java_new)();
  template <typename T, typename A0> friend T (::jace::java_new)(A0 a0);
  template <typename T, typename A0, typename A1> friend T (::jace::java_new)(A0 a0, A1 a1);
  template <typename T, typename A0, typename A1, typename A2> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2);
  template <typename T, typename A0, typename A1, typename A2, typename A3> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9);
  template <typename T> friend T (::jace::java_new)(const char*);
  template <typename T> friend T (::jace::java_new)(const ::std::string&);
  template <typename T> friend class ::jace::ElementProxy;
  template <typename T> friend class ::jace::JFieldProxy;
  template <typename T> friend class ::jace::JMethod;
};

END_NAMESPACE_6(jace, proxy, edu, stanford, graphics, wekautils)

BEGIN_NAMESPACE(jace)

#ifndef PUT_TSDS_IN_HEADER
  template <> ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::ElementProxy(jarray array, jvalue element, int index);
  template <> ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::ElementProxy(const jace::ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >& proxy);
#else
  template <> inline ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::ElementProxy(jarray array, jvalue element, int _index): 
    ::jace::proxy::edu::stanford::graphics::wekautils::Common(element), index(_index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, array));
  }
  template <> inline ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::ElementProxy(const jace::ElementProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >& proxy): 
    ::jace::proxy::edu::stanford::graphics::wekautils::Common(proxy), index(proxy.index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, proxy.parent));
  }
#endif

#ifndef PUT_TSDS_IN_HEADER
  template <> JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(jfieldID _fieldID, jvalue value, jobject _parent);
  template <> JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(jfieldID _fieldID, jvalue value, jclass _parentClass);
  template <> JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(const ::jace::JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >& object);
#else
  template <> inline JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(jfieldID _fieldID, jvalue value, jobject _parent): 
    ::jace::proxy::edu::stanford::graphics::wekautils::Common(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    if (_parent)
      parent = newGlobalRef(env, _parent);
    else
      parent = _parent;

    parentClass = 0;
  }
  template <> inline JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(jfieldID _fieldID, jvalue value, jclass _parentClass): 
    ::jace::proxy::edu::stanford::graphics::wekautils::Common(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    parent = 0;
    parentClass = static_cast<jclass>(newGlobalRef(env, _parentClass));
  }
  template <> inline JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >::JFieldProxy(const JFieldProxy< ::jace::proxy::edu::stanford::graphics::wekautils::Common >& object): 
    ::jace::proxy::edu::stanford::graphics::wekautils::Common(object)
  {
    fieldID = object.fieldID; 

    if (object.parent)
    {
      JNIEnv* env = attach();
      parent = newGlobalRef(env, object.parent);
    }
    else
      parent = 0;

    if (object.parentClass)
    {
      JNIEnv* env = attach();
      parentClass = static_cast<jclass>(newGlobalRef(env, object.parentClass));
    }
    else
      parentClass = 0;
  }
#endif

END_NAMESPACE(jace)

#endif // #ifndef JACE_PROXY_EDU_STANFORD_GRAPHICS_WEKAUTILS_COMMON_H

