//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAInterstitialDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SMAInterstitialAdLoaderUnitStore : NSObject <SMAInterstitialDelegate>
{
    NSMutableDictionary *_loaders;
}

@property(retain) NSMutableDictionary *loaders; // @synthesize loaders=_loaders;
- (void).cxx_destruct;
- (void)interstitialDidTTLExpire:(id)arg1;
- (void)interstitial:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialDidLoad:(id)arg1;
- (void)removeAllObjects;
- (void)setInterstitialAdLoaderUnit:(id)arg1 forKey:(id)arg2;
- (id)interstitialAdLoaderUnitForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

