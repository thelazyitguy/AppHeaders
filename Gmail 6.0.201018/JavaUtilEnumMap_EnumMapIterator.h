//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class JavaUtilEnumMap, NSString;

@interface JavaUtilEnumMap_EnumMapIterator : NSObject <JavaUtilIterator>
{
    JavaUtilEnumMap *this$0_;
    int index_;
    int lastReturnedIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (void)checkLastReturnedIndex;
- (void)remove;
- (_Bool)hasNext;
- (id)initWithJavaUtilEnumMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
