//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBannerCustomEvent.h>

#import <Funny/IAMRAIDContentDelegate-Protocol.h>
#import <Funny/IAUnitDelegate-Protocol.h>
#import <Funny/IAVideoContentDelegate-Protocol.h>

@class IAAdSpot, IAMRAIDContentController, IAVideoContentController, IAViewUnitController, NSString;

@interface InneractiveBannerCustomEvent : MPBannerCustomEvent <IAUnitDelegate, IAVideoContentDelegate, IAMRAIDContentDelegate>
{
    _Bool _isIABanner;
    IAAdSpot *_adSpot;
    IAViewUnitController *_bannerUnitController;
    IAMRAIDContentController *_MRAIDContentController;
    IAVideoContentController *_videoContentController;
    NSString *_adIdentifier;
    NSString *_originalAdIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isIABanner; // @synthesize isIABanner=_isIABanner;
@property(copy, nonatomic) NSString *originalAdIdentifier; // @synthesize originalAdIdentifier=_originalAdIdentifier;
@property(copy, nonatomic) NSString *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(retain, nonatomic) IAVideoContentController *videoContentController; // @synthesize videoContentController=_videoContentController;
@property(retain, nonatomic) IAMRAIDContentController *MRAIDContentController; // @synthesize MRAIDContentController=_MRAIDContentController;
@property(retain, nonatomic) IAViewUnitController *bannerUnitController; // @synthesize bannerUnitController=_bannerUnitController;
@property(retain, nonatomic) IAAdSpot *adSpot; // @synthesize adSpot=_adSpot;
- (void)dealloc;
- (void)IAVideoContentController:(id)arg1 videoDurationUpdated:(double)arg2;
- (void)IAVideoContentController:(id)arg1 videoInterruptedWithError:(id)arg2;
- (void)IAVideoCompleted:(id)arg1;
- (void)IAMRAIDContentControllerMRAIDAdDidCollapse:(id)arg1;
- (void)IAMRAIDContentControllerMRAIDAdWillCollapse:(id)arg1;
- (void)IAMRAIDContentController:(id)arg1 MRAIDAdDidExpandToFrame:(struct CGRect)arg2;
- (void)IAMRAIDContentController:(id)arg1 MRAIDAdWillExpandToFrame:(struct CGRect)arg2;
- (void)IAMRAIDContentController:(id)arg1 MRAIDAdDidResizeToFrame:(struct CGRect)arg2;
- (void)IAMRAIDContentController:(id)arg1 MRAIDAdWillResizeToFrame:(struct CGRect)arg2;
- (void)IAUnitControllerWillOpenExternalApp:(id)arg1;
- (void)IAUnitControllerDidDismissFullscreen:(id)arg1;
- (void)IAUnitControllerWillDismissFullscreen:(id)arg1;
- (void)IAUnitControllerDidPresentFullscreen:(id)arg1;
- (void)IAUnitControllerWillPresentFullscreen:(id)arg1;
- (void)IAAdWillLogImpression:(id)arg1;
- (void)IAAdDidReceiveClick:(id)arg1;
- (id)IAParentViewControllerForUnitController:(id)arg1;
- (void)didDisplayAd;
- (void)treatInternalError;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
