//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class NSString;

@interface FNROBiddingBannerAppodealParams : NSObject <IFNetworkResponseMappable>
{
    NSString *_seller_id;
    double _bid_lifetime;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(nonatomic) double bid_lifetime; // @synthesize bid_lifetime=_bid_lifetime;
@property(copy, nonatomic) NSString *seller_id; // @synthesize seller_id=_seller_id;

@end
