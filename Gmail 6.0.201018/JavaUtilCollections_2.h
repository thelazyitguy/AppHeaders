//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilSpliterator-Protocol.h"

@class NSString;

@interface JavaUtilCollections_2 : NSObject <JavaUtilSpliterator>
{
    id val$element_;
    long long est_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getComparator;
- (_Bool)hasCharacteristicsWithInt:(int)arg1;
- (long long)getExactSizeIfKnown;
- (int)characteristics;
- (long long)estimateSize;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (id)trySplit;
- (id)initWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
