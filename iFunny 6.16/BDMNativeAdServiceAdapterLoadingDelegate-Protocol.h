//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/BDMAdapterLoadingDelegate-Protocol.h>

@class NSArray;
@protocol BDMNativeAdServiceAdapter;

@protocol BDMNativeAdServiceAdapterLoadingDelegate <BDMAdapterLoadingDelegate>
- (void)service:(id <BDMNativeAdServiceAdapter>)arg1 didLoadNativeAds:(NSArray *)arg2;
@end
