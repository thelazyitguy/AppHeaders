//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, NSArray, UIStackView;
@protocol GLUETheme;

@interface SPTHomeUITopBarView : UIView
{
    id <GLUETheme> _theme;
    UIStackView *_buttonStack;
    GLUELabel *_title;
    GLUELabel *_subtitle;
    NSArray *_arrangedButtons;
}

+ (double)preferredHeightForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
+ (id)subtitleStyleWithTheme:(id)arg1;
+ (id)titleStyleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *arrangedButtons; // @synthesize arrangedButtons=_arrangedButtons;
@property(readonly, nonatomic) GLUELabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) GLUELabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIStackView *buttonStack; // @synthesize buttonStack=_buttonStack;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (id)horizontalConstraintsForLabel:(id)arg1;
- (void)activateConstraintsWithTitles;
- (void)activateConstraintsWithNoTitles;
- (void)activateConstraints;
- (void)applySubtitleStyle;
- (void)applyTitleStyle;
- (void)applyGlueStyle;
- (void)configureAccessibility;
- (void)configureLabelsWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithArrangedButtons:(id)arg1 theme:(id)arg2 frame:(struct CGRect)arg3;

@end

