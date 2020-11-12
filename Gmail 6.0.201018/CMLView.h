//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CMLResizableView-Protocol.h"
#import "CMLResizableViewDelegate-Protocol.h"
#import "DYNCMLView-Protocol.h"

@class CMLComponent, CMLContainerView, NSString;
@protocol CMLResizableViewDelegate, DYNCMLResizableViewDelegate;

@interface CMLView : UIView <DYNCMLView, CMLResizableViewDelegate, CMLResizableView>
{
    CMLComponent *rootComponent_;
    CMLContainerView *rootView_;
    double _preferredWidth;
    id <CMLResizableViewDelegate> _resizeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CMLResizableViewDelegate> resizeDelegate; // @synthesize resizeDelegate=_resizeDelegate;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewNeedsResize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)disableNextLayoutAnimation;
- (id)viewWithComponentId:(id)arg1;
- (void)updateView;
- (void)setComponent:(id)arg1 view:(id)arg2;
- (void)viewNeedsResize;
@property(nonatomic) __weak id <DYNCMLResizableViewDelegate> dynamiteResizeDelegate;
@property(nonatomic) double dynamitePreferredWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
