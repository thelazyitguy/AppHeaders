//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLGM2AccountSelectorIncognitoItem.h"

#import "OGLGM2AccountSelectorCallbackItem-Protocol.h"

@class NSString;

@interface OGLGM2AccountSelectorIncognitoTurnOffItem : OGLGM2AccountSelectorIncognitoItem <OGLGM2AccountSelectorCallbackItem>
{
    _Bool _isAccessibilityElement;
    unsigned long long _accessibilityTraits;
    CDUnknownBlockType _actionCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement; // @synthesize isAccessibilityElement=_isAccessibilityElement;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) long long accountMenuAppearance;
@property(nonatomic) long long brandFontFace;
@property(nonatomic) _Bool cannotBeSelected;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long educationActionHighlightType;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool opaqueBackgroundColor;
@property(readonly) Class superclass;
@property(nonatomic, getter=isWithinInlineAccountMenu) _Bool withinInlineAccountMenu;
@property(nonatomic, getter=isWithinManageAccounts) _Bool withinManageAccounts;

@end
