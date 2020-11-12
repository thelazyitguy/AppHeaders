//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DTBAdSize : NSObject
{
    int adType;
    long long width;
    long long height;
    NSString *slotUUID;
    NSDictionary *pubSettings;
}

@property(retain, nonatomic) NSDictionary *pubSettings; // @synthesize pubSettings;
@property(readonly, nonatomic) int adType; // @synthesize adType;
@property(readonly, nonatomic) NSString *slotUUID; // @synthesize slotUUID;
@property(readonly, nonatomic) long long height; // @synthesize height;
@property(readonly, nonatomic) long long width; // @synthesize width;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isInterstitialAd;
- (id)initVideoAdSizeWithSlotUUID:(id)arg1;
- (id)initInterstitialAdSizeWithSlotUUID:(id)arg1;
- (id)initVideoAdSizeWithPlayerWidth:(long long)arg1 height:(long long)arg2 slotUUID:(id)arg3 andPubSettings:(id)arg4;
- (id)initVideoAdSizeWithPlayerWidth:(long long)arg1 height:(long long)arg2 andSlotUUID:(id)arg3;
- (id)initBannerAdSizeWithWidth:(long long)arg1 height:(long long)arg2 andSlotUUID:(id)arg3;

@end
