//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangReflectAccessibleObject.h"

#import "JavaLangReflectGenericDeclaration-Protocol.h"
#import "JavaLangReflectMember-Protocol.h"

@class IOSClass, NSString;

@interface JavaLangReflectExecutable : JavaLangReflectAccessibleObject <JavaLangReflectGenericDeclaration, JavaLangReflectMember>
{
    IOSClass *class_;
    const struct J2ObjcMethodInfo *metadata_;
    const void **ptrTable_;
    // Error parsing type: A@, name: params_
    // Error parsing type: A@, name: paramTypes_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getAnnotationsByTypeWithIOSClass:(id)arg1;
- (id)getAllGenericParameterTypes;
- (_Bool)hasRealParameterData;
- (SEL)getSelector;
- (_Bool)isVarArgs;
- (id)toGenericString;
- (id)getAnnotatedParameterTypes;
- (id)getAnnotatedReturnType;
- (id)getParameterAnnotations;
- (id)getDeclaredAnnotations;
- (id)getExceptionTypes;
- (_Bool)isSynthetic;
- (id)getGenericExceptionTypes;
- (id)getGenericParameterTypes;
- (id)getTypeParameters;
- (id)getDeclaringClass;
- (id)getParameters;
- (id)getParametersInternal;
- (int)getParameterCount;
- (id)getParameterTypes;
- (id)getParameterTypesInternal;
- (int)getModifiers;
- (id)getName;
- (id)initWithDeclaringClass:(id)arg1 metadata:(const struct J2ObjcMethodInfo *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
