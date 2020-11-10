//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "YTSponsorshipsDialogViewProtocol-Protocol.h"

@class NSString, YTIMembershipPostTransactionRenderer, YTPerksView, YTQTMButton, YTSponsorshipsDialogHeaderView;

@interface YTSponsorshipsPostTransactionDialogView : UIView <UIScrollViewDelegate, YTSponsorshipsDialogViewProtocol>
{
    YTIMembershipPostTransactionRenderer *_renderer;
    double _scrollPositionY;
    YTPerksView *_perksContainerView;
    UIView *_footerView;
    UIView *_separator;
    YTSponsorshipsDialogHeaderView *_headerView;
    double maxHeight;
    YTQTMButton *_callToActionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic) double maxHeight; // @synthesize maxHeight;
@property(readonly, nonatomic) YTSponsorshipsDialogHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)sizeContentWithSize:(struct CGSize)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)scrollViewDidScroll:(id)arg1;
- (id)thumbnailMappings;
- (void)setDismissEndpointTarget:(id)arg1 action:(SEL)arg2;
- (void)setCallToActionEndpointTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 renderer:(id)arg2 formattedStringLabelDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

