//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OAStackView.h>

#import <Module_Framework/GWACollectionViewCell-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/GWAResultingComponent-Protocol.h>
#import <Module_Framework/NIAttributedLabelDelegate-Protocol.h>

@class GWAAttributedLabel, GWAImageWithCaptionView, GWAMegalogsContext, NSArray, NSLayoutConstraint, NSNumber, NSString, OrchInfoMessage, UIColor, UIFont, UILabel, UIStackView;

@interface GWAInfoMessageView : OAStackView <NIAttributedLabelDelegate, GWACollectionViewCell, GWAResultingComponent, GWAMegalogsSupportingComponent>
{
    GWAAttributedLabel *_label;
    GWAAttributedLabel *_appendedDetailedMessage;
    UILabel *_bullet;
    UIStackView *_verticleTextStackView;
    GWAImageWithCaptionView *_imageView;
    NSString *_detailedMessageHTML;
    NSLayoutConstraint *_heightConstraintWhenHidden;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    unsigned long long _displayType;
    OrchInfoMessage *_proto;
    UIColor *_lightModeTextColor;
    UIColor *_darkModeTextColor;
    UIColor *_lightModeBulletPointColor;
    UIColor *_darkModeBulletPointColor;
    UIFont *_textFont;
    long long _textAlignment;
}

+ (id)bullet;
+ (id)verticleTextStackView;
+ (id)textLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) GWAAttributedLabel *label; // @synthesize label=_label;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *darkModeBulletPointColor; // @synthesize darkModeBulletPointColor=_darkModeBulletPointColor;
@property(retain, nonatomic) UIColor *lightModeBulletPointColor; // @synthesize lightModeBulletPointColor=_lightModeBulletPointColor;
@property(retain, nonatomic) UIColor *darkModeTextColor; // @synthesize darkModeTextColor=_darkModeTextColor;
@property(retain, nonatomic) UIColor *lightModeTextColor; // @synthesize lightModeTextColor=_lightModeTextColor;
@property(readonly, nonatomic) OrchInfoMessage *proto; // @synthesize proto=_proto;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
- (void)prepareMegalogsContexts;
- (id)imageView;
- (id)darkModeTextColorForDisplayType:(int)arg1;
- (id)lightModeTextColorForDisplayType:(int)arg1;
- (id)textFontStyleForDisplayType:(int)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)setCellAlignment:(unsigned long long)arg1;
- (double)heightWithConstrainedToWidth:(double)arg1;
- (void)setMaxLabelWidth:(double)arg1;
- (long long)textAlignmentFromProto;
- (id)message;
- (void)setAttributedText:(id)arg1;
- (void)updateAttributedTextWithHTMLString:(id)arg1;
- (void)updateWithProto;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)applyDarkMode;
- (void)applyLightMode;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBulletPointWithStep:(unsigned long long)arg1;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
