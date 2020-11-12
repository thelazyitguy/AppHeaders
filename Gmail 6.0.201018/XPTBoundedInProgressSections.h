//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTInProgressSections-Protocol.h"

@class JavaUtilConcurrentAtomicAtomicBoolean, NSString;
@protocol JavaUtilConcurrentConcurrentMap;

@interface XPTBoundedInProgressSections : NSObject <XPTInProgressSections>
{
    id <JavaUtilConcurrentConcurrentMap> idToSection_;
    JavaUtilConcurrentAtomicAtomicBoolean *wasEvicted_;
    int maxSize_;
    int numRemovals_;
}

- (void)dealloc;
- (void)removeWithInt:(int)arg1;
- (void)setWithInt:(int)arg1 withXPTTraceEvent:(id)arg2;
- (id)getSections;
- (_Bool)isMissingData;
- (_Bool)isEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
