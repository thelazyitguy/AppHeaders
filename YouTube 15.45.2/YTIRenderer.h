//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTMutableAdSupportedRenderersProtocol-Protocol.h>

@class NSString, YTIButtonRenderer, YTIElementRenderer, YTILiveChatActionPanelRenderer, YTILiveChatTextMessageRenderer, YTIMenuRenderer, YTIOfflineabilityRenderer, YTIPollRenderer;
@protocol YTMutableAdMutedAdStateRendererProtocol;

@interface YTIRenderer : GPBMessage <YTMutableAdSupportedRenderersProtocol>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIMenuRenderer *menuRenderer;
@property(readonly, nonatomic) _Bool hasMenuRenderer;
@property(readonly, nonatomic) id <YTMutableAdMutedAdStateRendererProtocol> mutedSparklesRenderer;
@property(readonly, nonatomic) id <YTMutableAdMutedAdStateRendererProtocol> mutedNativeAdRenderer;
- (id)elementsAdCtaRenderer;
- (_Bool)hasElementsAdCtaRenderer;
- (id)collapsibleAdCtaRenderer;
- (_Bool)hasCollapsibleAdCtaRenderer;
- (id)appPromoAdCtaRenderer;
- (_Bool)hasAppPromoAdCtaRenderer;
@property(retain, nonatomic) YTIPollRenderer *pollRenderer;
@property(readonly, nonatomic) _Bool hasPollRenderer;
@property(retain, nonatomic) YTILiveChatActionPanelRenderer *liveChatActionPanelRenderer;
@property(readonly, nonatomic) _Bool hasLiveChatActionPanelRenderer;
@property(retain, nonatomic) YTIElementRenderer *elementRenderer;
@property(readonly, nonatomic) _Bool hasElementRenderer;
@property(retain, nonatomic) YTILiveChatTextMessageRenderer *liveChatTextMessageRenderer;
@property(readonly, nonatomic) _Bool hasLiveChatTextMessageRenderer;
@property(retain, nonatomic) YTIOfflineabilityRenderer *offlineabilityRenderer;
@property(readonly, nonatomic) _Bool hasOfflineabilityRenderer;
@property(readonly, nonatomic) _Bool hasButtonRenderer;
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer;
- (_Bool)yt_hasMiniplayerRenderer;
- (void)setYt_miniplayerRenderer:(id)arg1;
- (id)yt_miniplayerRenderer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

