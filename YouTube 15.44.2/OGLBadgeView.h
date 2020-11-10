//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol OGLBadgeContent;

@interface OGLBadgeView : UIView
{
    _Bool _badgeContentApplied;
    id <OGLBadgeContent> _badgeContent;
    long long _badgeSize;
    UIImageView *_imageView;
    UILabel *_textLabel;
    NSString *_rawText;
    UIView *_outerCircle;
    UIView *_innerCircle;
    struct CGSize _contentSize;
    struct CGSize _originalContentSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(retain, nonatomic) UIView *outerCircle; // @synthesize outerCircle=_outerCircle;
@property(retain, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool badgeContentApplied; // @synthesize badgeContentApplied=_badgeContentApplied;
@property(nonatomic) long long badgeSize; // @synthesize badgeSize=_badgeSize;
@property(retain, nonatomic) id <OGLBadgeContent> badgeContent; // @synthesize badgeContent=_badgeContent;
- (void)updateTextLabel;
- (void)applyBadgeContent;
- (void)applyTheme;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithBadgeContent:(id)arg1;
- (id)init;

@end

