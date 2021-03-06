//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GMCSTextContentViewObject.h>

@class GMSx_GMCSAccessoryButtonContentView, NSString, UIColor, UIFont, UIImage;

@interface GMSx_GMCSAccessoryButtonContentViewObject : GMSx_GMCSTextContentViewObject
{
    _Bool _accessoryButtonTextIsUppercase;
    _Bool _accessoryButtonHidden;
    UIImage *_accessoryButtonImage;
    NSString *_accessoryButtonText;
    UIColor *_accessoryButtonTextColor;
    double _accessoryButtonElevation;
    UIFont *_accessoryButtonFont;
    id _accessoryButtonTarget;
    SEL _accessoryButtonAction;
    NSString *_accessoryButtonAccessibilityLabel;
    double _accessoryButtonMaxRippleRadius;
    GMSx_GMCSAccessoryButtonContentView *_contentView;
    struct UIEdgeInsets _accessoryButtonTextInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GMSx_GMCSAccessoryButtonContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double accessoryButtonMaxRippleRadius; // @synthesize accessoryButtonMaxRippleRadius=_accessoryButtonMaxRippleRadius;
@property(retain, nonatomic) NSString *accessoryButtonAccessibilityLabel; // @synthesize accessoryButtonAccessibilityLabel=_accessoryButtonAccessibilityLabel;
@property(nonatomic) SEL accessoryButtonAction; // @synthesize accessoryButtonAction=_accessoryButtonAction;
@property(nonatomic) _Bool accessoryButtonHidden; // @synthesize accessoryButtonHidden=_accessoryButtonHidden;
@property(nonatomic) __weak id accessoryButtonTarget; // @synthesize accessoryButtonTarget=_accessoryButtonTarget;
@property(retain, nonatomic) UIFont *accessoryButtonFont; // @synthesize accessoryButtonFont=_accessoryButtonFont;
@property(nonatomic) struct UIEdgeInsets accessoryButtonTextInsets; // @synthesize accessoryButtonTextInsets=_accessoryButtonTextInsets;
@property(nonatomic) double accessoryButtonElevation; // @synthesize accessoryButtonElevation=_accessoryButtonElevation;
@property(retain, nonatomic) UIColor *accessoryButtonTextColor; // @synthesize accessoryButtonTextColor=_accessoryButtonTextColor;
@property(nonatomic) _Bool accessoryButtonTextIsUppercase; // @synthesize accessoryButtonTextIsUppercase=_accessoryButtonTextIsUppercase;
@property(retain, nonatomic) NSString *accessoryButtonText; // @synthesize accessoryButtonText=_accessoryButtonText;
@property(retain, nonatomic) UIImage *accessoryButtonImage; // @synthesize accessoryButtonImage=_accessoryButtonImage;
- (_Bool)didTapAccessoryAction;
- (void)didTapOnButton;
- (id)accessibilityCustomActions;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;

@end

