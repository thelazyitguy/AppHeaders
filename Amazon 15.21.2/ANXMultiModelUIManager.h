//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXMultiModelOverlayViewController;
@protocol ANXMultiModelActionDelegate, ANXMultiModelBottomBarListener;

@interface ANXMultiModelUIManager : NSObject
{
    ANXMultiModelOverlayViewController *_overlayViewController;
    id <ANXMultiModelBottomBarListener> _multiModelBottomBarRootViewController;
    id <ANXMultiModelActionDelegate> _actionDelegate;
}

@property(retain, nonatomic) id <ANXMultiModelActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) id <ANXMultiModelBottomBarListener> multiModelBottomBarRootViewController; // @synthesize multiModelBottomBarRootViewController=_multiModelBottomBarRootViewController;
@property(retain, nonatomic) ANXMultiModelOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
- (void).cxx_destruct;
- (void)addOverlayToRootViewController;
- (void)hideOverlayOnMainThread;
- (void)showOverlayOnMainThread;
- (void)hideOverlay;
- (void)showOverlay;

@end
