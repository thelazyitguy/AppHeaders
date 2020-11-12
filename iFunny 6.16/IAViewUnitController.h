//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IAUnitController.h>

#import <Funny/IAInterfaceBuilder-Protocol.h>
#import <Funny/IAViewUnitControllerBuilder-Protocol.h>

@class IAAdView, NSString, UIView;
@protocol IAUnitDelegate;

@interface IAViewUnitController : IAUnitController <IAInterfaceBuilder, IAViewUnitControllerBuilder>
{
    IAAdView *_adView;
    UIView *_preRefreshAdviewSuperview;
    IAAdView *_adViewToRemove;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak IAAdView *adViewToRemove; // @synthesize adViewToRemove=_adViewToRemove;
@property(nonatomic) __weak UIView *preRefreshAdviewSuperview; // @synthesize preRefreshAdviewSuperview=_preRefreshAdviewSuperview;
@property(retain, nonatomic) IAAdView *adView; // @synthesize adView=_adView;
- (void)dealloc;
- (void)userShouldGetReward;
- (void)dismissAd;
- (void)showAdInParentView:(id)arg1;
- (void)clean;
- (void)didDismissFullscreen;
- (void)willPresentFullscreen;
- (void)reshowAd;
- (_Bool)supportsRefresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <IAUnitDelegate> unitDelegate;

@end
