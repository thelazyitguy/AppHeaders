//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, UIColor;

@protocol SPTLoginSlideUpDefaultDialogViewStyle <GLUEStyle>
@property(nonatomic) double contentHorizontalMargin;
@property(nonatomic) double secondaryActionButtonBottomMargin;
@property(nonatomic) double secondaryActionButtonTopMargin;
@property(nonatomic) double mainActionButtonTopMargin;
@property(nonatomic) double messageTopMargin;
@property(nonatomic) double titleTopMargin;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *secondaryActionButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *mainActionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle;
@end

