//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialComponents/NSObject-Protocol.h>

@protocol MDCTextInputPositioningDelegate <NSObject>

@optional
- (double)trailingViewTrailingPaddingConstant;
- (struct CGRect)trailingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (void)textInputDidUpdateConstraints;
- (void)textInputDidLayoutSubviews;
- (double)leadingViewTrailingPaddingConstant;
- (struct CGRect)leadingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)textInsets:(struct UIEdgeInsets)arg1 withSizeThatFitsWidthHint:(double)arg2;
- (struct UIEdgeInsets)textInsets:(struct UIEdgeInsets)arg1;
@end
