//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTBrowseUIPromoStyle, SPTBrowseUIPromoView;
@protocol HUBComponentEventHandler;

@interface SPTBrowseUIPromoComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents, HUBComponentViewWithImageHandling>
{
    _Bool _highlighted;
    id <HUBComponentEventHandler> _eventHandler;
    SPTBrowseUIPromoStyle *_style;
    SPTBrowseUIPromoView *_promoView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) SPTBrowseUIPromoView *promoView; // @synthesize promoView=_promoView;
@property(copy, nonatomic) SPTBrowseUIPromoStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)accessibilityLabel;
- (void)sendSelectionEvent;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (long long)obtainImageDisplayState:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)preferredSizeForBackgroundImage;
- (void)setupSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

