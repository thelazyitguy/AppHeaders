//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface JavaLangInvokeSerializedLambda : NSObject <JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)getCapturedArgWithInt:(int)arg1;
- (int)getCapturedArgCount;
- (id)getInstantiatedMethodType;
- (int)getImplMethodKind;
- (id)getImplMethodSignature;
- (id)getImplMethodName;
- (id)getImplClass;
- (id)getFunctionalInterfaceMethodSignature;
- (id)getFunctionalInterfaceMethodName;
- (id)getFunctionalInterfaceClass;
- (id)getCapturingClass;
- (id)initWithIOSClass:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withInt:(int)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withNSString:(id)arg8 withNSString:(id)arg9 withNSObjectArray:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
