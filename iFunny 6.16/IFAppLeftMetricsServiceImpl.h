//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFAppLeftMetricsService-Protocol.h>

@class NSString, NSURL;

@interface IFAppLeftMetricsServiceImpl : NSObject <IFAppLeftMetricsService>
{
    _Bool _bannerAdTouched;
    _Bool _bannerAdOpenModal;
    _Bool _bannerAdLeaveApp;
    _Bool _nativeAdOpenModal;
    _Bool _nativeAdLeaveApp;
    NSURL *_lastOpenUrl;
}

+ (unsigned long long)detectLeftToFromURL:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *lastOpenUrl; // @synthesize lastOpenUrl=_lastOpenUrl;
@property(nonatomic) _Bool nativeAdLeaveApp; // @synthesize nativeAdLeaveApp=_nativeAdLeaveApp;
@property(nonatomic) _Bool nativeAdOpenModal; // @synthesize nativeAdOpenModal=_nativeAdOpenModal;
@property(nonatomic) _Bool bannerAdLeaveApp; // @synthesize bannerAdLeaveApp=_bannerAdLeaveApp;
@property(nonatomic) _Bool bannerAdOpenModal; // @synthesize bannerAdOpenModal=_bannerAdOpenModal;
@property(nonatomic) _Bool bannerAdTouched; // @synthesize bannerAdTouched=_bannerAdTouched;
@property(readonly, nonatomic) unsigned long long currentTriggers;
@property(readonly, nonatomic) unsigned long long currentLeftTo;
@property(readonly, nonatomic) unsigned long long currentType;
- (void)triggerOpenURL:(id)arg1;
- (void)triggerBecomeActive;
- (void)triggerBackground;
- (void)triggerNativeAdLeaveApp;
- (void)triggerNativeAdCloseModal;
- (void)triggerNativeAdOpenModal;
- (void)triggerBannerAdLeaveApp;
- (void)triggerBannerAdCloseModal;
- (void)triggerBannerAdOpenModal;
- (void)triggerBannerAdTouch;
- (void)trackEventIfNeeded;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
