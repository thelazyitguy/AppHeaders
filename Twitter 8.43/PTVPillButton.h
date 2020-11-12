//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVButton.h>

@interface PTVPillButton : PTVButton
{
    double _imageAlpha;
    unsigned long long _contentInsetStyle;
    double _spacingBetweenLeadingImageAndTitle;
}

@property(nonatomic) double spacingBetweenLeadingImageAndTitle; // @synthesize spacingBetweenLeadingImageAndTitle=_spacingBetweenLeadingImageAndTitle;
@property(nonatomic) unsigned long long contentInsetStyle; // @synthesize contentInsetStyle=_contentInsetStyle;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
- (void)updateCornerRadius;
- (double)cornerRadiusFromCurrentState;
- (void)updateInsets;
- (struct UIEdgeInsets)contentInsetsForStyle:(unsigned long long)arg1;
- (void)updateImageAlpha;
- (void)executeState;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
