//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber;

@interface AIRListingsMetadata : AIRModel
{
    NSNumber *_listingCount;
    NSNumber *_recordCount;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *recordCount; // @synthesize recordCount=_recordCount;
@property(readonly, copy, nonatomic) NSNumber *listingCount; // @synthesize listingCount=_listingCount;

@end
