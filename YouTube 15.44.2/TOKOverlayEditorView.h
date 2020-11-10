//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/TOKOverlayGestureManagerManagedView-Protocol.h>

@class NSString, TOKOverlayBase;

@interface TOKOverlayEditorView : UIView <TOKOverlayGestureManagerManagedView>
{
    _Bool _trackingEnabled;
    TOKOverlayBase *_overlay;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isTrackingEnabled) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(retain, nonatomic) TOKOverlayBase *overlay; // @synthesize overlay=_overlay;
- (void)overlayGestureManagerDidEnd:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)overlayGestureManagerWillBegin:(id)arg1 withGestureRecognizer:(id)arg2;
- (_Bool)overlayGestureManagerShouldBeginTransformingView:(id)arg1;
- (void)notifyDidMutateModel;
- (id)canonicalModelWithOverlayContext:(id)arg1;
- (_Bool)hasEdits;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

