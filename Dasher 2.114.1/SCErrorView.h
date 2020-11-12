//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ServiceCore/SCAppearanceApplicator-Protocol.h>

@class NSString, SCAppearanceConfiguration, UIColor, UIFont, UIImageView, UILabel;

@interface SCErrorView : UIView <SCAppearanceApplicator>
{
    SCAppearanceConfiguration *_appearanceConfiguration;
    NSString *_errorImageName;
    UILabel *_errorTitle;
    UILabel *_errorDescription;
    UIImageView *_errorImageView;
}

+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) UILabel *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) UILabel *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(copy, nonatomic) NSString *errorImageName; // @synthesize errorImageName=_errorImageName;
@property(copy, nonatomic) SCAppearanceConfiguration *appearanceConfiguration; // @synthesize appearanceConfiguration=_appearanceConfiguration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setErrorImage:(id)arg1;
- (id)errorImage;
@property(retain, nonatomic) UIColor *errorImageColor;
@property(retain, nonatomic) UIFont *errorDescriptionLabelFont;
@property(retain, nonatomic) UIColor *errorDescriptionLabelColor;
@property(retain, nonatomic) UIFont *errorTitleLabelFont;
@property(retain, nonatomic) UIColor *errorTitleLabelColor;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
