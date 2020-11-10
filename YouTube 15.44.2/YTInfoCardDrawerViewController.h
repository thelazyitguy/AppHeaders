//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTCollectionViewScrollObserver-Protocol.h>
#import <Module_Framework/YTInfoCardAppearanceResponderProvider-Protocol.h>
#import <Module_Framework/YTInfoCardDrawerOverlayProtocol-Protocol.h>
#import <Module_Framework/YTInfoCardDrawerViewDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTScrollsToTopResponderProvider-Protocol.h>

@class GIMMe, NSString, UIView, YTIInfoCardCollectionRenderer, YTIInfoCardRenderer, YTInfoCardDrawerView, YTInnerTubeCollectionViewController, YTVEVisibilityUpdateResponderEventGate;
@protocol YTInfoCardDrawerControllerParentDelegate, YTInfoCardDrawerOverlayDelegate, YTResponder;

@interface YTInfoCardDrawerViewController : UIViewController <YTInfoCardAppearanceResponderProvider, YTScrollsToTopResponderProvider, YTResponder, YTInfoCardDrawerViewDelegate, YTInfoCardDrawerOverlayProtocol, YTCollectionViewScrollObserver>
{
    YTIInfoCardCollectionRenderer *_infoCardCollectionRenderer;
    YTInfoCardDrawerView *_drawerFullscreenView;
    YTInnerTubeCollectionViewController *_collectionViewController;
    int _appearanceStyle;
    YTVEVisibilityUpdateResponderEventGate *_visibilityUpdateGate;
    _Bool _shouldAutoscroll;
    YTIInfoCardRenderer *_cardToActivate;
    _Bool _visible;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTInfoCardDrawerOverlayDelegate> _delegate;
    id <YTInfoCardDrawerControllerParentDelegate> _parentDelegate;
    unsigned long long _activeCardIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long activeCardIndex; // @synthesize activeCardIndex=_activeCardIndex;
@property(readonly, nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <YTInfoCardDrawerControllerParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <YTInfoCardDrawerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)formatterForAppearanceStyle:(int)arg1;
- (void)reloadData;
- (void)invalidateView;
- (id)layoutForAppearanceStyle:(int)arg1;
- (unsigned long long)indexOfInfoCard:(id)arg1;
- (void)close;
- (void)didPressClose:(id)arg1 forEvent:(id)arg2;
- (void)setActiveCardFromIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToActiveCard;
- (_Bool)shouldBeShowingFromFullscreen:(_Bool)arg1;
- (void)setDrawerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)collectionViewControllerWillBeginDragging:(id)arg1;
- (void)collectionViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (int)infoCardAppearanceStyle;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (_Bool)isVisible;
- (void)playerControlsWillShow;
- (void)setFullscreen:(_Bool)arg1;
- (void)drawerDidClose;
- (void)drawerDidOpen;
- (_Bool)shouldScrollToTop:(id)arg1;
- (void)updateVisibilityFromActive:(_Bool)arg1 animated:(_Bool)arg2 isFullscreen:(_Bool)arg3;
- (void)setActiveCard:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithInfoCardCollectionRenderer:(id)arg1 appearanceStyle:(int)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

