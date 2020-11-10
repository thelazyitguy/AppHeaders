//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIStackView, UIViewController;
@protocol NFUITabBarCustomBadgeViewProtocol, NFUITabBarCustomViewProtocol, NFUITabBarItemDelegate;

@interface NFUITabBarItem : UIView
{
    _Bool _selected;
    _Bool _shouldTint;
    id <NFUITabBarItemDelegate> _delegate;
    UIImageView *_imageView;
    UIView<NFUITabBarCustomViewProtocol> *_customView;
    UIView<NFUITabBarCustomBadgeViewProtocol> *_customBadgeView;
    UIView *_badgeContainer;
    UILabel *_badgeLabel;
    UIViewController *_associatedViewController;
    NSString *_navigationBaseLevel;
    NSArray *_lastNavigationStack;
    NSString *_focusViewName;
    NSString *_commandName;
    NSString *_presentationViewName;
    UIStackView *_stackViewContainer;
    UILabel *_icon;
    UIImageView *_loaderImageView;
    UILabel *_label;
    UIImage *_image;
    UIImage *_selectedImage;
    NSString *_iconText;
    NSString *_selectedIconText;
    NSArray *_badgeConstraints;
    UIColor *_defaultColor;
    UIColor *_selectedColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) NSArray *badgeConstraints; // @synthesize badgeConstraints=_badgeConstraints;
@property(retain, nonatomic) NSString *selectedIconText; // @synthesize selectedIconText=_selectedIconText;
@property(retain, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *loaderImageView; // @synthesize loaderImageView=_loaderImageView;
@property(retain, nonatomic) UILabel *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIStackView *stackViewContainer; // @synthesize stackViewContainer=_stackViewContainer;
@property(retain, nonatomic) NSString *presentationViewName; // @synthesize presentationViewName=_presentationViewName;
@property(retain, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
@property(retain, nonatomic) NSString *focusViewName; // @synthesize focusViewName=_focusViewName;
@property(retain, nonatomic) NSArray *lastNavigationStack; // @synthesize lastNavigationStack=_lastNavigationStack;
@property(retain, nonatomic) NSString *navigationBaseLevel; // @synthesize navigationBaseLevel=_navigationBaseLevel;
@property(nonatomic) __weak UIViewController *associatedViewController; // @synthesize associatedViewController=_associatedViewController;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIView *badgeContainer; // @synthesize badgeContainer=_badgeContainer;
@property(nonatomic) __weak UIView<NFUITabBarCustomBadgeViewProtocol> *customBadgeView; // @synthesize customBadgeView=_customBadgeView;
@property(nonatomic) __weak UIView<NFUITabBarCustomViewProtocol> *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool shouldTint; // @synthesize shouldTint=_shouldTint;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <NFUITabBarItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasPresentedViewController;
- (unsigned long long)accessibilityTraits;
- (void)adjustLabelCompressionForHeight:(_Bool)arg1;
- (void)animateSelectionChange:(_Bool)arg1;
- (void)setTitleHidden:(_Bool)arg1;
@property(retain, nonatomic) UIFont *titleFont;
- (void)setTitleLineBreakMode:(long long)arg1;
- (void)setTextSize:(double)arg1;
- (void)layoutSubviews;
- (void)setBadgeText:(id)arg1;
- (void)setTabAccessiblityIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *titleText;
- (void)setTabDefaultColor:(id)arg1 selectedColor:(id)arg2;
- (void)toggleIcon;
- (void)toggleImage;
- (void)setSelectedImageWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setImageWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupConstraints;
- (void)commonInitWithCustomView:(id)arg1 customBadgeView:(id)arg2;
- (id)initWithCustomView:(id)arg1 withCustomBadgeView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

