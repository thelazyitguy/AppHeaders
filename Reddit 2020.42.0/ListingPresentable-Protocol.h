//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ListingPresenter, NSError, NSUUID;

@protocol ListingPresentable <NSObject>
@property(readonly, nonatomic) _Bool isViewLoaded;
- (void)listingDidStartFetching:(ListingPresenter *)arg1;
- (void)listingDidFailFetching:(ListingPresenter *)arg1 error:(NSError *)arg2;
- (void)listingDidFetchMoreData:(ListingPresenter *)arg1;
- (void)displayListingContent:(ListingPresenter *)arg1 correlationID:(NSUUID *)arg2;
@end

