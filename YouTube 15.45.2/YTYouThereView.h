//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSMutableArray, NSString, YTFormattedStringLabel, YTIYouThereData, YTIYouThereRenderer, YTQTMButton;
@protocol YTPageStyleProvider, YTYouThereViewDelegate;

@interface YTYouThereView : UIView <YTPageStyling, YTPageStyleProvider>
{
    YTIYouThereRenderer *_renderer;
    YTIYouThereData *_data;
    id <YTYouThereViewDelegate> _delegate;
    YTFormattedStringLabel *_questionLabel;
    YTQTMButton *_dismissButton;
    NSMutableArray *_accessibilityElements;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
- (double)maxLabelWidth;
- (void)handleDismissTap:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)updateViewAfterUserPresenceDetected;
- (void)updateViewAfterPlaybackPause;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithRenderer:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
