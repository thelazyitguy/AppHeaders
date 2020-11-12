//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GBTThemeable-Protocol.h"
#import "HUBFontManagerCachedFontAndAttributesRefresher-Protocol.h"

@class GBTSmartMailInteractionForwarder, NSArray, NSString;
@protocol GBTCardViewDelegate, GBTSmartMailInteractionSupport;

@interface GBTCardView : UIView <HUBFontManagerCachedFontAndAttributesRefresher, GBTThemeable>
{
    UIView *_cardBackground;
    GBTSmartMailInteractionForwarder *_forwarder;
    UIView *_snippetContainer;
    id <GBTCardViewDelegate> _delegate;
    NSArray *_snippetSpacing;
}

+ (id)defaultSnippetFont;
+ (void)refreshCachedFontAndAttributes;
+ (void)initialize;
+ (double)snippetWidthForWidth:(double)arg1;
+ (double)snippetRightMargin;
+ (double)snippetLeftMargin;
+ (double)imageWidth;
+ (double)horizontalOuterPadding;
+ (double)textSpacing;
+ (double)textHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *snippetSpacing; // @synthesize snippetSpacing=_snippetSpacing;
@property(nonatomic) __weak id <GBTCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gbt_applyTheme:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
@property(nonatomic) __weak id <GBTSmartMailInteractionSupport> smartMailDelegate;
- (void)userDidSelectInView:(id)arg1 withDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)snippetForLineItem:(id)arg1 index:(unsigned long long)arg2 accentColor:(id)arg3;
- (void)createSubviews;
- (id)snippetWithAddToContainer:(_Bool)arg1;
- (double)rightPaddingForSnippetAtIndex:(long long)arg1 withTotalSnippetsCount:(long long)arg2;
- (void)repositionSnippetContainerWithFlexibleWidth:(_Bool)arg1;
- (void)prepareSnippetContainerForReuse;
@property(readonly, nonatomic) UIView *snippetContainer;
- (void)cardTapped;
@property(readonly, nonatomic) UIView *cardBackground;
@property(readonly, nonatomic) GBTSmartMailInteractionForwarder *forwarder; // @dynamic forwarder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
