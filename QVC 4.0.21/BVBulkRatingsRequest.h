//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVConversationsRequest.h>

@class NSArray, NSMutableArray;

@interface BVBulkRatingsRequest : BVConversationsRequest
{
    NSArray *_productIds;
    NSMutableArray *_statistics;
    NSMutableArray *_filters;
}

@property(retain) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain) NSMutableArray *statistics; // @synthesize statistics=_statistics;
@property(retain) NSArray *productIds; // @synthesize productIds=_productIds;
- (void).cxx_destruct;
- (id)statsToString:(id)arg1;
- (id)createParams;
- (id)filterOnBulkRatingFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 values:(id)arg3;
- (id)filterOnBulkRatingFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 value:(id)arg3;
- (id)addBulkRatingsFilterType:(id)arg1 relationalFilterOperator:(id)arg2 values:(id)arg3;
- (void)loadBulkRatings:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)load:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithProductIds:(id)arg1 statistics:(long long)arg2;
- (id)endpoint;

@end
