//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/TOKOverlayEditorView.h>

#import <Module_Framework/NSLayoutManagerDelegate-Protocol.h>
#import <Module_Framework/NSTextStorageDelegate-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, TOKTextOverlay, TOKTextOverlayTextView, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol TOKTextOverlayEditorTextEditingDelegate><TOKTextOverlayEditorModelDelegate;

@interface TOKTextOverlayEditorView : TOKOverlayEditorView <NSTextStorageDelegate, NSLayoutManagerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>
{
    TOKTextOverlay *_textOverlay;
    TOKTextOverlayTextView *_textView;
    _Bool _keyboardObserversActive;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    UIPinchGestureRecognizer *_pointSizePinchGestureRecognizer;
    double _pinchPointSizeStart;
    _Bool _keyboardDidAppear;
    _Bool _allowNewLines;
    _Bool _allowPasteboardText;
    _Bool _pointSizeGestureEnabled;
    NSString *_placeholderText;
    unsigned long long _maxCharacterInput;
    id <TOKTextOverlayEditorTextEditingDelegate><TOKTextOverlayEditorModelDelegate> _delegate;
}

+ (void)resetGestureRecognizer:(id)arg1;
+ (id)usedLineRectsForLayoutManager:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TOKTextOverlayEditorTextEditingDelegate><TOKTextOverlayEditorModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pointSizeGestureEnabled; // @synthesize pointSizeGestureEnabled=_pointSizeGestureEnabled;
@property(nonatomic) _Bool allowPasteboardText; // @synthesize allowPasteboardText=_allowPasteboardText;
@property(nonatomic) _Bool allowNewLines; // @synthesize allowNewLines=_allowNewLines;
@property(nonatomic) unsigned long long maxCharacterInput; // @synthesize maxCharacterInput=_maxCharacterInput;
@property(readonly, nonatomic) TOKTextOverlay *textOverlay; // @synthesize textOverlay=_textOverlay;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePointSizePinchGesture:(id)arg1;
- (void)handleEditingTapGesture:(id)arg1;
- (void)removeEditingGestures;
- (void)addEditingGestures;
- (void)setUpEditingGestures;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardObservers;
- (void)addKeyboardObservers;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)sizeToFitWidth:(double)arg1;
- (unsigned long long)remainingCount;
- (void)performTextEditorCantBeginAnimation;
@property(nonatomic) struct UIEdgeInsets editingTextContainerInsets;
@property(nonatomic) struct UIEdgeInsets defaultTextContainerInset;
- (void)setUpTextView;
- (void)loadView;
- (void)forceTextUpdate;
- (void)setTextStyle:(long long)arg1;
- (void)setNextTextStyle;
@property(readonly, nonatomic) NSAttributedString *attributedText;
@property(readonly, nonatomic) NSString *text;
- (void)notifyDidMutateModel;
- (void)setCursorToEndOfTextAnimated:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long textCursorPosition;
- (void)setCursorColor:(id)arg1 immediate:(_Bool)arg2;
- (struct CGRect)currentHitFrame;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)canonicalModelWithOverlayContext:(id)arg1;
- (_Bool)hasEdits;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textOverlay:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

