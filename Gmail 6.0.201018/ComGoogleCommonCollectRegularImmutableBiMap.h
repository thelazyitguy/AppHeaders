//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableBiMap.h"

@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableBiMap : ComGoogleCommonCollectImmutableBiMap
{
    IOSObjectArray *entries_;
    IOSObjectArray *keyTable_;
    IOSObjectArray *valueTable_;
    int mask_;
    int hashCode_;
    unsigned long long inverse_;
}

+ (void)initialize;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)inverse;
- (int)size;
- (_Bool)isPartialView;
- (unsigned long long)hash;
- (_Bool)isHashCodeFast;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)createKeySet;
- (id)createEntrySet;
- (id)getWithId:(id)arg1;

@end

