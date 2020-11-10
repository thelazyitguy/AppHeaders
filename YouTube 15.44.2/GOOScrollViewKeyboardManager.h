//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDCKeyboardWatcher, UIScrollView;
@protocol GOOScrollViewKeyboardManagerDelegate;

@interface GOOScrollViewKeyboardManager : NSObject
{
    id <GOOScrollViewKeyboardManagerDelegate> _delegate;
    UIScrollView *_scrollView;
    MDCKeyboardWatcher *_keyboardWatcher;
    double _insetBottomDelta;
    double _modifiedContentOffsetY;
    double _contentOffsetYDelta;
}

- (void).cxx_destruct;
@property(nonatomic) double contentOffsetYDelta; // @synthesize contentOffsetYDelta=_contentOffsetYDelta;
@property(nonatomic) double modifiedContentOffsetY; // @synthesize modifiedContentOffsetY=_modifiedContentOffsetY;
@property(nonatomic) double insetBottomDelta; // @synthesize insetBottomDelta=_insetBottomDelta;
@property(retain, nonatomic) MDCKeyboardWatcher *keyboardWatcher; // @synthesize keyboardWatcher=_keyboardWatcher;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GOOScrollViewKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)keyboardFrameForWindow:(id)arg1 keyboardOffset:(double)arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateScrollViewPositionWithKeyboardUserInfo:(id)arg1;
- (void)delayedUpdateScrollViewPosition;
- (void)delayedUpdateScrollViewPositionWithKeyboardUserInfo:(id)arg1;
- (void)restoreFromDeltas;
- (double)targetOffset;
- (id)viewToScroll;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

