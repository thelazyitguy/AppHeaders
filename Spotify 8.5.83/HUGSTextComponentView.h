//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class GLUELabel, NSLayoutConstraint;

@interface HUGSTextComponentView : HUGSThemableComponentView
{
    _Bool _useSmallText;
    double _layoutMargin;
    GLUELabel *_labelView;
    NSLayoutConstraint *_labelTopConstraint;
}

+ (double)extraPaddingWithModel:(id)arg1;
+ (_Bool)shouldAddExtraAccessoryButtonPaddingWithModel:(id)arg1;
+ (id)textStyleUseSmallText:(_Bool)arg1 theme:(id)arg2;
+ (_Bool)useSmallTextForModel:(id)arg1;
+ (id)textStyleForModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool useSmallText; // @synthesize useSmallText=_useSmallText;
@property(retain, nonatomic) NSLayoutConstraint *labelTopConstraint; // @synthesize labelTopConstraint=_labelTopConstraint;
@property(retain, nonatomic) GLUELabel *labelView; // @synthesize labelView=_labelView;
@property(readonly, nonatomic) double layoutMargin; // @synthesize layoutMargin=_layoutMargin;
- (void)applyThemeLayout;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end
