//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVBaseSortableProductRequest.h>

@class NSMutableArray;

@interface BVBulkProductRequest : BVBaseSortableProductRequest
{
    NSMutableArray *_sorts;
    NSMutableArray *_filters;
}

@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain) NSMutableArray *sorts; // @synthesize sorts=_sorts;
- (void).cxx_destruct;
- (id)addProductFilterType:(id)arg1 relationalFilterOperator:(id)arg2 values:(id)arg3;
- (id)filterOnProductFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 values:(id)arg3;
- (id)filterOnProductFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 value:(id)arg3;
- (id)createParams;
- (void)load:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)sortByProductsSortOptionValue:(long long)arg1 monotonicSortOrderValue:(long long)arg2;
- (id)init;

@end
