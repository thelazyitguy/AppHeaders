//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTILiveChatHotConfig, YTIPdgHotConfig;

@interface YCHConfig : NSObject
{
    YTILiveChatHotConfig *_liveChatHotConfig;
    YTIPdgHotConfig *_pdgHotConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPdgOuterTubeRefactoringEnabled;
@property(readonly, nonatomic) _Bool isBuyFlowErrorViewEnabled;
@property(readonly, nonatomic) _Bool isTextureEnabledForBanner;
@property(readonly, nonatomic) _Bool isSuperChatBottomSheetFromResponse;
@property(readonly, nonatomic) _Bool isSuperChatModerationUpdated;
@property(readonly, nonatomic) _Bool isMoneyButtonFlareEnabled;
@property(readonly, nonatomic) _Bool isFreeSuperChatEnabled;
@property(readonly, nonatomic) _Bool isVerifiedHighlightsEnabled;
@property(readonly, nonatomic) _Bool isEngagementPanelViewersCountEnabled;
@property(readonly, nonatomic) _Bool isCreatorHighlightsEnabled;
@property(readonly, nonatomic) _Bool isLiveChatFullscreenEnabled;
- (id)init;

@end

