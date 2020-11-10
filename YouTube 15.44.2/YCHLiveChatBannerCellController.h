//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import <Module_Framework/YCHLiveChatBannerHeaderViewDelegate-Protocol.h>

@class NSString, YTILiveChatRenderer;
@protocol YCHLiveChatStyleProtocol;

@interface YCHLiveChatBannerCellController : YTInnerTubeCellController <YCHLiveChatBannerHeaderViewDelegate>
{
    YTILiveChatRenderer *_initialLiveChatRenderer;
    id <YCHLiveChatStyleProtocol> _style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YCHLiveChatStyleProtocol> style; // @synthesize style=_style;
@property(retain, nonatomic) YTILiveChatRenderer *initialLiveChatRenderer; // @synthesize initialLiveChatRenderer=_initialLiveChatRenderer;
- (void)fetchAuthorBadges;
- (id)collectionViewCell;
- (void)didTapContextMenuButton;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
