//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIAccessibilityElement, UILabel;
@protocol ASMExpandingHeaderViewDelegate;

@interface ASMExpandingHeaderView : UIView
{
    _Bool _allowAccountSwitching;
    NSString *_name;
    NSString *_email;
    id <ASMExpandingHeaderViewDelegate> _delegate;
    UIView *_discContainer;
    UIView *_accountSwitcherContainer;
    UILabel *_nameLabel;
    UILabel *_mailLabel;
    NSLayoutConstraint *_expandingImageSizeConstraint;
    NSLayoutConstraint *_expandingImageLeftConstraint;
    NSLayoutConstraint *_expandingImageTopConstraint;
    double _maximumContainerDimension;
    UIAccessibilityElement *_accountSwitcherAccessibilityElement;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowAccountSwitching; // @synthesize allowAccountSwitching=_allowAccountSwitching;
@property(retain, nonatomic) UIAccessibilityElement *accountSwitcherAccessibilityElement; // @synthesize accountSwitcherAccessibilityElement=_accountSwitcherAccessibilityElement;
@property(nonatomic) double maximumContainerDimension; // @synthesize maximumContainerDimension=_maximumContainerDimension;
@property(retain, nonatomic) NSLayoutConstraint *expandingImageTopConstraint; // @synthesize expandingImageTopConstraint=_expandingImageTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandingImageLeftConstraint; // @synthesize expandingImageLeftConstraint=_expandingImageLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandingImageSizeConstraint; // @synthesize expandingImageSizeConstraint=_expandingImageSizeConstraint;
@property(retain, nonatomic) UILabel *mailLabel; // @synthesize mailLabel=_mailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *accountSwitcherContainer; // @synthesize accountSwitcherContainer=_accountSwitcherContainer;
@property(retain, nonatomic) UIView *discContainer; // @synthesize discContainer=_discContainer;
@property(nonatomic) __weak id <ASMExpandingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)mailLabelColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGPoint)calculateExpandedHeaderAvatarOrigin;
- (void)didTapChangeAccountRecognizer:(id)arg1;
- (void)updateMailLabelText;
- (void)updateNameLabelText;
- (void)didCollapse;
- (void)collapseToFraction:(double)arg1 withImageTargetFrame:(struct CGRect)arg2;
- (void)updateContentLayoutForCurrentTraitCollection;
- (id)initWithIdentityDiscContainer:(id)arg1 maximumContainerDimension:(double)arg2 delegate:(id)arg3 name:(id)arg4 email:(id)arg5 allowAccountSwitching:(_Bool)arg6;

@end

