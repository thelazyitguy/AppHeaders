//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/GADInterstitial.h>

@protocol DFPCustomRenderedInterstitialDelegate, GADAppEventDelegate;

@interface DFPInterstitial : GADInterstitial
{
    id <DFPCustomRenderedInterstitialDelegate> _customRenderedInterstitialDelegate;
}

@property(nonatomic) __weak id <DFPCustomRenderedInterstitialDelegate> customRenderedInterstitialDelegate; // @synthesize customRenderedInterstitialDelegate=_customRenderedInterstitialDelegate;
- (void).cxx_destruct;
- (id)initWithAdUnitID:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @dynamic appEventDelegate;

@end
