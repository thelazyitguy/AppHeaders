//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/IFFeedTopPanelViewInput-Protocol.h>

@class NSObject, NSString;
@protocol IFFeedPanelDelegate, IFFeedTopPanelViewInput;

@interface IFFeedTopPanelView : UIView <IFFeedTopPanelViewInput>
{
    NSObject<IFFeedPanelDelegate> *feedPanelDelegate;
    unsigned long long _topPanelState;
    UIView<IFFeedTopPanelViewInput> *_nativeAdInfoView;
    UIView<IFFeedTopPanelViewInput> *_memeSummaryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<IFFeedTopPanelViewInput> *memeSummaryView; // @synthesize memeSummaryView=_memeSummaryView;
@property(retain, nonatomic) UIView<IFFeedTopPanelViewInput> *nativeAdInfoView; // @synthesize nativeAdInfoView=_nativeAdInfoView;
@property(nonatomic) unsigned long long topPanelState; // @synthesize topPanelState=_topPanelState;
- (void)updateUIForCurrentTopPanelSate;
@property(nonatomic) __weak NSObject<IFFeedPanelDelegate> *feedPanelDelegate; // @synthesize feedPanelDelegate;
- (void)layoutSubviews;
- (unsigned long long)contentAnchorType;
- (double)panelContentHeight;
- (double)finalYPosition;
- (id)currentTopPanel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
