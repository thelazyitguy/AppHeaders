//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIColor;

@interface SNZSearchBarRightButton : UIButton
{
    UIColor *_dividerColor;
    CALayer *_dividerLayer;
}

@property(retain, nonatomic) CALayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withDividerOfColor:(id)arg2;

@end
