//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsPromotedContentImageViewDelegate-Protocol.h"
#import "SPTBannerItem-Protocol.h"
#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTBannerView, SPTTheme;
@protocol GLUEImageLoader, SPTAdsBannerViewDelegate, SPTAdsBaseCosmosBridge, SPTAdsBaseImageEntity;

@interface SPTAdsMobileOverlayBannerItem : NSObject <SPTAdsPromotedContentImageViewDelegate, SPTBannerItem, SPTBannerItemCustomView>
{
    _Bool shownOnTopOfModals;
    _Bool _shouldShowBookmarkButton;
    unsigned long long priority;
    double presentationDuration;
    id <SPTAdsBannerViewDelegate> _bannerViewDelegate;
    id <SPTAdsBaseImageEntity> _entity;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    SPTTheme *_theme;
    id <GLUEImageLoader> _glueImageLoader;
    SPTBannerView *_currentBannerView;
    unsigned long long _bannerVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowBookmarkButton; // @synthesize shouldShowBookmarkButton=_shouldShowBookmarkButton;
@property(readonly, nonatomic) unsigned long long bannerVersion; // @synthesize bannerVersion=_bannerVersion;
@property(retain, nonatomic) SPTBannerView *currentBannerView; // @synthesize currentBannerView=_currentBannerView;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) id <SPTAdsBaseImageEntity> entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) __weak id <SPTAdsBannerViewDelegate> bannerViewDelegate; // @synthesize bannerViewDelegate=_bannerViewDelegate;
@property(readonly, nonatomic, getter=isShownOnTopOfModals) _Bool shownOnTopOfModals; // @synthesize shownOnTopOfModals;
@property(readonly, nonatomic) double presentationDuration; // @synthesize presentationDuration;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority;
- (void)didLoadContentImage:(id)arg1;
- (void)didFailToLoadImage;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithBannerViewDelegate:(id)arg1 adEntity:(id)arg2 bannerVersion:(unsigned long long)arg3 shouldShowBookmarkButton:(_Bool)arg4 theme:(id)arg5 glueImageLoader:(id)arg6 cosmosBridge:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
