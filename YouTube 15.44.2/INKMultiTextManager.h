//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/INKTextManager.h>

#import <Module_Framework/UITextViewDelegate-Protocol.h>

@class INKMultiTextManagerState, NSArray, NSLayoutConstraint, NSString, UIColor, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UITextView, UIView;

@interface INKMultiTextManager : INKTextManager <UITextViewDelegate>
{
    INKMultiTextManagerState *_currentState;
    UIColor *_decorationColor;
    UITextView *_textView;
    NSArray *_decorations;
    NSLayoutConstraint *_xConstraint;
    NSLayoutConstraint *_yConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIPanGestureRecognizer *_panRecognizer;
    UIView *_currentAnchor;
    UIPinchGestureRecognizer *_pinchRecognizer;
    double _pinchStartTextSize;
    UITapGestureRecognizer *_doubleTapRecognizer;
    NSString *_editingUuid;
    NSString *_editingGroupUuid;
    struct CGPoint _panStartLocation;
    struct CGSize _panStartSize;
    struct _NSRange _panSavedSelection;
    struct CGRect _pinchStartFrame;
    struct CGRect _documentBoundsOnScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *editingGroupUuid; // @synthesize editingGroupUuid=_editingGroupUuid;
@property(retain, nonatomic) NSString *editingUuid; // @synthesize editingUuid=_editingUuid;
@property(nonatomic) struct CGRect documentBoundsOnScreen; // @synthesize documentBoundsOnScreen=_documentBoundsOnScreen;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(nonatomic) double pinchStartTextSize; // @synthesize pinchStartTextSize=_pinchStartTextSize;
@property(nonatomic) struct CGRect pinchStartFrame; // @synthesize pinchStartFrame=_pinchStartFrame;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(readonly, nonatomic) __weak UIView *currentAnchor; // @synthesize currentAnchor=_currentAnchor;
@property(nonatomic) struct _NSRange panSavedSelection; // @synthesize panSavedSelection=_panSavedSelection;
@property(nonatomic) struct CGSize panStartSize; // @synthesize panStartSize=_panStartSize;
@property(nonatomic) struct CGPoint panStartLocation; // @synthesize panStartLocation=_panStartLocation;
@property(readonly, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *yConstraint; // @synthesize yConstraint=_yConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *xConstraint; // @synthesize xConstraint=_xConstraint;
@property(readonly, nonatomic) NSArray *decorations; // @synthesize decorations=_decorations;
@property(readonly, nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UIColor *decorationColor; // @synthesize decorationColor=_decorationColor;
@property(readonly, nonatomic) INKMultiTextManagerState *currentState; // @synthesize currentState=_currentState;
- (void)respondToDoubleTapRecognizer:(id)arg1;
- (void)disableDoubleTapRecognizer;
- (void)enableDoubleTapRecognizer;
- (double)constrainScale:(double)arg1 forFrame:(struct CGRect)arg2 inBounds:(struct CGRect)arg3;
- (void)respondToPinchRecognizer:(id)arg1;
- (void)disablePinchRecognizer;
- (void)enablePinchRecognizer;
- (void)respondToPanRecognizer:(id)arg1;
- (id)findNearestAnchorToPoint:(struct CGPoint)arg1;
- (void)disablePanRecognizer;
- (void)enablePanRecognizer;
- (void)clearCurrentTextView;
- (_Bool)commitCurrentTextWithError:(id *)arg1;
- (_Bool)hasOpenTextChanges;
- (_Bool)redo;
- (_Bool)undo;
- (void)rehydrateInBox:(struct CGRect)arg1 URI:(id)arg2 uuid:(const basic_string_90719d97 *)arg3;
- (id)fragmentRangesForTextAttributes:(id)arg1;
- (id)displayNewTextInBox:(struct CGRect)arg1;
- (void)setConstraintsToBox:(struct CGRect)arg1 addingInset:(double)arg2;
- (void)addDebugDecorations:(id)arg1;
- (void)createDecoratedTextViewWithFont:(id)arg1;
- (void)createDecoratedTextViewWithFontName:(id)arg1 fontSize:(double)arg2;
- (id)transitionToState:(id)arg1;
- (void)startEditingTextWithUuid:(id)arg1 groupUuid:(id)arg2 text:(id)arg3 dipRect:(struct CGRect)arg4 rotation:(double)arg5;
- (void)handleQueryToolUp:(struct CGPoint)arg1 down:(struct CGPoint)arg2 withQueryItems:(const vector_46416846 *)arg3;
- (id)newManipulationState;
- (id)newEditStateWithTextView:(id)arg1;
- (id)newIdleState;
- (id)init;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

