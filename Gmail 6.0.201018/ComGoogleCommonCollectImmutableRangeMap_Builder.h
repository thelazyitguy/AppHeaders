//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilList;

@interface ComGoogleCommonCollectImmutableRangeMap_Builder : NSObject
{
    id <JavaUtilList> entries_;
}

- (void)dealloc;
- (id)build;
- (id)combineWithComGoogleCommonCollectImmutableRangeMap_Builder:(id)arg1;
- (id)putAllWithComGoogleCommonCollectRangeMap:(id)arg1;
- (id)putWithComGoogleCommonCollectRange:(id)arg1 withId:(id)arg2;

@end
