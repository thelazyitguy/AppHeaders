//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;

@interface YTEditKeyboardScrollHandler : NSObject
{
    UIScrollView *_scrollView;
    _Bool _active;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)viewportContainsChildView:(id)arg1 contentOffset:(struct CGPoint)arg2 keyboardHeight:(double)arg3;
- (struct CGPoint)contentOffsetForKeyboardHeight:(double)arg1;
- (void)animateWithKeyboardNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)updateKeyboardHeight:(id)arg1;
- (void)observeKeyboardNotifications;
- (_Bool)shouldScrollToFitKeyboard;
- (void)setInsetsForKeyboardHeight:(double)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

