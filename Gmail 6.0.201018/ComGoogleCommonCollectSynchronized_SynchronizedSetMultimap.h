//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedMultimap.h"

#import "ComGoogleCommonCollectSetMultimap-Protocol.h"

@class NSString;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSetMultimap : ComGoogleCommonCollectSynchronized_SynchronizedMultimap <ComGoogleCommonCollectSetMultimap>
{
    id <JavaUtilSet> entrySet_;
}

- (void)dealloc;
- (id)entries;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)removeAllWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

