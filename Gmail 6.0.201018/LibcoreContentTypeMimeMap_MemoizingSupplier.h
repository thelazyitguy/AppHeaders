//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilFunctionSupplier-Protocol.h"

@class NSString;

@interface LibcoreContentTypeMimeMap_MemoizingSupplier : NSObject <JavaUtilFunctionSupplier>
{
    unsigned long long mDelegate_;
    unsigned long long mInstance_;
    // Error parsing type: AB, name: mInitialized_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)get;
- (id)initWithJavaUtilFunctionSupplier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
