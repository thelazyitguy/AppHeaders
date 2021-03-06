//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface VISREFCreatorRowView : UIView
{
    NSArray *_creators;
    UIImageView *_imageView;
    UILabel *_textLabel;
    NSLayoutConstraint *_textLabelImageLeadingConstraint;
    NSLayoutConstraint *_textLabelLeadingConstraint;
}

+ (void)updateLabelsAttributedText:(id)arg1 withCreators:(id)arg2 availableWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *textLabelLeadingConstraint; // @synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelImageLeadingConstraint; // @synthesize textLabelImageLeadingConstraint=_textLabelImageLeadingConstraint;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *creators; // @synthesize creators=_creators;
- (id)lastBaselineAnchor;
- (id)firstLineHeightAnchor;
- (void)updateCreatorsLabelText;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)hideImage:(_Bool)arg1;
- (id)init;

@end

