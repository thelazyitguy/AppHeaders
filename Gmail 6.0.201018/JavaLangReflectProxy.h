//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol JavaLangReflectInvocationHandler;

@interface JavaLangReflectProxy : NSObject <JavaIoSerializable>
{
    id <JavaLangReflectInvocationHandler> h_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)generateProxyWithNSString:(id)arg1 withIOSClassArray:(id)arg2 withJavaLangClassLoader:(id)arg3;
+ (id)getInvocationHandlerWithId:(id)arg1;
+ (_Bool)isProxyClassWithIOSClass:(id)arg1;
+ (id)newInstanceWithJavaLangReflectConstructor:(id)arg1 withJavaLangReflectInvocationHandler:(id)arg2;
+ (id)newProxyInstanceWithJavaLangClassLoader:(id)arg1 withIOSClassArray:(id)arg2 withJavaLangReflectInvocationHandler:(id)arg3;
+ (id)getProxyClass0WithJavaLangClassLoader:(id)arg1 withIOSClassArray:(id)arg2;
+ (id)getProxyClassWithJavaLangClassLoader:(id)arg1 withIOSClassArray:(id)arg2;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)proxy_equalsWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (int)proxy_hashCode;
@property(readonly) unsigned long long hash;
- (id)proxy_toString;
@property(readonly, copy) NSString *description;
- (id)initWithJavaLangReflectInvocationHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
