//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsDynamiteV1SharedUtilIdGenerator-Protocol.h"

@class NSString;
@protocol DYNSCommonSeededRandom;

@interface ComGoogleAppsDynamiteV1SharedUtilIdGeneratorImpl : NSObject <ComGoogleAppsDynamiteV1SharedUtilIdGenerator>
{
    id <DYNSCommonSeededRandom> seededRandom_;
}

- (void)dealloc;
- (id)generateLocalIdString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
