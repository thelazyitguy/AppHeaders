//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableCollection_Builder.h"

@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableList_Builder : ComGoogleCommonCollectImmutableCollection_Builder
{
    IOSObjectArray *contents_;
    int size_;
    _Bool forceCopy_;
}

- (void)dealloc;
- (id)build;
- (id)combineWithComGoogleCommonCollectImmutableList_Builder:(id)arg1;
- (id)addAllWithJavaUtilIterator:(id)arg1;
- (id)addAllWithJavaLangIterable:(id)arg1;
- (id)addWithNSObjectArray:(id)arg1;
- (id)addWithId:(id)arg1;

@end
