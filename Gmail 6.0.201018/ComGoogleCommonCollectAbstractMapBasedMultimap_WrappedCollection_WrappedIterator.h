//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, NSString;
@protocol JavaUtilCollection, JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_WrappedIterator : NSObject <JavaUtilIterator>
{
    id <JavaUtilIterator> delegateIterator_;
    id <JavaUtilCollection> originalDelegate_;
    ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *this$0_;
}

- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)getDelegateIterator;
- (void)remove;
- (id)next;
- (_Bool)hasNext;
- (void)validateIterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
