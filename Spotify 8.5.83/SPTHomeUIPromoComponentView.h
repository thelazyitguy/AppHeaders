//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "HUGSSelectableComponentView-Protocol.h"

@class NSString, SPTHomeUIComponentDependencies, SPTHomeUIPromoView, UIGestureRecognizer, UIView;
@protocol HUBComponentEventHandler;

@interface SPTHomeUIPromoComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents, HUGSSelectableComponentView, HUBComponentViewObserver>
{
    id <HUBComponentEventHandler> _eventHandler;
    UIGestureRecognizer *_selectionGestureRecognizer;
    SPTHomeUIComponentDependencies *_dependencies;
    SPTHomeUIPromoView *_promoView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 featureProperties:(id)arg2 containerViewSize:(struct CGSize)arg3 theme:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIPromoView *promoView; // @synthesize promoView=_promoView;
@property(readonly, nonatomic) SPTHomeUIComponentDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)sendSelectionEvent;
@property(readonly, nonatomic) UIView *selectionView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithDependencies:(id)arg1 feedbackContextMenu:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

