//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ABKInAppMessageButton, UIColor;

@interface ABKInAppMessageUIButton : UIButton
{
    ABKInAppMessageButton *_inAppButtonModel;
    UIColor *_originalBackgroundColor;
}

- (void).cxx_destruct;
@property(copy) UIColor *originalBackgroundColor; // @synthesize originalBackgroundColor=_originalBackgroundColor;
@property(retain) ABKInAppMessageButton *inAppButtonModel; // @synthesize inAppButtonModel=_inAppButtonModel;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

