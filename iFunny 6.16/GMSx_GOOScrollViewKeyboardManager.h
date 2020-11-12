//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_MDCKeyboardWatcher, UIScrollView;
@protocol GOOScrollViewKeyboardManagerDelegate;

@interface GMSx_GOOScrollViewKeyboardManager : NSObject
{
    id <GOOScrollViewKeyboardManagerDelegate> _delegate;
    UIScrollView *_scrollView;
    GMSx_MDCKeyboardWatcher *_keyboardWatcher;
    double _insetBottomDelta;
    double _modifiedContentOffsetY;
    double _contentOffsetYDelta;
}

@property(nonatomic) double contentOffsetYDelta; // @synthesize contentOffsetYDelta=_contentOffsetYDelta;
@property(nonatomic) double modifiedContentOffsetY; // @synthesize modifiedContentOffsetY=_modifiedContentOffsetY;
@property(nonatomic) double insetBottomDelta; // @synthesize insetBottomDelta=_insetBottomDelta;
@property(retain, nonatomic) GMSx_MDCKeyboardWatcher *keyboardWatcher; // @synthesize keyboardWatcher=_keyboardWatcher;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GOOScrollViewKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
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
