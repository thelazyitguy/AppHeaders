//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString;

@interface AIRListingCategory : AIRModel
{
    NSString *_categoryType;
    NSString *_categoryValue;
    NSNumber *_listingId;
    NSNumber *_userId;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSNumber *listingId; // @synthesize listingId=_listingId;
@property(readonly, copy, nonatomic) NSString *categoryValue; // @synthesize categoryValue=_categoryValue;
@property(readonly, copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;

@end
