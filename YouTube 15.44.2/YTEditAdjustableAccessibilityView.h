//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol YTAdjustableAccessibilityProtocol;

@interface YTEditAdjustableAccessibilityView : UIView
{
    id <YTAdjustableAccessibilityProtocol> _adjustableViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTAdjustableAccessibilityProtocol> adjustableViewDelegate; // @synthesize adjustableViewDelegate=_adjustableViewDelegate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;

@end

