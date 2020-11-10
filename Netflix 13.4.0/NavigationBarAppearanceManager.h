//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, UINavigationBar, UINavigationController, UIScrollView, UIView, UIViewController, UIVisualEffectView;
@protocol NFUISecondaryNavigationViewControllerDelegate, OS_dispatch_queue;

@interface NavigationBarAppearanceManager : NSObject
{
    _Bool _displayUpdatesEnabled;
    _Bool _hidesOnScroll;
    _Bool _isTransparent;
    _Bool _isOpaque;
    _Bool _needsDisplayUpdate;
    _Bool _originalAutomaticallyAdjustsScrollViewInsets;
    id <NFUISecondaryNavigationViewControllerDelegate> _secondaryNavigationViewControllerDelegate;
    double _percentVisible;
    UIScrollView *_scrollView;
    UIViewController *_viewControllerForAutomaticallyAdjustsScrollViewInsets;
    double _totalHeight;
    UINavigationController *_navigationController;
    double _lastContentInsetTop;
    double _lastScrollY;
    UIView *_backgroundView;
    UIVisualEffectView *_blurEffectView;
    long long _originalContentInsetAdjustmentBehavior;
    NSPointerArray *_translationDelegates;
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIView *_secondaryNavigationElement;
    struct UIEdgeInsets _originalContentInset;
}

+ (double)statusBarHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *secondaryNavigationElement; // @synthesize secondaryNavigationElement=_secondaryNavigationElement;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSPointerArray *translationDelegates; // @synthesize translationDelegates=_translationDelegates;
@property(nonatomic) _Bool originalAutomaticallyAdjustsScrollViewInsets; // @synthesize originalAutomaticallyAdjustsScrollViewInsets=_originalAutomaticallyAdjustsScrollViewInsets;
@property(nonatomic) long long originalContentInsetAdjustmentBehavior; // @synthesize originalContentInsetAdjustmentBehavior=_originalContentInsetAdjustmentBehavior;
@property(nonatomic) struct UIEdgeInsets originalContentInset; // @synthesize originalContentInset=_originalContentInset;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double lastScrollY; // @synthesize lastScrollY=_lastScrollY;
@property(nonatomic) double lastContentInsetTop; // @synthesize lastContentInsetTop=_lastContentInsetTop;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool needsDisplayUpdate; // @synthesize needsDisplayUpdate=_needsDisplayUpdate;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) __weak UIViewController *viewControllerForAutomaticallyAdjustsScrollViewInsets; // @synthesize viewControllerForAutomaticallyAdjustsScrollViewInsets=_viewControllerForAutomaticallyAdjustsScrollViewInsets;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(nonatomic) _Bool hidesOnScroll; // @synthesize hidesOnScroll=_hidesOnScroll;
@property(nonatomic) _Bool displayUpdatesEnabled; // @synthesize displayUpdatesEnabled=_displayUpdatesEnabled;
@property(nonatomic) __weak id <NFUISecondaryNavigationViewControllerDelegate> secondaryNavigationViewControllerDelegate; // @synthesize secondaryNavigationViewControllerDelegate=_secondaryNavigationViewControllerDelegate;
- (void)enableDisplayUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (void)updateWithVisibilityCommitment:(_Bool)arg1;
- (void)updateWithScrollViewDidScroll;
- (void)updateWithViewWillDisappear;
- (void)updateWithViewDidAppear;
- (void)updateWithViewWillAppear;
- (void)updateDisplayIfNeeded;
- (void)forceUpdateDisplayNow;
@property(readonly, nonatomic) double currentBarHeight;
- (id)initWithNavigationController:(id)arg1;
- (void)updateTransparencyDisplay;
- (void)notifyTranslationDelegates:(double)arg1 forHeight:(double)arg2;
- (void)updateVisibilityDisplay;
- (void)hide;
- (void)show;
- (void)hideWithFade:(_Bool)arg1;
- (void)showWithFade:(_Bool)arg1;
- (void)updateInsetPropertiesForTransparency;
- (_Bool)needsInsetPropertiesUpdateForTransparency:(_Bool)arg1;
- (void)setupBackgroundView;
- (double)percentScrolledInRect:(struct CGRect)arg1;
- (double)statusBarHeight;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar;
- (id)addTranslationDelegate:(id)arg1;

@end

