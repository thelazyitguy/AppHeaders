//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UAInAppMessageTextInfo, UAInAppMessageTextStyle, UILabel;

@interface UAInAppMessageTextView : UIView
{
    UAInAppMessageTextStyle *_style;
    UILabel *_textLabel;
    UAInAppMessageTextInfo *_textInfo;
}

+ (id)textViewWithTextInfo:(id)arg1 style:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UAInAppMessageTextInfo *textInfo; // @synthesize textInfo=_textInfo;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UAInAppMessageTextStyle *style; // @synthesize style=_style;
- (id)initWithTextInfo:(id)arg1 style:(id)arg2;

@end
