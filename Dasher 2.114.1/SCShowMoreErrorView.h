//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface SCShowMoreErrorView : UIView
{
    UILabel *_errorLabel;
    UIImageView *_errorImageView;
}

@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *imageColor;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIFont *labelFont;
@property(retain, nonatomic) UIColor *labelColor;
- (id)setupSizeConstraintsForView:(id)arg1 size:(struct CGSize)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
