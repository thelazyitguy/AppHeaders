//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUINewAlertTemplate.h"

#import "NFUIThemedPromoAlertInlineViewDelegate-Protocol.h"
#import "NFUIThemedPromoTooltipViewDelegate-Protocol.h"

@class ModalShimViewController, UIImageView, UIView;

@interface NFUIThemedPromoAlertTemplate : NFUINewAlertTemplate <NFUIThemedPromoAlertInlineViewDelegate, NFUIThemedPromoTooltipViewDelegate>
{
    UIView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    ModalShimViewController *_tooltipModalViewController;
}

+ (id)moreTabButtonFromAlert:(id)arg1;
+ (id)accountButtonViewFromAlert:(id)arg1;
+ (id)supportedTemplates;
- (void).cxx_destruct;
@property(nonatomic) __weak ModalShimViewController *tooltipModalViewController; // @synthesize tooltipModalViewController=_tooltipModalViewController;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)styleUnselectedButtonThemedPromo:(id)arg1;
- (void)styleSelectedButtonThemedPromo:(id)arg1;
- (id)buttonForCTA:(id)arg1;
- (void)inlineAlertCtaButtonTapped:(id)arg1;
- (void)tooltipDismissed;
- (void)tooltipTapped;
- (void)dismissTooltipUMA:(_Bool)arg1;
- (void)startTooltipTimer;
- (void)handleTooltipMessage:(id)arg1;
- (id)tooltipSourceView:(id)arg1 source:(unsigned long long)arg2;
- (unsigned long long)tooltipSource;
- (void)setAlertInlineViewButton:(id)arg1 withLocalizedCopyFromAlert:(id)arg2 atIndex:(long long)arg3;
- (id)createAlertInlineView:(id)arg1;
- (void)handleInlineMessage:(id)arg1;
- (void)messagingViewControllerViewDidLoad:(id)arg1;
- (id)loadXib;
- (void)handleFullscreenMessage:(id)arg1;
- (id)init;

@end

