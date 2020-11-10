//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDCOverlayAnimationObserverDelegate-Protocol.h>

@class MDCOverlayAnimationObserver, MDCOverlayObserverTransition, NSMapTable, NSMutableDictionary, NSString;

@interface MDCOverlayObserver : NSObject <MDCOverlayAnimationObserverDelegate>
{
    NSMutableDictionary *_overlays;
    MDCOverlayObserverTransition *_pendingTransition;
    NSMapTable *_actionTable;
    MDCOverlayAnimationObserver *_observer;
}

+ (id)observerForScreen:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) MDCOverlayAnimationObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSMapTable *actionTable; // @synthesize actionTable=_actionTable;
@property(retain, nonatomic) MDCOverlayObserverTransition *pendingTransition; // @synthesize pendingTransition=_pendingTransition;
@property(retain, nonatomic) NSMutableDictionary *overlays; // @synthesize overlays=_overlays;
- (void)animationObserverDidEndRunloop:(id)arg1;
- (void)fireTransition;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)indexOfInvocationForTarget:(id)arg1 action:(SEL)arg2;
- (void)invokeTarget:(id)arg1 withTransition:(id)arg2;
- (id)buildInvocationForTarget:(id)arg1 action:(SEL)arg2;
- (void)handleOverlayChangeNotification:(id)arg1;
- (_Bool)updateOverlay:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)sortedOverlays;
- (void)removeOverlayWithIdentifier:(id)arg1;
- (id)buildOverlayWithIdentifier:(id)arg1;
- (id)overlayWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

