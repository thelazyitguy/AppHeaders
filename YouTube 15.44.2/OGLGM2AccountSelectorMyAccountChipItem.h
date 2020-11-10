//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/OGLGM2AccountSelectorCallbackItem-Protocol.h>

@class NSString;

@interface OGLGM2AccountSelectorMyAccountChipItem : NSObject <OGLGM2AccountSelectorCallbackItem>
{
    _Bool _cannotBeSelected;
    _Bool _isAccessibilityElement;
    _Bool _opaqueBackgroundColor;
    _Bool _withinManageAccounts;
    _Bool _withinInlineAccountMenu;
    _Bool _accountAssociatedWithCriticalAlert;
    _Bool _hideBottomDivider;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    unsigned long long _accessibilityTraits;
    long long _accountMenuAppearance;
    long long _brandFontFace;
    CDUnknownBlockType _actionCallback;
    long long _educationActionHighlightType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideBottomDivider; // @synthesize hideBottomDivider=_hideBottomDivider;
@property(nonatomic) _Bool accountAssociatedWithCriticalAlert; // @synthesize accountAssociatedWithCriticalAlert=_accountAssociatedWithCriticalAlert;
@property(nonatomic) long long educationActionHighlightType; // @synthesize educationActionHighlightType=_educationActionHighlightType;
@property(nonatomic, getter=isWithinInlineAccountMenu) _Bool withinInlineAccountMenu; // @synthesize withinInlineAccountMenu=_withinInlineAccountMenu;
@property(nonatomic, getter=isWithinManageAccounts) _Bool withinManageAccounts; // @synthesize withinManageAccounts=_withinManageAccounts;
@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
@property(nonatomic) long long brandFontFace; // @synthesize brandFontFace=_brandFontFace;
@property(nonatomic) _Bool opaqueBackgroundColor; // @synthesize opaqueBackgroundColor=_opaqueBackgroundColor;
@property(nonatomic) long long accountMenuAppearance; // @synthesize accountMenuAppearance=_accountMenuAppearance;
@property(nonatomic) _Bool isAccessibilityElement; // @synthesize isAccessibilityElement=_isAccessibilityElement;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) _Bool cannotBeSelected; // @synthesize cannotBeSelected=_cannotBeSelected;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

