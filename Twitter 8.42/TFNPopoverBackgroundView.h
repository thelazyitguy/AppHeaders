//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNPopoverSourceSpecification-Protocol.h>

@class NSString, TFNPopoverBackgroundArrowView, UIBarButtonItem, UIColor;

@interface TFNPopoverBackgroundView : UIView <TFNPopoverSourceSpecification>
{
    TFNPopoverBackgroundArrowView *_arrowView;
    _Bool _allowCenteredPresentationWithoutSource;
    UIBarButtonItem *_barButtonItem;
    UIView *_sourceView;
    unsigned long long _arrowDirection;
    double _arrowOffset;
    UIColor *_arrowColor;
    unsigned long long _permittedArrowDirections;
    struct CGSize _arrowSize;
    struct CGPoint _popoverSourceOriginOffset;
    struct CGRect _sourceRect;
    struct UIEdgeInsets _boundingViewEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint popoverSourceOriginOffset; // @synthesize popoverSourceOriginOffset=_popoverSourceOriginOffset;
@property(nonatomic) struct UIEdgeInsets boundingViewEdgeInsets; // @synthesize boundingViewEdgeInsets=_boundingViewEdgeInsets;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) _Bool allowCenteredPresentationWithoutSource; // @synthesize allowCenteredPresentationWithoutSource=_allowCenteredPresentationWithoutSource;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
- (_Bool)tfn_isInPopover;
- (void)_positionArrowView;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)_frameForSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 arrowPoint:(struct CGPoint)arg3 arrowOffset:(double)arg4;
- (struct CGRect)_frameForSize:(struct CGSize)arg1 fromRect:(struct CGRect)arg2 inBounds:(struct CGRect)arg3 withEdgeInsets:(struct UIEdgeInsets)arg4 arrowDirection:(unsigned long long)arg5 getArrowPoint:(out struct CGPoint *)arg6 arrowOffset:(out double *)arg7;
- (id)_arrowDirectionCandidatesForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (struct UIEdgeInsets)edgeInsetsWithSystemSafeAreaForBoundingView:(id)arg1 aboveKeyboard:(_Bool)arg2;
- (void)getPointToSourceFrame:(out struct CGRect *)arg1 arrowDirection:(out unsigned long long *)arg2 arrowOffset:(out double *)arg3 forPopoverSize:(struct CGSize)arg4 inBoundingView:(id)arg5 withKeyboardHeight:(double)arg6;
- (void)pointToSource;
@property(nonatomic) long long arrowBlurStyle;
@property(nonatomic) double arrowBlur;
@property(nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
